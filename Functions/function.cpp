#include <iostream>

// Function to calculate the sum of two integers
int calculateSum(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;

    // Input two numbers
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Call the function and display the result
    int result = calculateSum(num1, num2);
    std::cout << "The sum is: " << result << std::endl;

    return 0;
}
