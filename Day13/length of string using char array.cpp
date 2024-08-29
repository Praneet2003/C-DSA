#include<iostream>
#include<string>
using namespace std;
int getlength(char name[]){
    int count =0;
    for(int i=0;name[i] != '\0';i++){
        count++;
    }
    return count;
}
int main(){
    char name[10];
    cout<<"Enter your name: "<<endl;
    cin>>name;
    cout<<"The length of character array name is : "<<getlength(name);
}
// /tmp/mV2FTy4Ce2.o
// Enter your name: 
// Praneet
// The length of character array name is : 7

// === Code Execution Successful ===