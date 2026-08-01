#include <iostream>
using namespace std;
int main(){
    int a=10;
    int b=20;
    int *ptr1=&a;
    int *ptr2=&b;
    cout << " The value of a is "<< a << endl;
    cout << " The adress of a is "<< &a << endl;
    cout << " The pointer value of a is " << *ptr1 << endl;
    cout << " The value of b is "<< b <<endl;
    cout << " The adress of b is "<< &b << endl; 
    cout << " The pointer value of b is "<< *ptr2 <<endl;


    return 0;
}