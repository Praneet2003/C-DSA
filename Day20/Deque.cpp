#include<iostream>
#include<deque>
using namespace std;
//we can insert or delete elements of deque from front and last any of the end.
int main(){
    deque<int> d;
    d.push_back(10);
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<" Pushing 20 at front: "<<endl;
    d.push_front(20);
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"pushing 40 at back: "<<endl; 
    d.push_back(40);
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    // Acessing element of deque
    cout<<"Element at index 2 is: "<<d.at(2)<<endl;
    // Acessing first and the last element of deque.
    cout<<"Element at first: "<<d.front()<<endl;
    cout<<"Element at last: "<<d.back()<<endl;
    // checking whether the deque is empty or not.
    cout<<"deque is empty or not: "<<d.empty()<<endl;

    //Erasing the element of deque from begining.
    cout<<"The size of deque before erasing: "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"The size of deque after erasing: "<<d.size()<<endl;
    cout<<"Element remaning in deque: "<<endl;
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
     //Erasing the element of deque second time from ending.
    cout<<"The size of deque before erasing: "<<d.size()<<endl;
    d.erase(d.end()+1,d.end()+2);
    cout<<"The size of deque after erasing: "<<d.size()<<endl;
    cout<<"Element remaning in deque: "<<endl;
    for(int i:d){
        cout<<i<<" ";
    }
}