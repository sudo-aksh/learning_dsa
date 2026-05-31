// c++ code to print the nth fibo term 

#include <iostream>
using namespace std;

int main() {
    int a = 0;
    int b = 1;
    int n;
    cout << "which nth fibo term you want : ";
    cin >> n;
    if (n ==1) {
        cout << "0" << endl;
    } else if (n ==2) {
        cout << "1" << endl;;
    } else if (n>2) {
        int new_term = 0;
        for (int i = 0;i<n-2;i++) {
            new_term = a+b;
            a = b;
            b= new_term;
        }
        cout << new_term << endl;
    }
    return 0;
}