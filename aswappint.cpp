#include <iostream> 
using namespace std;
int main() {
    int arrays[5];
    int temp;
    for( int i=0; i<5; i++){
        cout << "Enter Number " << i+1 <<endl;
        cin>>arrays[i];
    }
    for(int i=0; i<2; i++){
        temp=arrays[i];
        arrays[i]=arrays[4-i];
        arrays[4-i]=temp;
    }
        cout<< "REVERSED ARRAYS "   <<endl;
        cout << "The reversed arrays is " <<endl;
            for (int i=0; i<5; i++){
               cout <<arrays[i] <<endl;
   
            }
    return 0;
}