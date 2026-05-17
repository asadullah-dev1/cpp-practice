#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter value of a " << endl;
    cin>>a;
    cout<<"Enter value of b " << endl;
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<" After swapping " << endl;
    cout<< " a= " << a << endl;
    cout<< " b= " << b << endl;
}