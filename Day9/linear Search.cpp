#include<iostream>
using namespace std;
int find(int arr[],int n,int key,int i =0){
    for(int i =0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
return 0; 
}
int main(){
int n;
cout<<"Enter the size of array: ";
cin>>n;
int num[10];
cout<<endl<<"Enter the elements of the array: "<<endl;
for(int i=0;i<n;i++){
    cin>>num[i];
}

int ans = find(num,7,-9);
// cout<<ans;
// cout<<"Yes! we found the element at : "<<ans<<endl;
if(ans){
    cout<<"yes we found the element"<<ans<<endl;
}else{
    cout<<"Not Found!";
}
}