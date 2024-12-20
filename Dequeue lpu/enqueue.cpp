#include<iostream>
#define n 5
using namespace std;
class dequeue{
    private:
    int deque[n];
    int f;//front
    int r;//rear
    public:
    dequeue(){
        this->f = -1;
        this->r = -1;
    }
    void enqueuefront(int value){
        if((f == 0 && r == n-1)|| f == r+1){
            cout<<"Stack is overflow in front"<<endl;
        }else if(f==-1 && r==-1){
            f=r=0;
            deque[f]=value;
        }else if(f==0){
            f=n-1;
            deque[f]=value;
        }else{
            f--;
            deque[f]=value;
        }
    }
    void enqueuerear(int value){
        if((f == 0 && r == n-1)|| f == r+1){
            cout<<"Stack is overflow rear"<<endl;
        }else if(f==-1 && r==-1){
            f=r=0;
            deque[r]=value;
        }else{
            r++;
            deque[r]=value;
        }
    }
    void print(){
        for(int i=0;i<n;i++){
            cout<<deque[i]<<" ";
        }
    }
};
int main(){
    dequeue d;
    d.enqueuefront(5);
    d.enqueuefront(10);
    d.enqueuefront(20);
    d.enqueuefront(30);
    d.enqueuefront(14);
    // d.enqueuerear(4);
    // d.enqueuerear(3);
    d.print();
}