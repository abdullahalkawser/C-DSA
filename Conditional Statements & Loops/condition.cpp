#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter your Age: ";
  cin >> n; // Corrected syntax
  
  if (n > 0) {
      cout << "Number is positive" << endl;
  } else {
      cout << "Number is negative" << endl;
  }

  return 0;
}

// find odd even number

int main() {
  int n;
  cout << "Enter your Age: ";
  cin >> n; // Corrected syntax
  
  if (n %2 == 0) {
      cout << "Number is even" << endl;
  } else {
      cout << "Number is odd" << endl;
  }

  return 0;
}

// elseif mark grading

#include <iostream>
using namespace std;

int main() {
    int marks;
    float gpa;

    cout << "Enter your marks (out of 10): ";
    cin >> marks;

    if (marks >= 9 && marks <= 10) {
        gpa = 4.0;
        cout << "Your GPA is: " << gpa << " (Excellent)" << endl;
    } else if (marks >= 8) {
        gpa = 3.7;
        cout << "Your GPA is: " << gpa << " (Very Good)" << endl;
    } else if (marks >= 7) {
        gpa = 3.3;
        cout << "Your GPA is: " << gpa << " (Good)" << endl;
    } else if (marks >= 6) {
        gpa = 3.0;
        cout << "Your GPA is: " << gpa << " (Average)" << endl;
    } else if (marks >= 5) {
        gpa = 2.7;
        cout << "Your GPA is: " << gpa << " (Below Average)" << endl;
    } else if (marks >= 4) {
        gpa = 2.0;
        cout << "Your GPA is: " << gpa << " (Pass)" << endl;
    } else if (marks >= 0 && marks < 4) {
        gpa = 0.0;
        cout << "Your GPA is: " << gpa << " (Fail)" << endl;
    } else {
        cout << "Invalid marks entered. Please enter a value between 0 and 10." << endl;
    }

    return 0;
}


// Find character is uppercase lowercase


#include <cctype> // For isupper() and islower()
using namespace std;

int main() {
    char ch;

    // Input a character
    cout << "Enter a character: ";
    cin >> ch;

    // // // Check if the character is uppercase (ASCII range 65-90)
    // if (ch >= 65 && ch <= 90) {
    //     cout << ch << " is an uppercase letter." << endl;
    // }
    // // Check if the character is lowercase (ASCII range 97-122)
    // else if (ch >= 97 && ch <= 122) {
    //     cout << ch << " is a lowercase letter." << endl;
    // }

    // Check if the character is uppercase
    if (isupper(ch)) {
        cout << ch << " is an uppercase letter." << endl;
    }
    // Check if the character is lowercase
    else if (islower(ch)) {
        cout << ch << " is a lowercase letter." << endl;
    }
    // Check for non-alphabetic character
    else {
        cout << ch << " is not an alphabetic letter." << endl;
    }

    return 0;
}
// ternary oparetos

int main() {
    int a = 10, b = 20, c = 15;

    // Nested ternary operator
    int largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    cout << "The largest number is: " << largest << endl;

    return 0;
}


