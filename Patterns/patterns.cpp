// Example size of the triangle

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
    int n = 5; 
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


//Pyramid Pattern

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

//Diamond Pattern

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    // Upper part of the diamond
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower part of the diamond
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

// Checkerboard Pattern

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the board: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if ((i + j) % 2 == 0) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}

Singleton Pattern

#include <iostream>
#include <mutex>

class Singleton {
private:
    static Singleton* instance;
    static std::mutex mtx; // For thread safety
    Singleton() {}         // Private constructor

public:
    // Delete copy constructor and assignment operator
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

    static Singleton* getInstance() {
        std::lock_guard<std::mutex> lock(mtx);
        if (instance == nullptr) {
            instance = new Singleton();
        }
        return instance;
    }

    void displayMessage() {
        std::cout << "Singleton Instance: Hello, World!" << std::endl;
    }
};

Singleton* Singleton::instance = nullptr;
std::mutex Singleton::mtx;

int main() {
    Singleton* s1 = Singleton::getInstance();
    Singleton* s2 = Singleton::getInstance();

    s1->displayMessage();
    std::cout << "Are both instances equal? " << (s1 == s2) << std::endl;

    return 0;
}

