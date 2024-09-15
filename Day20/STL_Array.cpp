#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,4>a = {1,2,3,4};
    int size = a.size();
    for(int i=0;i<size; i++){
        cout<<a[i]<<endl;
    }
    //Acessing elements of STL array.
    // 1:) At the specific position using .at
    cout<<"Element at postion 3 is: "<<a.at(3)<<endl;
    // 2:) Acessing the first and the last element of array: 
    cout<<"First element of the array: "<<a.front()<<endl;
    cout<<"Last element of the array: "<<a.back()<<endl;
    // checking whether the array is empty or not.
    cout<<"The array is empty or not: "<<a.empty();
}