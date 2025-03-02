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



//In C++, scope refers to the visibility and lifetime of variables. The two main types of scope are local scope and global scope.


//Example (Local Scope in C++)
 

void myFunction() {
    int x = 10; // Local variable
    cout << "Inside function, x = " << x << endl;
}

int main() {
    myFunction();
    // cout << x;  // ERROR! x is not accessible here
    return 0;
}

//2. Global Scope



int x = 5; // Global variable

void myFunction() {
    cout << "Inside function, x = " << x << endl;
}

int main() {
    cout << "In main, x = " << x << endl;
    myFunction();
    return 0;
}

//Data Type Modifiers in C++

//Signed and Unsigned Modifiers

int main() {
    signed int a = -10;  // Can store negative values
    unsigned int b = 10; // Only stores positive values

    cout << "Signed int: " << a << endl;
    cout << "Unsigned int: " << b << endl;
    
    return 0;
}


//Short and Long Modifiers

int main() {
    short int si = 32767;      // Max for short int
    long int li = 2147483647;  // Max for long int
    long long int lli = 9223372036854775807LL; // Max for long long

    cout << "Short int: " << si << endl;
    cout << "Long int: " << li << endl;
    cout << "Long long int: " << lli << endl;

    return 0;
}

//Data Type Modifiers with char



int main() {
    signed char sc = -50;  // Can be negative
    unsigned char uc = 250; // Cannot be negative

    cout << "Signed char: " << (int)sc << endl;
    cout << "Unsigned char: " << (int)uc << endl;

    return 0;
}

// Floating-Point Modifiers (long double)float → Usually 4 bytes (single precision).
// double → Usually 8 bytes (double precision).
// long double → 12 or 16 bytes (higher precision).

int main() {
    double d = 3.141592653589793;
    long double ld = 3.141592653589793238L;

    cout << "Double: " << d << endl;
    cout << "Long double: " << ld << endl;

    return 0;
}

// . Combining Modifiers
unsigned long int x;  
short int y;          
long long int z;


//Summary Table

signed	int, char	Allows positive and negative values

unsigned	int, char	Allows only positive values

short	int	Reduces the size (typically 2 bytes)

long	int, double	Increases the size (depends on system)

long long	int	Very large integer range

long double	double	Higher precision floating-point


