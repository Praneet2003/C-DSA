#include <iostream>
using namespace std;
void MaxHeapify(int A[], int n, int i) {
    int largest = i;
    int l = 2 * i;
    int r = 2 * i + 1;
    if (l <= n && A[l] > A[largest]) {
        largest = l;
    }
    if (r <= n && A[r] > A[largest]) {
        largest = r;
    }
    if (largest != i) {
        swap(A[i], A[largest]);
        MaxHeapify(A, n, largest);
    }
}

void heapsort(int A[], int n) {
    for (int i = n/2; i>=1; i--) {
        MaxHeapify(A, n, i);
    }

    for (int i = n; i >0; i--) {
        swap(A[1], A[i]);
        MaxHeapify(A, i-1, 1);
    }
}
void printArray(int A[], int n) {
    for (int i = 1; i <= n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main() {
    int A[] = {70,60,55,45,50};
    int n = sizeof(A)/sizeof(A[0]);

    cout << "Original array: ";
    printArray(A, n);
    heapsort(A, n);
    cout << "Sorted array: ";
    printArray(A, n);
    return 0;
}