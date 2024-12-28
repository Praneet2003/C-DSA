// You are using GCC
#include <iostream>
using namespace std;
#define TABLE_SIZE 10
#include<cmath>
void readKeys(int keys[], int numKeys) {
    //Type your code
    for(int i=0;i<numKeys;i++){
        cin>>keys[i];
    }
}

void initializeHashTable(int hashTable[], int tableSize) {
    //Type your code
    for(int i=0;i<tableSize;i++){
        hashTable[i]= -1;
    }
}
bool isPrime(int n) {
    //Type your code
    int flag =0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            flag = 1;
            break;
        }
    }
    return flag==0;
}

void insertKey(int hashTable[], int tableSize, int key) {
    //Type your code
    int index = key%tableSize;
    if(hashTable[index]== -1){
        if(isPrime(index)){
            hashTable[index]=key;
        }
    }else{
        int h = index;
        int j=1;
        while(hashTable[index]!=-1){
            index=(h+j*j)%tableSize;
            j++;
        }
        if(isPrime(index)){
            hashTable[index]=key;
        }
    }
}


void printDishesInPrimePositions(int hashTable[], int tableSize) {
    //Type your code
    bool found = false;
    for(int i=1;i<tableSize;i++){
        if(hashTable[i]!=-1){
            cout<<"The price of the dish in prime position :"<<i<<" is Rs."<<hashTable[i]<<endl;
            found = true;
        }
    }
    if(!found){
        cout<<"No dish is placed in prime position"<<endl;
    }
}
int main() {
    int numKeys;
    cin >> numKeys;
    int keys[numKeys];
    int hashTable[TABLE_SIZE];

    readKeys(keys, numKeys);
    initializeHashTable(hashTable, TABLE_SIZE);

    for (int i = 0; i < numKeys; i++) {
        insertKey(hashTable, TABLE_SIZE, keys[i]);
    }

    printDishesInPrimePositions(hashTable, TABLE_SIZE);

    return 0;
}