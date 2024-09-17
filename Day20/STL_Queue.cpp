// Line me lagana, First in First out.
#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> q;
    q.push("Mehul");
    q.push("Praneet");
    q.push("Ayush");
    cout<<"Size of queue before pop: "<<q.size()<<endl;
    cout<<"First person: "<<q.front()<<endl;
    q.pop();
    cout<<"Second person: "<<q.front()<<endl;
    q.pop();
    cout<<"Third person: "<<q.front()<<endl;
    cout<<"Size of queue After pop: "<<q.size()<<endl;
}