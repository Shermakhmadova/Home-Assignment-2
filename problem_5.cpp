//
// Created by user on 4/9/2023.
//

#include "problem_5.h"
#include <iostream>
using namespace std;
char ch;
void problem5() {
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
        cout<<"You have entered an Alphabet";
    } else if (ch>='0'){
        cout<<"You have entered a Digit";
    } else{
        cout<<"It's a special character";
    }
}

int main(){
    cout<<"enter the character:\n";
    cin>> ch;
    cout<<problem5;
}