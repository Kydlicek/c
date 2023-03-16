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
    cout << "sorted by age" << endl;
    for(int i = 0; i < *idx; i++){
        cout << array[i].age << " " << array[i].firstName << " " << array[i].lastName << endl;
    }
}
//sorts array by name
void sortName(unsigned int *idx, person array[]){
    std::sort(&array[0], &array[*idx], sortByName);
    //prints sorted array
    cout << "sorted by name" << endl;
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
void addUser(unsigned int *idx,int size,person array[]){
    //checks if array is full
    if (*idx < size){
        inUser(*idx, array);
        ++*idx;
    }
    else{
        cout << "array is full u cant add users" << endl;
    }
        
}
//delete user to array
void delUser(unsigned int *idx, person array[]){
    //checks if array is empty
    if (*idx == 0)
    {
        cout << "array is empty u cant delete people" << endl;
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


int main()
{
    int size, index;
    //user input for array size
    cout << "how many people ?" << endl;
    cin >> size;
    size = 5;
    //memory allocation
    person *array = new person[size];
    int &ref = size;
    unsigned int els = 0;

    //playground
    addUser(&els, ref, array);
    addUser(&els, ref, array);
    delUser(&els, array);
    sortAge(&els, array);
    sortName(&els, array);


    //dealocation
    delete[] array;
    return 0;
};
