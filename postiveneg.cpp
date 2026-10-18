#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter any Num to check is it negitive , postive or zero "<<endl;
    cin >> num;
    if (num == 0){
        cout << " The num is Zero " <<endl;
    }

    else if (num > 0) {
    cout << " The num is postive " <<endl;
    }

    else if ( num < 0 ){
        cout << " The num is negative " <<endl;
    }

    else {
        cout << " Invalid Input " <<endl;
    }
    return 0;
}