#include<iostream>
using namespace std;
int reverse(char name[],int n){
    int s=0,e=n-1;
    while(s<e){
        swap(name[s],name[e]);
        s++;
        e--;
    }
}
void printarr(char name[],int n){
    for(int i=0;i<n;i++){
        cout<<name[i];
    }
} 
int getlength(char name[]){
    int count=0;
    for(int i=0;name[i]!=0;i++){
        count++;
    }
}
int main(){
    char name[20];
    cout<<"enter your name "<<endl;
    cin>>name;
    int n=getlength(name);
    reverse(name,n);
    printarr(name,n);
}
// /tmp/s1JfrebTv5.o
// enter your name 
// praneet
// teenarp

// === Code Execution Successful ===