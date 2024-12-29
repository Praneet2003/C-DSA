#include <iostream>
using namespace std;

int divisionMethod(int key, int tableSize) {
    return key % tableSize;
}

void readKeys(int keys[], int numKeys) {
    for (int i = 0; i < numKeys; i++) {
        cin >> keys[i];
    }
}

void initializeHashTable(int hashTable[], int tableSize) {
    for (int i = 0; i < tableSize; i++) {
        hashTable[i] = -1; // Initialize all slots as empty
    }
}

void insertKeys(int hashTable[], int tableSize, int keys[], int numKeys) {
    for (int i = 0; i < numKeys; i++) {
        int index = divisionMethod(keys[i], tableSize);
        while (hashTable[index] != -1) { // Collision handling using linear probing
            index = (index + 1) % tableSize;
        }
        hashTable[index] = keys[i]; // Insert the key at the found index
    }
}

void printHashTable(int hashTable[], int tableSize) {
    for (int i = 0; i < tableSize; i++) {
        if (hashTable[i] != -1) { // Only print the slots that are occupied
            cout << "Table number " << i << ": Customer ID " << hashTable[i] << endl;
        }
    }
}

int main() {
    const int tableSize = 10;
    int numKeys;
    cin >> numKeys;

    int keys[numKeys];
    readKeys(keys, numKeys);

    int hashTable[tableSize];
    initializeHashTable(hashTable, tableSize);

    insertKeys(hashTable, tableSize, keys, numKeys);

    printHashTable(hashTable, tableSize);

    return 0;
}
