#include<iostream>
using namespace std;

/*new操作分配内存块，delete用于释放内存块*/
//Type* Pointer = new Pointer; // allocate memory
//delete Pointer; // release memory allocated above

//Type* Pointer = new Pointer[numElements]; //allocate a block
//delete[] Pointer; // release block allocated above

/*不及时释放分配的内存，有可能会产生内存泄漏*/

int main(){
    // Request for memory space for an int
    int* pointsToAnAge = new int;

    // Use the allocated memory to store a number
    cout << "Enter your dog's Age:";
    cin >> *pointsToAnAge;

    // use indirection operator* to access value
    cout << "Age " << *pointsToAnAge << " is stored at 0x" << hex << pointsToAnAge << endl;

    delete pointsToAnAge; // release memory

    return 0;
}