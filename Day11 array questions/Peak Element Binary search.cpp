#include<iostream>
using namespace std;
int peak(int arr[],int n){
	int s=0;
	int e=n-1;
	int mid=s+(e-s)/2;
	for(int i=0;i<n;i++){
		if(n>3)
		{
		if(arr[mid]<arr[mid+1]){
		
		return arr[mid+1];
		s=mid+1;
	}
		else if(arr[mid]>arr[mid+1]){
		
		e=mid-1;
			return arr[mid-1];
		}
		else
		return arr[mid];
	}
	mid=s+(e-s)/2;
}
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int ans=peak(a,n);
	cout<<ans;
}