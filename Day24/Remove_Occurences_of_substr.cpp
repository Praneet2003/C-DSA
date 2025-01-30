//Substring: continous sequence of charcter in strings.
#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    string removeOccurnces(string s, string part){
        while(s.length()>0 && s.find(part)<=s.length()){
            s.erase(s.find(part), part.length());
            // continue;
        }
        return s;
    }
};
int main(){
    string s;
    getline(cin,s);
    string part;
    getline(cin,part);
    solution s1;
    // while(s.length()>0){
        
        cout<<"The remaning string is: "<<s1.removeOccurnces(s,part);;
}