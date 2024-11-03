// You are using GCC
#include <iostream>
#include <iomanip> 
using namespace std;
int partition(float arr[], int low, int high){
    float pivot = arr[low];
    int cnt =0;
    for(int i = low+1; i <= high; i++){
        if(arr[i] <= pivot){
            cnt++;
        }
    }
    int pivotIndex = low+cnt;
    swap(arr[pivotIndex], arr[low]);
    int i=low;
    int j=high;
    while(i < pivotIndex && j > pivotIndex){
        while(arr[i] <= pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
        swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(float arr[], int low, int high)
{
    //Type your code here
    if(low>=high){
        return;
    }
    int p = partition(arr,low,high);
    quickSort(arr,low,p-1);
    quickSort(arr,p+1,high);
}

int main() {
    int n;
    cin >> n;

    float* temperatures = new float[n]; 
    
    for (int i = 0; i < n; i++) {
        cin >> temperatures[i];
    }

    quickSort(temperatures, 0, n - 1);

    cout << fixed << setprecision(2);
    for (int i = 0; i < n; i++) {
        cout << temperatures[i] << " ";
    }

    delete[] temperatures;

    return 0;
}
