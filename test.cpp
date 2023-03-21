#include <iostream>
#include <sstream>
#include <limits>
#include <new>
#include "main.h"
#include "test.h"

using namespace std;


//osetreni vstupu
//preplneni seznamu
//smazani uzivatele

bool tryReadInt(std::iostream& stream, unsigned int& result) {
    return bool(stream >> result);
}
bool tryReadString(std::iostream& stream, string& result) {
    return bool(stream >> result);
}


int main()
{

    unsigned size, index;
    size = 5;
    person *array = new person[size];
    unsigned int els = 0;

    testDeleteUserFromEmptyList(els, array);
    testAddUserToEmptyList(els, size, array);
    //adding users to populate list
    for (els; els < size; els++){
        addUser(els, size, array, true);
    }
    testAddUserToFullList(els, size, array);
    testDeleteUserFromFullList(els, array);
    
}
void testWrongInput(){
    ostringstream out;
    istringstream in("Strawberry 4321");

    in >> one;
    out << one;
    if( out.str() == "Strawberry                     4321")
    cout << "Success";
}

void dummy(){

}