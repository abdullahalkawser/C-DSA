#include <iostream>
using namespace std;

int main() {
    int decimal, binary = 0, place = 1;
    
    cout << "Enter a decimal number: ";
    cin >> decimal;
    
    int num = decimal; // Copy of the original number

    while (num > 0) {
        int remainder = num % 2;
        binary += remainder * place;
        num /= 2;
        place *= 10; // Shift place value
    }

    cout << "Binary equivalent: " << binary << endl;
    
    return 0;
}



// convert numbers from 1 to 10 into binary,

#include <iostream>
using namespace std;

int main() {
    for (int n = 1; n <= 10; n++) { // Loop from 1 to 10
        int num = n;
        string binary = "";

        // Convert current number to binary
        do {
            binary = to_string(num % 2) + binary;
            num /= 2;
        } while (num > 0);

        // Output the binary representation
        cout << "Decimal: " << n << " => Binary: " << binary << endl;
    }
    return 0;
}
