//Q2. Inline Function
//Create an inline function cube() that takes an integer and returns its cube.
//Input: 3
//Output: 27

#include <iostream>
using namespace std;
inline int cube(int num){
   return num*num*num;
}
int main(){
    int num;
    cout << " Enter Any Num " <<endl;
    cin>>num;
    cout << " The cube of the num is: " << cube(num) << endl;
}