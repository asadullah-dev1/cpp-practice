#include <iostream>
using namespace std;
int main(){ 
    int arrays[]={2,7,11,15};
    for(int i=0; i<4; i++){
        for(int j= i+1; j<4; j++){
            if(arrays[i]+arrays[j]==9){
                cout<< "Indices are " << i << " and " << j <<endl;
            }
        }
    }
    
    return 0;
}