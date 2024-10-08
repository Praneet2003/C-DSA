#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="Praneet Raj";
    // getline(cin,s);
    char arr[20]={'p','r','a','\0','n','e','t',' ','R','a','j'};
    // cin>>arr;
    cout<<"The string value is: "<<s<<endl;
    cout<<"The char array value is: "<<arr<<endl;
	char s1[]="hello world";	
	string r="hello world";
	
	s[3]='\0';
	r[3]='\0';
	
	cout<<s<<endl<<r;
	//string does stop until the last value it prints the null character as well.
	return 0;
}