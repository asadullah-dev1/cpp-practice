#include <iostream>
using namespace std;
int main(){
    int num1;
    int num2;
    cout <<" Enter number 1 " << endl;
    cin>>num1;
     cout <<" Enter number 2 " <<endl;
    cin>>num2;
    int *ptr1=&num1;
    int *ptr2=&num2;
    cout<<"**********Before swapping**************" <<endl;
    cout<<"The value of num1 is "<< num1 << endl;
    cout<< "The adress of num2 is "<< &num1 <<endl;
    cout <<endl;
    cout<< "The value of num2 is "<< num2 << endl;
    cout<< " The adress of num2 is "<< &num2 << endl;
    cout<< " *************** After Swapping *************** "<<endl;
    int temp=*ptr1;
    *ptr1=*ptr2;
   *ptr2=temp;
    cout<<"The value of num1 is "<< num1 << endl;
    cout<< "The adress of num2 is "<< &num1 <<endl;
    cout <<endl;
    cout<< "The value of num2 is "<< num2 << endl;
    cout<< " The adress of num2 is "<< &num2 << endl;


    return 0;
}