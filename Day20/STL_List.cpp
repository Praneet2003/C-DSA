#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;
    l.push_front(20);
    l.push_back(3);
    l.push_front(4);
    cout<<"Before Erase: "<<endl;
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    l.erase(l.begin());
    //jisko iterator point krega wo delete ho jayega.
    cout<<"After erase: "<<endl;
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"size of list : "<<l.size()<<endl;
    cout<<"Front element: "<<l.front()<<endl;
    cout<<"Last element: "<<l.back()<<endl;
    
    //Creating a list initializing it with it's size & a constant element.
    list<int> b(5,23);
    for(int i:b){
        cout<<i<<" ";
    }
    cout<<endl;
}