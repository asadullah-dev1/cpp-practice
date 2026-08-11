/*Write a recursive function that prints numbers from 1 to 5.
Expected output:
1 2 3 4 5*/
#include <iostream>
using namespace std;
void printnum(int num ){
    if(num > 5 ){
        return;
    }
    cout << num;
    printnum(num+1);
}
int main () {
    printnum(1);
}