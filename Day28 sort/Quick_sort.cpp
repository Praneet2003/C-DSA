#include<iostream>
#include<iomanip>
using namespace std;
// void QuickSort(int* arr,int s,int e){
//     if(s>=e){
//         return;
//     }
//     int p = partition(arr,s,e);
//     QuickSort(arr,s,p-1);
//     QuickSort(arr,p+1,e);
// }
int partition(int arr[], int low, int high) {
    //Type your code here
    int pivot = arr[low];
    int count=0;
    for(int i=low+1;i<=high;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    int pivotIndex = low+count;
    swap(arr[pivotIndex],arr[low]);
    int i=low;
    int j = high;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<=pivot){
            i++;
        }while(arr[j]>pivot){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
        swap(arr[i++],arr[j--]);
        }
    }
}
// int partition(int* arr,int s,int e){
//     int pivot = arr[0];
//     int count = 0;
//     for(int i= s+1; i<= e; i++){
//         if(arr[i] <= pivot){
//             count++;
//         }
//     }
//     //place your pivot at the right place.
//     int pivotIndex = s+count;
//     swap(arr[pivotIndex], arr[s]);
//     int i = s;
//     int j = e;
//     while(i < pivotIndex && j > pivotIndex){
//         while(arr[i] <= pivot){
//             i++;
//         }
//         while(arr[j] > pivot){
//             j--;
//         }
//         if(i<pivotIndex && j>pivotIndex){
//             swap(arr[i++],arr[j--]);
//         }
//     }
//     // return pivotIndex;
// }
void quickSort(int arr[], int low, int high){
    //Type your code here
    if(low>=high){
        return;
    }
    int p = partition(arr,low,high);
    quickSort(arr,low,p-1);
    quickSort(arr,p+1,high);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}