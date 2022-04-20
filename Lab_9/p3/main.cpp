#include <iostream>
#include "HashTable.h"

void fillHashTable(HashTable*& ht) {
    std::string text;
    std::getline(std::cin, text);
    for(char c : text)
        insertHashTable(ht, c);
}

void printCharFrequency(HashTable* ht) {
    for(int i = 'A'; i <= 'Z'; i++)
        std::cout << (char)i << (char)(i+32)<<" " <<getHashTableValue(ht, i)<<'\n';
}

int main() {

    HashTable* ht = new HashTable;
    initHashTable(ht);

    fillHashTable(ht);

    printCharFrequency(ht);


    return 0;
}
