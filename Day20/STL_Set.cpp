//set has unique elements in it, it returns it's elements in sorted order
#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>s;
    s.insert(5);
    s.insert(5);
    s.insert(7);
    s.insert(6);
    s.insert(0);
    s.insert(4);
    s.insert(3);
    s.insert(2);
    s.insert(1);
    for(int i:s){
        cout<<i<<endl;
    } 
    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    for(int i:s){
        cout<<i<<endl;
    }cout<<endl;
    cout<<"5 is present or not: "<<s.count(5)<<endl;
    cout<<"-5 is present or not: "<<s.count(-5)<<endl; 
}