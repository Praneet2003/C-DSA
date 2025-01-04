#include<iostream>
#include<string>
using namespace std;
class Solution{
    private:
    bool valid(char ch){
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
            return 1;
        }else{
            return 0;
        }
    }
    //converting to lowercase
        char toLowercase(char ch){
            if((ch>='a' && ch<='z')||(ch>='0' && ch<='9')){
                return ch;
            }else{
                char temp = ch-'A'+'a';
                return temp;
            }
        }
        //Checking Palindrom.
        bool checkpalindrom(string a){
            int s = 0;
            int e = a.length()-1;
            while(s<=e){
                if(a[s]!=a[e]){
                    return 0;
                }else{
                    s++;
                    e--;
                }
            }
            return 1;
        }
    public:
    bool ispalindrom(string s){
        //sbse pehle sare faltu charcter htao.
        string temp;
        for(int j=0;j<s.length();j++){
            if(valid(s[j])){
                temp.push_back(s[j]);
            }
        }
        //Lower case me convert kro.
        for(int i=0;i<temp.length();i++){
            temp[i]=toLowercase(temp[i]);
        }
        //palindrom check.
        return checkpalindrom(temp);
    }
};
int main(){
    string s;
    getline(cin,s);
    Solution s1;
    if(s1.ispalindrom(s)){
        cout<<"The string is palindrom"<<endl;
    }else{
        cout<<"The string is not a palindrom"<<endl;
    }
}