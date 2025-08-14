
#include <iostream>
using namespace std;

// to start just start with basic factorial using recursion
int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

// power linear
int power(int base, int exp) {
    if (exp == 0) {
        return 1;
    }
    return base * power(base, exp - 1);
}

// power logarithmic
int power2(int base, int exp) {
    if (exp == 0) {
        return 1;
    }
    if (exp % 2 == 0) {
        int half = power(base, exp / 2);
        return half * half;
    }
    return base * power(base, exp - 1);
}


// print zig zag
void printZigZag(int n) {
    if (n == 0) {
        return;
    }
    cout << n << " ";
    printZigZag(n - 1);
    cout << n << " ";
    printZigZag(n - 1);
}


int tower(int n, char a , char b , char c) {
    if (n == 0) {
        return 0;
    }
    tower(n - 1, a, c, b);
    cout << "Move disk " << n << " from rod " << a << " to rod " << c << endl;
    tower(n - 1, b, a, c);
    return 0;
}

int main() {


    // Example usage of factorial
    // printZigZag(3);

    tower(3, 'A', 'B', 'C');
    // cout << "Hello World\n";
    return 0;
}
