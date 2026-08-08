#include <iostream>
using namespace std;

enum Day {
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

int main() {
    int choice;

    cout << "Enter number between 0 and 6: ";
    cin >> choice;

    switch (choice) {
        case MONDAY:
            cout << "Monday";
            break;
        case TUESDAY:
            cout << "Tuesday";
            break;
        case WEDNESDAY:
            cout << "Wednesday";
            break;
        case THURSDAY:
            cout << "Thursday";
            break;
        case FRIDAY:
            cout << "Friday";
            break;
        case SATURDAY:
            cout << "Saturday";
            break;
        case SUNDAY:
            cout << "Sunday";
            break;
        default:
            cout << "Invalid number";
    }

    return 0;
}   