//Create a function printTable()
// that takes a number and prints its multiplication table from 1 to 10.
#include <iostream> 
using namespace std;
void printtable(int num){
    for(int i=1; i<=10; i++){
        cout << num << " X " << i << " is " << i * num <<endl;
    }
}
    int main() {
         printtable(7);
    }
