#include<iostream>
using namespace std;
char tolowerCase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }else{
        char temp = ch-'A'+'a';
        return temp;
    }
}
bool checkPalindrom(char ch[],int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        if(tolowerCase(ch[s])!=tolowerCase(ch[e])){
            return 0;
        }else{
            s++;
            e--;
        }
    }
    return 1;
}
int lengthof(char ch[]){
    int count = 0;
    for(int i=0;ch[i]!='\0';i++){
        count++;
    }
    return count;
}
int main(){
    char name[20];
    cout<<"Enter the charcte array: ";
    cin>>name;
    int n = lengthof(name);
    if(checkPalindrom(name,n)){
        cout<<"Yes! it is palindrom";
    }else{
        cout<<"Not a palindrom";
    }
}
// Enter the charcte array: Nitin
// Yes! it is palindrom