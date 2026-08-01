/*Q1. Pointer Basics

Declare an integer variable num = 10 and a pointer to it. Print:

Value of num
Address of num
Address stored in the pointer
Value using the pointer*/
#include <iostream>
using namespace std;
int main(){
    int num=10;
    int *ptr =&num;
    cout<< " The value of the num is " << num << endl;
    cout<< " The adress of the num is " <<&num << endl;
    cout<< " The adress stored in the pointer is " << ptr << endl;
    cout<< "The value using teh pointer is " << *ptr << endl;

    return 0;
}