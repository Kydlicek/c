#include <iostream>
#include <new>
#include "main.h"

using namespace std;


int main()
{
    int size, index;
    //user input for array size
    cout << "how many people ?" << endl;
    cin >> size;
    //memory allocation
    person *array = new person[size];
    unsigned int els = 0;

    //playground
    addUser(els, size, array, false);
    addUser(els, size, array, false);
    addUser(els, size, array, false);
    delUser(els, array, false);
    sortAge(els, array);
    sortName(els, array);


    //dealocation
    delete[] array;
    return 0;
};
