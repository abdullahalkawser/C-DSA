//Bitwise operators in C++

#include <iostream>

int main() {
    int a = 5, b = 8;
    
    std::cout << "a & b = " << (a & b) << std::endl;  // AND
    std::cout << "a | b = " << (a | b) << std::endl;  // OR
    std::cout << "a ^ b = " << (a ^ b) << std::endl;  // XOR
    std::cout << "~a = " << (~a) << std::endl;        // NOT
    std::cout << "a << 1 = " << (a << 1) << std::endl; // Left Shift
    std::cout << "a >> 3 = " << (a >> 3) << std::endl; // Right Shift

    return 0;
}
