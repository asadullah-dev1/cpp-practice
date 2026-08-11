//Q1. Inline Function
//Create an inline function square() that takes an integer and returns its square.
//Example:
//Input: 5
//Output: 25

#include <iostream> 
using namespace std;
inline int square(int  num){
    return num * num;
}
int main() 
{
    int num;
    cout << " Enter any numbre " <<endl;
    cin>>num;
    cout << " The value of int square is:  " <<  square (num) <<endl;
}