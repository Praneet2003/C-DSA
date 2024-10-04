#include<iostream>
using namespace std;
void reverse(char arr[],int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}
int length(char arr[]){
    int count=0;
    for(int i=0;arr[i]!='\0';i++){
        count++;
    }
    return count;
}
int main(){
    char name[20];
    cout<<"Enter the string to reverse: ";
    cin>>name;
    cout<<"String before reversing it."<<endl;
    cout<<name<<endl;
    int n= length(name);
    reverse(name,n);
    cout<<"String after revesing it."<<endl;
    cout<<name;
}