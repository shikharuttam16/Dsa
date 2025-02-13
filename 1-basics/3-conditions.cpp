#include<iostream>

using namespace std;

int main(){
    int age;
    cout << "Enter age" << endl;
    cin >>age;

    if(age > 18){
        cout << "You are an adult";
    }
    else if(age < 18) {
        cout << "you are not an adult";
    }
    else{
        cout << "You are nothing";
    }
}