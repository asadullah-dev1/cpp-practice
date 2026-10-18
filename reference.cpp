//Swap two numbers — Call by Value
#include <iostream>
using namespace std;
void swap(int a , int b){
    int temp =a;
    b=a;
    temp=b;
}
int main(){
    int a= 4;
   int b =3;
    cout << a << b <<endl;
    
}