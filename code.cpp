// c++ code to print the nth fibo term 

// first function for print the nth fibo term using for loop

#include <iostream>
using namespace std;

int fibo_term_1(int n){
    int a = 0;
    int b = 1;
    int new_term = 0;
    if (n ==1) {
        return 0;
    } else if (n ==2) {
        return 1;
    } else if (n>2) {
        for (int i = 0;i<n-2;i++) {
            new_term = a+b;
            a = b;
            b= new_term;
        }
    }
    return new_term;
}

int main() {
    cout << fibo_term_1(8) << endl;
    return 0;
}