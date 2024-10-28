#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q;
    q.push(11);
    cout<<"font of queue is: "<<q.front()<<endl;
    q.push(15);
    cout<<"font of queue is: "<<q.front()<<endl;
    q.push(13);
    cout<<"font of queue is: "<<q.front()<<endl;
    cout<<"Size of queue is: "<<q.size()<<endl;
    q.pop();
    cout<<"font of queue is: "<<q.front()<<endl;;
    cout<<"size of queue id: "<<q.size();
    if(q.empty()){
        cout<<"queue is empty"<<endl;
    }else{
        cout<<"queue is not empty"<<endl;
    }
}