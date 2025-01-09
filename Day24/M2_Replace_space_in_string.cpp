#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    // cin>>s;
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            cout<<"@40";
        }else{
            cout<<s[i];
        }
    }
}