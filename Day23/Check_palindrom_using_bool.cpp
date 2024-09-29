#include<iostream>
using namespace std;
bool check(char arr[],int n){
    int s=0;
    // int n = sizeof(arr)/sizeof(arr[0]);
    int e = n-1;
    //Method2:-
    while(s<e){
        if(arr[s]!=arr[e]){
            return 0;
        }else{
            s++;
            e--;
        }
    }
    return 1;
}
int lengthof(char arr[]){
    int count = 0;
    for(int j=0; arr[j]!='\0';j++){
        count++;
    }
    return count;
}
int main(){
    char name[20];
    cout<<"Eneter the word to check palindrom: ";
    cin>>name;
    int n = lengthof(name);
    if(check(name,n)){
        cout<<"The char array is palindrom"<<endl;
    }else{
        cout<<"The char array is not a plindrom"<<endl;
    }
    cout<<"The length of char array is: "<<lengthof(name);
}