// Ask the user to enter a number 1–7. Print the day of the week
//  (1 = Monday, 2 = Tuesday … 7 = Sunday). If input is invalid, print "Invalid day."

#include <iostream>
using namespace std;
int main(){
    int num;
    cout<< "Enter number from 1 to 7 for week days " << endl;
    cin>>num;
switch(num){
    case 1:
    cout<<" Monday ";
    break;


    case 2:
    cout<< "Tuesday";
    break;


    case 3:
    cout << "wednesday";
    break;


    case 4:
    cout<< "Thursday";
    break;


    case 5:
    cout<< "Friday";
    break;


    case 6:
    cout<< "saturday";
    break;


    case 7:
    cout<< "Sunday";
    break;

    
    default:
    cout<<"invalid input";
}
}