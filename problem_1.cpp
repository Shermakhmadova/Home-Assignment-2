//
// Created by user on 4/9/2023.
//

#include "problem_1.h"
#include <iostream>
using namespace std;
int age;
void problem1() {
    if (age > 18) {
        cout << "Eligible";
    } else {
        cout << "Not Eligible";
    }
}
int main(){
    cout << "enter your age:" << endl;
    cin >> age;
    cout<<problem1;
}
