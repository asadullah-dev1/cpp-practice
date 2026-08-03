#include <iostream>
using namespace std;
int main() {
    int arrays[7];
    int searchnumber;
    bool found=false;
    for(int i=0; i<7; i++){
        cout << " Enter any number " <<endl;
        cin>>arrays[i];
    
    }
    cout<<" Enter value for search numbers " <<endl;
        cin>>searchnumber;
    for(int j=0; j<7; j++){
      if(arrays[j]==searchnumber){
        cout<< searchnumber << " is found at index " << j << endl;
        found=true;
        break;
      }
    }
      if(found==false){
        cout<< searchnumber << "The number you put so not in array "<<endl;
         
        
      }
    
      

    return 0;
}