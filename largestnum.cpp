#include <iostream> 
using namespace std;
int main() {
    int num1,num2,num3;
    int largest;
    cout << " Enter 1 Num: " ;
    cin>>num1;
    cout << "Enter 2 Num: ";
    cin>>num2;
    cout << " Enter 3 Num: ";
    cin>>num3;

    largest=num1;

        if (num2 > largest){
           largest = num2;

        }
        if (num3 > largest)
        {
           largest = num3;
        }
        
            cout << " The greater num is " << largest ;
        

    

    return 0;
}