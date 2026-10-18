#include <iostream> 
using namespace std;
int main(){
    int num1, num2;
    int choice;
    cout << " Enter 1 Num: ";
    cin>>num1;
    cout << " Enter 2 Num: ";
    cin>>num2;

    cout << " Press 1 for Addition " <<endl;
    cout << " Press 2 for Subtraction " <<endl;
    cout << " Press 3 for Multiplication " <<endl;
    cout << " Press 4 for Division" <<endl;

    cout << " Enter your choice " <<endl;
    cin>>choice;

    switch (choice){
        case 1:
        cout << num1 << " + " << num2 << " = " << num1 + num2 <<endl;
        break;


        case 2:
        cout << num1 << " - " << num2 << " = " << num1 - num2 <<endl;
        break;

        case 3:
        cout << num1 << " * " << num2 << " = " << num1 * num2 <<endl;
        break;

        case 4:
        if(num2==0){
            cout << " Cannot divide by zero! ";
        }
        else {
          cout << num1 << " / " << num2 << " = " << num1 / num2 <<endl;
        }
        break;
        

        default:
        cout<< " Invalid Input " <<endl;
    }
    
}