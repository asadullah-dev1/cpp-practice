#include <iostream>
using namespace std;
int main() {
    int unit;
    cout << " Enter Unit you consumed this month " <<endl;
    cin >> unit;

    if (unit > 0 && unit <= 100){
        
        cout << " Your Electricity Bill is: " << unit * 10  << endl;
    }
    else if ( unit > 100 && unit <=200 )
    {
        cout << " Your Electricity Bill is: " << unit * 15 << endl;
    }
    else if (unit > 200) {
        cout << " Your Electricity Bill is: " << unit * 20 <<endl;
    }
    else{
        cout << " Invlaid Input " <<endl;
    }
}