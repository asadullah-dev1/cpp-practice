//Create a function isEven() that takes an integer and prints whether it is even or odd.
#include <iostream> 
using namespace std;
void even(int num){
    if(num%2==0){
        cout << "This is even" <<endl;
    }
    else {
        cout << "Odd " <<endl;
    }
    
}
int main () {
    even(2);
    even(92);
    return 0;
}