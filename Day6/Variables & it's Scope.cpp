#include<iostream>
using namespace std;
int main(){
    int a = 3;//Global variable
    cout<<a<<endl;
    if(true){
        cout<<a<<endl;
        //will give global value.
        int a = 5;//Local variable for if block.
        cout<<a <<endl;
        //will give the local value
    }
    cout<<a<<endl;
    int i =3;//Global value of i.
    // will give global value.
    for(int i =1;i<=8;i++){
        cout<<"Hi"<<endl;
        // By using local i , it will print Hi 8 times.
    }
    for(i;i<=8;i++){
        cout<<"Hey"<<endl;
        // By using the global value of i,
        // it will not print Hey,not even a single time.
    }

}
// Output:- 3 5 3
