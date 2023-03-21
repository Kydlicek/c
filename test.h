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
void testWrongInputName(string testVar){
    string valid;
    validateString(testVar) ? valid = "TRUE INPUT IS VALID STRING" : valid = "FALSE INPUT IS NOT VALID STRING";
    cout << "Test Wrong Input String : value = " << testVar << endl;
    cout << valid <<  endl;
    cout << "" << endl;
}

void testWrongInputNumber(string testVar){
    string valid;
    validateNumber(testVar) ? valid = "TRUE STRING IS NUMBER" : valid = "FALSE STRING IS NOT NUMBER";
    cout << "Test Wrong Input Number : value = " << testVar  << endl;
    cout << valid <<  endl;
    cout << "" << endl;
}