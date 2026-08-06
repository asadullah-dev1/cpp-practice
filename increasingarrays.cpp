// Increase every array element by 5 using pointers.
#include <iostream>
using namespace std;
int main() {
    int size=5;
int arrays[]={12,7,-3,40,9};
int *ptr=arrays;
while(ptr < arrays + size){
    *ptr +=  5;
    ptr++;
}
    for(int *ptr=arrays; ptr < arrays + size; ptr++){
        cout << *ptr << "  " <<endl;
    }


    return 0;
}