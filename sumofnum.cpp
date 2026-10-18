#include <iostream>
using namespace std;
int main() {
    int num;
    int sum=0;
    cout << " Enter any Number " <<endl;
    cin>>num;   

    for (int i=0; i <=num; i++){
        sum += i;
    }
    cout << " The Sum is " << sum;
    
    return 0;
}