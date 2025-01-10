
// while loop

#include <iostream>
using namespace std;

int main() {
  int i = 0;
  while (i < 5) {
    cout << i << "\n";
    i++;
  }
  return 0;
}


// do while loop

int main() {
 int i = 0;
do {
  cout << i << "\n";
  i++;
}
while (i < 5);
  return 0;
}

// // for Loop
// //for (statement 1; statement 2; statement 3) {
//   // code block to be executed
// }//


// 1 to n sum 
 

int main() {
    int n = 10;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum = sum + 1;  // Add 1 to sum in each iteration
    }

    // After the loop, display the total sum
    cout << "Total sum: " << sum << "\n";

    return 0;
}


//  break  continue;


for (int i = 0; i < 10; i++) {
  if (i == 4) {
    break; // continue;
  }
  cout << i << "\n";
}

// sum  odd and even number 



int main() {
    int n = 10;
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {  // Check if the number is odd if i % 2 ==0  even number
            sum += i;  // Add the odd number to the sum
        }
    }

    // Display the total sum of odd numbers
    cout << "Total sum of odd numbers: " << sum << "\n";

    return 0;
}

//prime number 


#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n = 20;
    cout << "Prime: ";
    for (int i = 1; i <= n; i++) if (isPrime(i)) cout << i << " ";

    cout << "\nNon-prime: ";
    for (int i = 1; i <= n; i++) if (!isPrime(i)) cout << i << " ";
    
    return 0;
}


///nested loop 

#include <iostream>
using namespace std;

int main() {
    int n = 5;  // Number of rows for the table
    int l = 10; // Number of columns for the table (fixed the missing semicolon)
    
    for (int i = 1; i <= n; i++) {  // Outer loop for rows
        for (int j = 1; j <= l; j++) {  // Inner loop for columns
            cout << i * j << "\t";  // Print multiplication of i and j
        }
        cout << endl;  // Move to the next line after each row
    }
    return 0;
}

// factorial 



int main() {
    int n;
    cin >> n;

    int result = 1;
    for (int i = 1; i <= n; i++) result *= i;

    cout << result << endl;
    return 0;
}


