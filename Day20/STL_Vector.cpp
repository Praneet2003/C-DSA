#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    
    // initializing vector with  it's size and same number.
    
    vector<int> a(5,1);//here 5 is the size and 1 is constant.
    cout<<"The elements of vector a are: "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    
    //Coping the elements of a in another vector.
    
    vector<int> b(a);
    cout<<"The elements of vector b are: "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"Capacity is : "<<v.capacity()<<endl;
    
    // Inserting element inside vector using pushback.

    v.push_back(10);
    // Capacity of vector: it denotes how much space is assigned for the elements.
    cout<<"Capacity is : "<<v.capacity()<<endl;
    v.push_back(20);
    cout<<"Capacity is : "<<v.capacity()<<endl;
    v.push_back(30);//capacity double hote jata hai.
    cout<<"Capacity is : "<<v.capacity()<<endl;

    // Size of vector: it denotes how many elements are already present in the vector.
    cout<<"size of vector is : "<<v.size()<<endl;

    //Acessing the elements of vector.
    // 1:) At specific position: 
    cout<<"Element at index 2: "<<v.at(2)<<endl;
    // 2:) Acessing the first & last element of vector: 
    cout<<"front element: "<<v.front()<<endl;
    cout<<"Back element: "<<v.back()<<endl;
    // Removing the elements from last in vector.
    cout<<"before popback, the elements of vector are: "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    v.pop_back();
    cout<<"After popback the elements of vector are: "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
}