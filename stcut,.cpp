#include <iostream>
using namespace std; 

     struct student{
    string name;
    int age;
    int marks;
    };
int main(){
    struct student s;
    cout << " The Name of Student is: " <<endl;
    cin>>s.name;
    cout << " THe Age of Student is: "  <<endl;
    cin>>s.age;
    cout << " The Marks of Student is: " <<endl;
    cin>>s.marks;
    cout << " The Name of Student is: " << s.name << endl;
    cout << " The Age of Student is: " << s.age  << endl;
    cout << " The Marks of Student is: " << s.marks  << endl;

    return 0;

}
