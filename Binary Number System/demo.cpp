#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;

    if (n < 0) {
        cout << "Please enter a non-negative number.\n";
        return 0;
    }

    string binary = "";
    do {
        binary = to_string(n % 2) + binary;
        n /= 2;
    } while (n > 0);

    cout << "Binary: " << binary << endl;
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
