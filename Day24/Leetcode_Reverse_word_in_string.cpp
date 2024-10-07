//Reverse the string word as well as the charcaters of the string
// input: My name is praneet
// Output: teenarp si eman yM
#include<iostream>
#include<string>
using namespace std;
void reverse(string a){
    int s = 0;
    int e = a.length()-1;
    while(s<e){
        swap(a[s],a[e]);
    }
}
int main(){
    string s;
    getline(cin,s);
    reverse(s);
    cout<<"the string after Reversing words and characters : ";
    for(int i=0;i<s.length()-1;i++){
        cout<<s[i];
    }
}