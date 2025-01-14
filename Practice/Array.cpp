#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n=10;
    int arr[n];
    float sum =0.0;
    for(int i=0;i<10;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    // sort(arr,arr+10);
    // cout<<"Average is: "<<sum/n<<endl;
    // cout<<"Largest element: "<<arr[n-1]<<endl;
    // cout<<"Second largest element: "<<arr[n-2];
    //without Sorting
    int maxi = INT8_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>maxi){
            maxi = arr[i];
            swap(arr[n-1],arr[i]);
        }
    }
    n--;
    int max2 = INT8_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max2){
            max2 = arr[i];
        }
    }
    cout<<"Largest: "<<maxi<<endl;
    cout<<"Second Largest: "<<max2;
}