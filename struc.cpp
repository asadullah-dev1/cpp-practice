
#include <iostream>
using namespace std;
struct student {
    string name;
    int age;
    int marks;

};
void input (student &s){
    cout << " What's Your Name "<<endl;
    getline(cin,s.name);
   
    cout << " What's Your Age "<<endl;
    cin>>s.age;
    cout << " How much marks you gain?" <<endl;
    cin>>s.marks;
}
void dispaly (student s){
  cout << " You're Nmae is " << s.name << endl;
    cout << " You're Age is " << s.age << endl;
    cout << " You're Marks is " << s.marks << endl;
}
int main() {
    student s1;
    input (s1);
    dispaly(s1);
}