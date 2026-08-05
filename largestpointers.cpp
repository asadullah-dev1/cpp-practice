// Find the largest element using pointers.
#include <iostream>
using namespace std;
int main() {
    int element [5];
    int *ptr=element;
    
    for(int i=0; i<5; i++){
        cout << "Enter Number: " <<i+1 <<endl;
        cin>>*(ptr + i);
    }
    int largest=element[0];
    for ( int i=1; i<5; i++){
        if(largest<*(ptr+i)){
            largest=*(ptr + i);
            
        }
        
    }
     cout << "The largest number of element is: " << largest <<endl;

    return 0;
}