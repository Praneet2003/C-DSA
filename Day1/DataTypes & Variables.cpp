#include<iostream>
using namespace std;
int main(){
    cout<< "namaste Duniya"<<endl;
    int a = 123;// size is 2 or 4 byte.
    cout<<a<<endl;
    char b = 'v';//size is 1 byte.
    cout<<b<<endl;
    bool bi = true;//size is 1 byte.
    cout<<bi<<endl;
    float f = 1.2;//size is 8 byte.
    cout<<f<<endl;
    double d= 20.7808;//size is 8 byte.
    cout<<d<<endl;
    unsigned int ai = 95;
    cout<< ai<<endl;
    unsigned int ci= -122;
    cout<< ci <<endl;//gives garbage value.
    int x = 2;
    int y = 5;
    cout<< x/y <<endl; 
}