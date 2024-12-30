// You are using GCC
#include<bits/stdc++.h>
#include<cstring>
#define HASH_TABLE_SIZE 100
using namespace std;
unsigned int customHash(char* key) {
    //Type your code here
    unsigned long long hashvalue=0;
    for(int i=0; key[i]!= '\0'; i++){
        char ch = key[i];
        hashvalue = ((hashvalue*31)+ch)%HASH_TABLE_SIZE;
    }
    return hashvalue;
}

int main() {
    //Type your code here
    char s[100];
    while(true){
        cin>>s;
        if(strcmp(s,"exit")==0){
            break;
        }
        int index = customHash(s);
        cout<<index<<endl;
    }
    return 0;
}