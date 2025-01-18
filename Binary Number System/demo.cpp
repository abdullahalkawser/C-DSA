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
