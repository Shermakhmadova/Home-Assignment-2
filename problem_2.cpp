//
// Created by user on 4/9/2023.
//

#include "problem_2.h"
#include <iostream>
using namespace std;
float a, b, c;

void problem2(){
    if(a>b&&a>c){
        cout<<"the maximum number is:"<<a;
    } else if (b>c&&b>a){
        cout<<"the maximum number is:"<<b;
    } else{
        cout<<"the maximum number is:"<<c;
    }
}
int main(){
    cin>>a>>b>>c;
    cout<<problem2;
}