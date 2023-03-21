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
    testWrongInputName("Pepa");
    testWrongInputNumber("4124");

    cout << "//////////////" << endl;
    cout << "DUMMY FUNCTION" << endl;
    cout << "//////////////" << endl;
    cout << "" << endl;

    testWrongInputName("213");
    testWrongInputNumber("sara");
    addUser(els, size, array, true) ? cout << "USER ADDED" << endl : cout << "USER NOT ADDED" << endl;
    cout << "" << endl;
    cout << "ELEMENTS IN ARRAY " << els << " FROM SIZE OF " << size << endl;
    cout << "" << endl;
    testAddUserToFullList(els, size, array);
    array[0] = {"20", "Adam", "Blecha"};
    array[1] = {"18", "Cecílie", "Mašková"};
    array[2] = {"21", "Denisa", "Čentešová"};
    array[3] = {"30", "Emil", "Brko"};
    array[4] = {"12", "Gabriela", "Vrbová"};

    sortAge(els, array);
    cout << "" << endl;
    sortName(els, array);


}