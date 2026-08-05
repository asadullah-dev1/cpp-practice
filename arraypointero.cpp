// Print all array elements using only pointers.
#include <iostream> 
using namespace std;
int main() {
    int marks[5];
    int *ptr=marks;
    for( int i =0; i<5; i ++ ){
        cout <<  "Enter Number "<<i+1 <<endl;
        cin>>marks[i];
    }
    
    cout << " The value of mark[0] is:" << *(ptr) <<endl;
    
    cout << " The value of mark[1] is:" << *(ptr+1) <<endl;
    
    cout << " The value of mark[2] is:" << *(ptr+2) <<endl;
    
    cout << " The value of mark[3] is:" << *(ptr+3) <<endl;
    
    cout << " The value of mark[4] is:" << *(ptr+4) <<endl;
    

    return 0;
}