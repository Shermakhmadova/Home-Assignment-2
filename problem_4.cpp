//
// Created by user on 4/9/2023.
//

#include "problem_4.h"
#include <iostream>
using namespace std;
int month;

void problem4() {
    switch (month) {
        case 1:
            cout<<"31";
            break;
        case 2:
            cout<<"28";
            break;
        case 3:
            cout<<"31";
            break;
        case 4:
            cout<<"30";
            break;
        case 5:
            cout<<"31";
            break;
        case 6:
            cout<<"30";
            break;
        case 7:
            cout<<"31";
            break;
        case 8:
            cout<<"31";
            break;
        case 9:
            cout<<"30";
            break;
        case 10:
            cout<<"31";
            break;
        case 11:
            cout<<"30";
            break;
        case 12:
            cout<<"31";
            break;
    }
}

int main(){
    cout<<"enter the value of month:\n";
    cin>>month;
    cout<<problem4;
}