#include<iostream>
using namespace std;
int main(){
    int k;int size = 10;
    cin>>k;
    int hashtable[size];
    for(int i=0;i<size ;i++){
        hashtable[i]=-1;
    }
    for(int i=0;i<k;i++){
        int key;
        cin>>key;
        int index = (2*key+3)%size;
        if(hashtable[index]==-1){
            hashtable[index]=key;
        }else{
            int j=1;
            int h = index;
            while(hashtable[index]!=-1){
                index = (h+j*j)%size;// calculating index in each iteration
                j++;
            }
            hashtable[index]=key;
        }
        cout<<"Address of "<<key<<"is: "<<index<<endl;
    }
    for(int i=0;i<size;i++){
        if(hashtable[i]!=-1){
            cout<<hashtable[i]<<" ";
        }else{
            cout<<"_";
        }
    }
}
