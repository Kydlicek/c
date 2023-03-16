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
void sortAge(unsigned int *idx, person array[]){
    std::sort(&array[0], &array[*idx], sortByAge);
    //prints sorted array
    cout << "SORTED BY AGE" << endl;
    for(int i = 0; i < *idx; i++){
        cout << array[i].age << " " << array[i].firstName << " " << array[i].lastName << endl;
    }
}
//sorts array by name
void sortName(unsigned int *idx, person array[]){
    std::sort(&array[0], &array[*idx], sortByName);
    //prints sorted array
    cout << "SORTED BY NAME" << endl;
    for(int i = 0; i < *idx; i++){
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
string validateString(string name){
    //while loop until input is valid
    while (!valChars(name))
    {
        cout << "INVALID INPUT PLEASE ENTER ONLY LETTERS" << endl;
        cout << "TEST COMPLETE" << endl;
        name = "marek";
    }
    return name;
}
// input form for creating user
void inUser(unsigned int i,person arr[]){
    arr[i].age = 10;
    arr[i].firstName = "marek";
    arr[i].lastName = "koren";
    cout << "userAdded: " << i << endl;
}
//adds user to array
void addUser(unsigned int *idx,int size,person array[]){
    //checks if array is full
    if (*idx < size){
        inUser(*idx, array);
        ++*idx;
    }
    else{
        cout << "TEST COMPLETE ARRAY IS FULL CANT ADD MORE ELEMENTS" << " ACTIVE USERS:" << *idx << endl;
    }
        
}
//delete user to array
void delUser(unsigned int *idx, person array[]){
    //checks if array is empty
    if (*idx == 0)
    {
        cout << "TEST COMPLETE ARRAY IS EMPTY CAN'T REMOVE USERS" << " ACTIVE USERS:" << *idx << endl;
        return;
    }
    else{
        int index, i;
        cout << "which index to delete?" << endl;
        //lists all users for user to choose which one to delete
        for (i = 0; i < *idx; i++)
        {
            cout << i << " "<< array[i].age << " " << array[i].firstName << " " << array[i].lastName << endl;
        }
        //user chooses which user to delete
        cin >> index;
        //shifts all users after the deleted user to the left
        for (i = index; i < *idx; i++)
        {
            array[i] = array[i +1];
        }
        --*idx;
    }
}
void testRemoveMoreThanArray(unsigned int *els, person array[]){
    //testing
    delUser(els,array);
}
void testAddMoreUsersThanArray(unsigned int *els,int ref, person array[]){
    //testing
    for (int i = 0; i < 6; i++){
        addUser(els,ref,array);
    }
}
void testSortingByAge(unsigned int *els, person array[]){
    //testing
    array[0] = {10,"marek","koren"};
    array[1] = {40,"petr","matus"};
    array[2] = {110,"simona","zadvorska"};
    array[3] = {12,"adam","pavel"};
    array[4] = {33,"honza","smrk"};
    sortAge(els,array);

}
void testSortingByName(unsigned int *els, person array[]){
    //testing
    array[0] = {10,"marek","koren"};
    array[1] = {40,"petr","matus"};
    array[2] = {110,"simona","zadvorska"};
    array[3] = {12,"adam","pavel"};
    array[4] = {33,"honza","smrk"};
    sortName(els,array);
}

void testWrongInputs(){
    //testing
    cout << "Validate String passing 10" << endl;
    validateString("10");
    cout << "Validate Int enter a str" << endl;
    validateInt();
}

int main()
{
    int size, index;
    //array size
    size = 5;
    //memory allocation
    person *array = new person[size];
    int &ref = size;
    unsigned int els = 0;

    testRemoveMoreThanArray(&els, array);
    testAddMoreUsersThanArray(&els,ref, array);
    testSortingByAge(&els, array);
    testSortingByName(&els, array);
    testWrongInputs();



    //dealocation
    delete[] array;
    return 0;
};
