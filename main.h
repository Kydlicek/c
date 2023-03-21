#pragma once

#include <iostream>
#include <algorithm>
#include <array>
#include <string>
#include <new>
using namespace std;



struct person{
    int age;
    string firstName;
    string lastName;
};


//sorting function
bool sortByAge(person a, person b){
    return a.age < b.age;
}
//sorting function
bool sortByName(person a, person b){
    return a.firstName < b.firstName;
}

//sorts array by age
void sortAge(unsigned int idx, person array[]){
    std::sort(&array[0], &array[idx], sortByAge);
    //prints sorted array
    cout << "sorted by age" << endl;
    for(unsigned int i = 0; i < idx; i++){
        cout << array[i].age << " " << array[i].firstName << " " << array[i].lastName << endl;
    }
}
//sorts array by name
void sortName(unsigned int idx, person array[]){
    std::sort(&array[0], &array[idx], sortByName);
    //prints sorted array
    cout << "sorted by name" << endl;
    for(unsigned int i = 0; i < idx; i++){
        cout << array[i].age << " " << array[i].firstName << " " << array[i].lastName << endl;
    }
}

//checks input for int
int validateInt(){
   unsigned int age;
    //while loop until input is valid int
    while (!(cin >> age))
    {
        cin.clear();
        cin.ignore(123, '\n');
        cout << "Invalid input; please re-enter number.\n";
    }
    return age;
}

//checks all characters in string for letters
bool valChars(const std::string s)
{
    for (const char c : s) {
        if (!isalpha(c))
            return false;
    }

    return true;
}

//checks input for string
string validateString(){
    string name;
    cin >> name;
    //while loop until input is valid
    while (!valChars(name))
    {
        cout << "Invalid input; please re-enter string.\n";
        cin >> name;
    }
    return name;
}
// input form for creating user
void inUser(unsigned int i,person arr[]){
    // user input
    cout << "input age" << endl;
    arr[i].age = validateInt();

    cout << "input first name" << endl;
    arr[i].firstName = validateString();

    cout << "input last name" << endl;
    arr[i].lastName = validateString();
}
//adds user to array
bool addUser(unsigned int &idx,int size,person array[], bool test){
    if (idx < size){
        if (test){
            array[idx].age = 20;
            array[idx].firstName = "Adam";
            array[idx].lastName = "Jakota";
        }
        else{
            inUser(idx, array);
        }
        ++idx;
        return true;
    }
    else{
        return false;
    }
        
}
//delete user to array
bool delUser(unsigned int &idx, person array[], bool num){
    //checks if array is empty&
    if (idx == 0)
    {
        return false;
    }
    else{
        unsigned int index, i;
        if (num){
            index = 0;
        }
        else {
            cout << "which index to delete?" << endl;
            //lists all users for user to choose which one to delete
            for (i = 0; i < idx; i++)
            {
            cout << i << " "<< array[i].age << " " << array[i].firstName << " " << array[i].lastName << endl;
            }
            //user chooses which user to delete
            cin >> index;
            }

        //shifts all users after the deleted user to the left
        for (index; i < idx; i++)
        {
            array[index] = array[index +1];
        }
        --idx;
        return true;
    }
}
