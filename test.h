#pragma once

#include <iostream>
#include <algorithm>
#include <array>
#include <string>
using namespace std;

void testDeleteUserFromEmptyList(unsigned int &els,person array[]){
    cout << "test Delete User From Empty List" << endl;
    if (delUser(els, array, true)) {
        cout << "TRUE USER DELETED" << endl;
    } else {
        cout << "FALSE NO USERS TO DELETE" << endl;
      
    }
    cout << "" << endl;
}
void testDeleteUserFromFullList(unsigned int &els,person array[]){
    cout << "test Delete User From Full List" << endl;
    if (delUser(els, array, true)) {
        cout << "TRUE USER DELETED" << endl;
    } else {
        cout << "FALSE NO USERS TO DELETE" << endl;
      
    }
    cout << "" << endl;
}

void testAddUserToEmptyList(unsigned int &els,int size,person array[]){
    cout << "test Add User To Empty List" << endl;
     if (addUser(els, size, array, true)) {
        cout << "TRUE USER ADDED" << endl;
    } else {
        cout << "FALSE USER NOT ADDED" << endl;
    }
    cout << "" << endl;
}
void testAddUserToFullList(unsigned int &els,int size,person array[]){
    cout << "test Add User To Full List" << endl;
     if (addUser(els, size, array, true)) {
        cout << "TRUE USER ADDED" << endl;
    } else {
        cout << "FALSE USER NOT ADDED" << endl;
    }
    cout << "" << endl;
}