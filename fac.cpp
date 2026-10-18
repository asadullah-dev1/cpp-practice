#include <iostream> 
using namespace std;
int main () {
    int num;
    int fac=1;
    cout << " Enter Any Number " <<endl;
    cin>>num;
    if( num < 0){
        cout<< " Please Enter a Non-Negative Number " <<endl;
    }
    else {
    for (int i = 1; i <= num; i++){
        fac *= i;
    }
    
    cout << " The factorial of this is " << fac << endl;
    }
    return 0;
}