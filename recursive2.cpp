#include <iostream> 
using namespace std;
void printbackwards(int num ){
    if(num < 1 ){
        return;
    }
    cout << num;
    printbackwards(num-1);
}
int main () {
    printbackwards(5);
}