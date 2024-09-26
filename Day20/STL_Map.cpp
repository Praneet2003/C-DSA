//in map value exist in key:value pairs.
// key must be uniquiely pointing to value
#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string>m;//key is int & value is string.
    m[1]="Praneet";
    m[2]="Raj";
    m[13]="scorpio";
    for(auto i:m){
        cout<<i.first<<" ";//i,first gives the key.
        cout<<i.second<<endl;//i.second gives the key value.
    }
    //method 2 for inserting of elements in map.
    m.insert({5,"Prateek"});
    m.insert({6,"Ram"});
    cout<<"After insertion throgh second method";
    for(auto i:m){
        cout<<i.first<<" ";//i,first gives the key.
        cout<<i.second<<endl;//i.second gives the key value.
    }
    //finding the element in map using map.
    cout<<"Finding 13 -> "<<m.count(13)<<endl;
    cout<<"Before Erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" ";//i,first gives the key.
        cout<<i.second<<endl;//i.second gives the key value.
    }
    m.erase(13);
    cout<<"After erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" ";//i,first gives the key.
        cout<<i.second<<endl;//i.second gives the key value.
    }
    auto it = m.find(5);
    cout<<"finding 5 using iterator "<<endl; 
    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }
}
