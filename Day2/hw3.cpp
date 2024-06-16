#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the character: ";
    cin>>ch;
    if(ch>'a'&&ch<'z'){
        cout<<"This is LowerCase."<<endl;
    }else if(ch>='A' && ch<='Z'){
        cout<<"This is UpperCase"<<endl;
    }else if(ch>=0 && ch<=9){
        cout<<"This is Numeric";
    }else{
        cout<<"Enter a valid Character."<<endl;
    }
}