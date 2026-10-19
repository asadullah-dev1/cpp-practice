#include <iostream> 
using namespace std;
struct book{
    string title;
    string author;
    int price;

};

void input (book &b){
    cout <<" Enter Title of the Book ";
    getline(cin,b.title);

    cout << " Enter the Authore Name";
    getline(cin,b.author);

    cout<< "Enter the Price of the Book";
    cin>>b.price;
}

void display(book b){
    cout << "The Title of the Book is: "<< b.title <<endl;
    cout << "The Name of the Author is: "<< b.author <<endl;
    cout << "The Price of the Book is: "<< b.price <<endl;
}
int main(){
    book b1;
    input(b1);
    display(b1);
}