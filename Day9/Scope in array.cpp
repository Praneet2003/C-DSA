// here in the scope of array we will aunderstand that how an array is different from a normal variable.
//the array in the main function shares the address of it's first element i.e the origional array also get updated.
//while the normal variable does'nt get updated.
#include<iostream>
using namespace std;
void update(int arr[],int n){
    cout<<"Startint the update function"<<endl;
    arr[1]= 120;
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Going back to the main function"<<endl;
}
int main(){
int n;
cin>>n;
int num[7] = {1, 30, 36, 49 ,40 ,50};
update(num,n);
for (int i=0;i<n;i++){
cout<<num[i]<<" ";
}
}
// /tmp/SkKT7gZZGU.o
// 6
// Startint the update function
// 1 120 36 49 40 50 
// Going back to the main function
// 1 120 36 49 40 50 

// === Code Execution Successful ===