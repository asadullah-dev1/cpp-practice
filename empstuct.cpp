#include <iostream>
using namespace std;
struct emp {
    string name;
    int id;
    float salary;
};
int main(){
struct emp asad;
cout << "The name of emp is " <<endl;
cin>>asad.name;
cout << "The id of emp is " <<endl;
cin>>asad.id;
cout << "The salary of emp is " <<endl;
cin>>asad.salary;
cout << " The name of emp is: " << asad.name  << endl;
cout << " The id of emp is: " <<  asad.id << endl;
cout << " The salary of emp is: " << asad.salary  << endl;
return 0;
}