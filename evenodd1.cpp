#include <iostream>
using namespace std;
int main() {

    int num;

    cout << " Enter any number to check even or odd " << endl;
    cin>>num;

    if(num%2==0){
        cout << " The num is Even " <<endl;

    }

    else{
        cout << " The num is Odd  " <<endl;
    }
    return 0;
}