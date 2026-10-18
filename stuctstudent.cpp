#include <iostream> 
using namespace std;
struct student{
    string name;
    int rollno;
    float marks;
};
int main() {
    struct student s[5];
    for(int i=0; i<5; i++){
        cout<< "Enter the name " <<endl;
        cin>>s[i].name;
         cout<< "Enter the  roll num  marks " <<endl;
        cin>>s[i].rollno;
         cout<< "Enter the marks " <<endl;
        cin>>s[i].marks;
    }
        int highestindex=0;
        for (int i=1; i<5; i++){
            if(highestindex < s[i].marks){
                s[i].marks==highestindex;
                cout << " The highest marks of student is " << s->marks <<endl;
            }
        }

  
  }
