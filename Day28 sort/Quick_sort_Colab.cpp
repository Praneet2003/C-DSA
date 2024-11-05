// You are using GCC
#include <iostream>
using namespace std;

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

void quickSort(int arr[], int low, int high){
    //Type your code here
    if(low>=high){
        return;
    }
    int p = partition(arr,low,high);
    quickSort(arr,low,p-1);
    quickSort(arr,p+1,high);
}

void recursiveQuickSort(int arr[], int n){
    quickSort(arr, 0, n - 1);
}

int main() {
    int n;
    cin >> n;

    int* years = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> years[i];
    }

    recursiveQuickSort(years, n);

    for (int i = 0; i < n; i++) {
        cout << years[i] << " ";
    }
    
    delete[] years;

    return 0;
}
