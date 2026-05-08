#include <iostream>
using namespace std;
int main() {
    char any;
    cout<<"Enter any chac for bell sound "<<endl;
    cin>>any;
    cout<<"\a";
    cout<<"bell ring! you pressed " << any <<endl;
    return 0;
}