#include <iostream>
using namespace std;

struct student {
    string name;
    int rollno;
    float marks;
};

int main() {
    student s[5];

    for (int i = 0; i < 5; i++) {
        cout << "Enter name: ";
        cin >> s[i].name;

        cout << "Enter roll number: ";
        cin >> s[i].rollno;

        cout << "Enter marks: ";
        cin >> s[i].marks;
    }

    int highestindex = 0;

    for (int i = 1; i < 5; i++) {
        if (s[i].marks > s[highestindex].marks) {
            highestindex = i;
        }
    }

    cout << "\nStudent with highest marks:\n";
    cout << "Name: " << s[highestindex].name << endl;
    cout << "Roll number: " << s[highestindex].rollno << endl;
    cout << "Marks: " << s[highestindex].marks << endl;

    return 0;
}