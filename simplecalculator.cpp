// Build a simple calculator.Take two numbers and an operator (+,-,*,/) from the user.Usen switch 
// to perform the correct operation and print the result. Handle division by zero separately.


#include <iostream>
using namespace std;
int main(){
    int n1,n2;
    char op;
    cout<< " Enter N1  "<<endl;
    cin>>n1;
    cout<< " Enter N2 " << endl;
    cin>>n2;
    cout<<" Enter any opreater to proceed e.g (+, -, *, /)"<<endl;
    cin>>op;
    switch (op){
        case '+':
        cout<<" The sum of N1 and N2 is: "<<n1+n2 << endl;
            break;


             case '-':
        cout<<" The sum of N1 and N2 is: "<<n1-n2 << endl;
            break;


             case '*':
        cout<<" The sum of N1 and N2 is: "<<n1*n2 << endl;
            break;


             case '/':
              if (n2==0)
    {
        cout<<" The number should be more than 0 "<<endl;
    }
    else{
        cout<< "divide normally"<< n1/n2 <<endl;
    }
            break;
            

            default:
            cout<< " invalid input " << endl;
    }
   
return 0;
}