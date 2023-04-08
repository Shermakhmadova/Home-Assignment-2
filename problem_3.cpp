//
// Created by user on 4/9/2023.
//

#include "problem_3.h"
#include <iostream>
using namespace std;
char o;
double a, b;
void problem3() {

    switch(o) {
        case '+':
            cout << a << " + " << b << " = " << a + b;
            break;
        case '-':
            cout << a << " - " << b << " = " << a - b;
            break;
        case '*':
            cout << a << " * " << b << " = " << a * b;
            break;
        case '/':
            if (a == 0) {
                cout << "Error: division by zero";
            } else {
                cout << a << " / " << b << " = " << a/b;
            }
            break;
    }
}

int main(){
    cout << "Enter the operator (+, -, *, /): \n";
    cin >> o;
    cout << "Enter two numbers: \n";
    cin >> a >> b;

    cout<<problem3;
}