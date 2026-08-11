/*Q3. Default Argument
Create a function:
void greet(string name, string message = "Welcome");
Call it in two different ways:
Providing both arguments.
Providing only the name.
Figure out what the output should be.*/

#include <iostream>
using namespace std;
void greet(string name , string messages= "Welcome"){
    cout << " Hello " << name  << messages << endl; 
}
int main (){
    greet("Asad" ," yeeeeey ");
    greet( " Asad ");
    return 0;
}