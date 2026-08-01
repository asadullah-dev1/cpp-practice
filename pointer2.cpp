#include<iostream>
using namespace std;
int main(){
    int num;
    cout << " Enter any integer" <<endl;
    cin>>num;
    int *ptr=&num;
    *ptr+=10;
    cout << "The value of num is " << num << endl;
    cout << "The adress of num (&num) is "<< &num << endl;
    cout << "The value of num (*ptr) is " << *ptr <<endl;
    cout<< " The adress of num is (ptr) is " << ptr <<endl;

return 0;

  
}