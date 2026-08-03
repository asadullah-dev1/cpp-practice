#include <iostream>
using namespace std;

int main(){
    int arrays[5];
    for(int i=0; i<5; i++){
        cout<< "Enter Number " << i+1 <<endl;
        cin>> arrays[i];

    }
      cout << "REVERSED ARRAYS IS SHOWN AS "  << endl;
        for (int i=4; i>=0; i--){
        
          cout<< arrays[i] <<endl;
        }
          
    return 0;
}