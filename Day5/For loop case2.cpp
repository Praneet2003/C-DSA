//For loop without any initialization,
//condition, increment/Decrement inside it.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    int i =1;
    for(; ;){
        if(i<=n){
            cout<<i<<endl;
            i++;
        }
    //Agr yaha pe i++ krte to infinite loop chla jayega,kyuki for loop ko condintion pta nhi hai.
    }
}
// /tmp/DqZVyoOfRl.o
// enter the value of n: 10
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
// 10
