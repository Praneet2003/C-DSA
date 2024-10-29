#include<iostream>
#include<string>
#include<cctype>
using namespace std;
class Demo{
    public:
    void processString(const string &input){
        string alnum ="";
        string non_alnum ="";
        for(char ch:input){
            if(isalnum(ch)){
                alnum+=ch;
            }else{
                non_alnum+=ch;
            }
        }
    cout<<alnum<<non_alnum<<endl;
    }
};
class Main: public Demo{
    public:
    void getinput(){
        string inputstring;
        cin>>inputstring;
    processString(inputstring);
    }
};
int main(){
    Main obj;
    obj.getinput();
    return 0;
}