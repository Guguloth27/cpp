#include <iostream> // For input and output

using namespace std;

int main() {
    // Display a hello world message
    cout << "Hello, World!" << endl;

    // Declare variables
    int a, b, sum;

    // Ask the user for input
    cout << "Enter the first number: ";
    cin >> a; // Input for the first number

    cout << "Enter the second number: ";
    cin >> b; // Input for the second number

    // Perform a simple addition
    sum = a + b;

    // Display the result
    cout << "The sum of " << a << " and " << b << " is: " << sum << endl;

    // Return 0 to indicate successful program execution
    return 0;
}
