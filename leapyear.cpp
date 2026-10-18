#include <iostream>
using namespace std;
int main() {
    int year;

    cout << " Enter Any Year to Check Weather its Leap Year Or Not " <<endl;
    cin>> year;

    if (year % 400 ==0 ){
        cout << " It's a Leap Year " <<endl;
    }
    else if ( year % 100 ==0  ){
        cout << " It's Not a leap year " <<endl;
    }
    else if ( year % 4 == 0 ){
        cout << " It's a Leap Year " <<endl;
    }
    else {
        cout << " It's Not a Leap Year " <<endl;
    }
    return 0;
}