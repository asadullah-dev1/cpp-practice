#include <iostream>
using namespace std;
int main () {
    int arrays[5];
    int even=0;
    int odd=0;
    for ( int i=0; i<5; i++){
        cout << "Enter any number " <<endl;
        cin>>arrays[i];
        if(arrays[i]%2==0){
            cout<<" this is even numbers " << endl;
            cout << even++ <<endl;
            
        }
        else{
            cout<< "that's an odd number" <<endl;
            cout<< odd++ <<endl;
        }
    }
}