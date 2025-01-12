#include <iostream>
using namespace std;

void printTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int n = 5; // Example size of the triangle
    printTriangle(n);
    return 0;
}


//Right-Angled Triangle

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

//Inverted Right-Angled Triangle

#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter the number of rows: ";
    cin >> a;

    for (int i = a; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
