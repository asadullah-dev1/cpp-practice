// Find the sum of an array using pointers.
#include <iostream>
using namespace std;
int main (){
    int marks[5];
    int *ptr=marks;
    for (int i=0; i<5; i++){
        cout<< "Enter Number "<<i+1<<endl;
        cin>>marks[i];
    }
        cout<< " The sum of arrays using pointers is: " << *(ptr)+*(ptr+1)+*(ptr+2)+*(ptr+3)+*(ptr+4) <<endl;
    return 0;
}