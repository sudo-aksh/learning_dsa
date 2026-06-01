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
// second funtion using resursion 
// have to use function this time cause c++ does not allow nested function concept 
int fibo(int a,int b,int c ,int n) {
    if (c==n) {
        return b;
    }
    return fibo(b,b+a,c+1,n);
}

int fibo_term_2(int n) {
 
    if (n ==1) {
        return 0;
    } 
    if (n ==2) {
        return 1;
    } 
    if (n<0) {
        cout << "enter only positive number." << endl;
        return -1;

    }
    
    return fibo(0,1,2,n);
}

int fibo_term_3(int n) {
    if(n<=1){
        return 0;
    }
    else {
        return fibo_term_3(n-1) + fibo_term_3(n-2);
    }
}

int main() {
    cout << fibo_term_1(9) << endl;
    cout << fibo_term_2(9) << endl;
    cout << fibo_term_3(4) << endl;
    return 0;
}

