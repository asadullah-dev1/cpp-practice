
#include <iostream>
using namespace std;
struct student {
    string name;
    int age;
    int marks;

};
int main() {
    student s1;
    cout << " What's Your Name "<<endl;
    getline(cin,s1.name);
    cin.ignore();
    cout << " What's Your Age "<<endl;
    cin>>s1.age;
    cout << " How much marks you gain?" <<endl;
    cin>>s1.marks;
    

    cout << " You're Nmae is " << s1.name << endl;
    cout << " You're Age is " << s1.age << endl;
    cout << " You're Marks is " << s1.marks << endl;
}