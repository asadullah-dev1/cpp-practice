#include <iostream> 
using namespace std;
int main () {
    int num;

    cout << " Enter Any Number Between 1 - 10 For Table: ";
    cin>>num;
    
    switch(num){
        case 1:
        for(int i=0; i <=10 ; i++){
            cout << " 1" << " X " << i << " = " << i*1 <<endl;
        }
        break;

         case 2:
        for(int i=1; i <=10 ; i++){
            cout << " 2" << " X " << i << " = " << i*2 <<endl;
        }
        break;

            case 3:
        for(int i=1; i <=10 ; i++){
            cout << " 3" << " X " << i << " = " << i*3 <<endl;
        }
        break;

             case 4:
        for(int i=1; i <=10 ; i++){
            cout << " 4" << " X " << i << " = " << i*4 <<endl;
        }
        break;

             case 5:
        for(int i=1; i <=10 ; i++){
            cout << " 5" << " X " << i << " = " << i*5 <<endl;
        }
        break;

             case 6:
        for(int i=1; i <=10 ; i++){
            cout << " 6" << " X " << i << " = " << i*6 <<endl;
        }
        break;

            case 7:
        for(int i=1; i <=10 ; i++){
            cout << " 7" << " X " << i << " = " << i*7 <<endl;
        }
        break;

            case 8:
        for(int i=1; i <=10 ; i++){
            cout << " 8" << " X " << i << " = " << i*8 <<endl;
        }
        break;

            case 9:
        for(int i=1; i <=10 ; i++){
            cout << " 9" << " X " << i << " = " << i*9 <<endl;
        }
        break;

            case 10:
        for(int i=1; i <=10 ; i++){
            cout << " 10" << " X " << i << " = " << i*10 <<endl;
        }
        break;
    }

    return 0;

}