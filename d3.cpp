#include <iostream>
using namespace std;  

int powermultiply(int base , int exp = 3 ){
    int result =1;
    for ( int i = 1 ; i <=exp; i++) {
        result= result * base;
    }
        return result;
}

int main () {
    cout << powermultiply( 5 )<<endl;
    cout << powermultiply( 5 , 4 )<<endl;
}