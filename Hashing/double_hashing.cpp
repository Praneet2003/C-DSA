#include <iostream>
using namespace std;
int main(){
    int k;
    int size = 10;
    cout << "Enter the number of keys to insert: ";
    cin >> k;
    int hashtable[10];
    // Initialize hash table to -1 (indicating empty slots)
    for (int i = 0; i < 10; i++)
    hashtable[i] = -1;
    cout << "Enter " << k << " keys:\n";
    for (int i = 0; i < k; i++){// Input key
    int key;
    cin >> key;
    // Primary hash function: h1(key) = (2 * key + 3) % size
    int index = (2 * key + 3) % size;
    // Secondary hash function: h2(key) = (3 * key + 1) % size
    int stepSize = (3 * key + 1) % size;
    // Check if stepSize is zero
    if (stepSize == 0){
        cout << "\nCannot insert key " << key << " because stepSize is zero.";
        continue;
    }
    // Double Hashing to handle collisions with growing stepSize (*i)
    if (hashtable[index] == -1){
        hashtable[index] = key;
    }else{
        int h = index;
        int attempt = 0;
        while (hashtable[index] != -1){
            // Increment attempt count for each collision resolution step
            attempt++;
            // Update index using double hashing formula with growing stepSize
            index = (h + stepSize * attempt) % size;
            // If we loop back to the original index, the table is full
            if (index == h){
                cout << "\nHash Table is Full. Cannot insert key: " << key;
                break;
            }
        }
        // Insert key if an empty slot is found
        if (hashtable[index] == -1)
            hashtable[index] = key;
        }
        cout << "\nAddress of " << key << " is: " << index;
    }
    // Print the hash table
    cout << "\n\nHash Table:";
    for (int i = 0; i < 10; i++){
        if (hashtable[i] != -1)
            cout << "\nIndex " << i << " : Key = " << hashtable[i];
        else
            cout << "\nIndex " << i << " : Empty";
    }   
return 0;
}