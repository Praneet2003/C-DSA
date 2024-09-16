#include<iostream>
#include<queue>
using namespace std;
int main(){
    //by default max heap create ho gya. 
    priority_queue<int> maxi;
    priority_queue<int,vector<int>, greater<int>>mini;
    maxi.push(1);
    maxi.push(20);
    maxi.push(13);
    maxi.push(89);
    int n = maxi.size();
    cout<<"The size of priority_queue is: "<<n<<endl;
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        //element bada se chota print hota jayega.
        maxi.pop();
    }cout<<endl;
    mini.push(10);
    mini.push(72);
    mini.push(51);
    mini.push(61);
    int m = mini.size();
    for(int i=0;i<m;i++){
        cout<<mini.top()<<" ";
        //element chota se bada print hota jayega.
        mini.pop();
    }cout<<endl;
    cout<<"Empty or not: "<<mini.empty()<<endl;
}