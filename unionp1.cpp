// */7. Basic Union — Easy

// Create a union:

// union Data

// with:

// int
// float
// char

// Store an integer in it and display it.

// Then store a float and display it.

// Question: What happens to the previous integer?/*
#include <iostream>
using namespace std;

union Data {
    int i;
    float f;
    char c;
};

int main() {
    Data d;

    d.i = 10;
    cout << "Integer: " << d.i << endl;

    d.f = 5.5;
    cout << "Float: " << d.f << endl;

    return 0;
}