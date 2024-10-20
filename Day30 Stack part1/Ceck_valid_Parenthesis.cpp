#include<bits/stdc++.h>
using namespace std;
bool isValidParenthesis(string exp){
    stack<char> s;
    char ch;
    for(int i=0;i<exp.length();i++){
        char ch = exp[i];
        if(ch=='(' || ch=='{' || ch == '['){
            s.push(ch);
        }else{
            if(!s.empty()){
                char top = s.top();
                if((top=='(' && ch == ')')|| (top=='{' && ch == '}') || (top=='[' && ch == ']')){
                    s.pop();
                }else{
                    return 0;
                }
            }else{
                return 0;
            }
        }
    }
    if(s.empty()){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    string s;
    cout<<"Enter the bracket expression: ";
    cin>>s;
    if(isValidParenthesis(s)){
        cout<<"the bracket expression is valid/Balanced.";
    }else{
        cout<<"the bracket expression is not valid/Balanced.";
    }
} 