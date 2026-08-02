
// Find the largest element in an array.
#include <iostream>
using namespace std;
int main (){
    int arrays[5];
    
    for(int i=0; i<=4; i++){
        cout<< "Enter the number five times" <<endl;
        cin>>arrays[i];
    }
    int largest=arrays[0];
        for (int j=1; j<5; j++){
            if(arrays[j]>largest){
                largest=arrays[j];
            }
        }
        cout<<"The largest element is "<< largest << endl;
    return 0;
}