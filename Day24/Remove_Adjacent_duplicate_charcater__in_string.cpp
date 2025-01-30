#include<bits/stdc++.h>
using namespace std;
string removeDuplicates(string s){
    for(int i=0;i<s.length();i++){
        int count =0,start =0;
        if(s[i]==s[i+1]){
            start = i;
            count++;
            // s.erase(i,count);
        }
        s.erase(start,start+count);
    }
    return s;
}
int main(){
    string s;
    cin>>s;
    cout<<"After removing all duplicates: "<<removeDuplicates(s);
}