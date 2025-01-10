#include<iostream>
using namespace std;
int main(){
    int k,size = 10;
    cin>>k;// here k is the number of elements to be kept in hash table
    int hashtable[size];
    for(int i=0;i<size;i++){
        hashtable[i]=-1;// empty hash table all are assigned as -1
    }
    for(int i=0;i<k;i++){
        int key;
        cin>>key;
        int index = (2*key+3)%size;
        if(hashtable[index]==-1){
            hashtable[index]=key;// agar space khali hai to key insert hoga
        }else{
            while(hashtable[index]!=-1){
                index++;// index empty na hone pr increment kr do
                if(index==size){// agar increment hote hote table size ke equal aa jaye to index ko 0 assign kr do
                    index=0;
                }
            }
            hashtable[index]=key;
        }
        cout<<"Address of "<<key<<" is :"<<index<<endl;
    }
    for(int i=0;i<size;i++){
        if(hashtable[i]!=-1){
            cout<<hashtable[i]<<" ";
        }else{
            cout<<"_";
        }
    }
}
