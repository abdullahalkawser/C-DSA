
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
