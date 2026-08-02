// Find the smallest element in an array.
#include <iostream>
using namespace std;
int main() {
    int arrays[5];
    for(int i=0; i<=4; i++){
        cout<< "Enter any numbers " <<endl;
        cin>>arrays[i];
    }
    int smallest=arrays[0];
    for(int j=1; j<5; j++){
        if(arrays[j]<smallest)
        smallest=arrays[j];
    }
    cout << "The smallest number is " << smallest <<endl;

    return 0;
}