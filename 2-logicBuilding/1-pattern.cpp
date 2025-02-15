#include<iostream>
using namespace std;
void print1(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout<<endl;
    }
}

void print2(int n){
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<=i;j++){
            cout << "*";
        }
        cout << endl;
    }
}

void print3(int n){
    for (int i = 0; i < n; i++)
    {
        for(int j=1;j<=i+1;j++){
            cout << j;
        }
        cout << endl;
    }
}

void print4(int n){
    for (int i = 1; i <= n; i++)
    {
        for(int j=0;j<i;j++){
            cout << i;
        }
        cout << endl;
    }
}

// *****
// ****
// ***
// **
// *
// i = 0 j = 5 
// i = 1 j = 4
// i = 2 j = 3
void print5(int n){
    for (int i = 0; i < n; i++)
    {
        for(int j=n-i ;j>0;j--){
            cout << "*";
        }
        cout<<endl;
    }
}

int main(){
   int n;
   cout << "Enter number";
   cin >> n;
//    print1(n);
//    print2(n);
//    print3(n);
//    print4(n);
      print5(n);
}

