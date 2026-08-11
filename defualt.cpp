/*Q4. Default Argument
Create a function power() that calculates:
base^exponent
Make the default exponent 2.
So:
power(5)     → 25
power(5, 3)  → 125*/

#include <iostream>
using namespace std; 

int power(int base, int exp = 2){
    int result =1 ;
    for(int i = 1; i <= exp; i++){
        result = result * base;
    }
    return result;
}
int main(){
cout << power( 5 ) <<endl;
cout << power( 5, 3) <<endl;

}