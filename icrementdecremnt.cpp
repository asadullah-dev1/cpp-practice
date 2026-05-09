#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter any num "<<endl;
    cin>>num;
    cout<<" Num after pre  increment " << ++num <<endl;
    cout<<" Num after post increment " << num++ <<endl;
    cout<<" Num after pre  decrement " << --num <<endl;
    cout<<" Num after post decrement " << num-- <<endl;
    return 0;

    }   