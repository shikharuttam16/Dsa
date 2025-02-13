#include<iostream>
// #include<bits/stdc++.h>
using namespace std;

int main(){
    //int 4 bytes -2147,483,648 to 2147,483,647
    int x = 10;
    // long big number can be stores here
    long y = 15;
    // long long is used to store even bigger number
    long long z = 1500000000;
    cout << x << y << z;

    //float 4 byte 
    float xx = 5.6;
    
    // double 8 byte
    double yy = 5.5;

    // string and getline
    // string s1,s2;
    // cout << "Enter full name";
    // cin >> s1 >> s2;
    // cout << s1 << " " << s2;

    // Similar to cin in string we can do getline()
    // string str;
    // getline(cin,str);
    // cout << "Str val " << str;

    //Character
    char ch;
    ch = 's';
    cout << "Character" << ch << endl;
    return 0;
}