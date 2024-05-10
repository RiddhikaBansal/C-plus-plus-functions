#include<iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() { // Corrected parentheses after main
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Sum is: " << add(a, b); // Calling add() with arguments and storing result in a variable
    return 0;
}
