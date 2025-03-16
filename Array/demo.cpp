#include <iostream>
using namespace std;

#include <iostream>

int main() {
    int arry[5]; // অ্যারে ডিক্লেয়ার করা হলো

    std::cout << "Enter 5 numbers: ";
    
    for (int i = 0; i < 5; i++) {
        std::cin >> arry[i]; // ইনপুট নেওয়া হচ্ছে
    }

    std::cout << "You entered: ";
    
    for (int i = 0; i < 5; i++) {
        std::cout << arry[i] << " "; // আউটপুট দেখানো হচ্ছে
    }

    return 0;
}


//Multidimensional Arrays

int matrix[3][3]; // 3x3 matrix


// Initializing a 2D Array
int matrix[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};

// Accessing Elements in a 2D Array
cout << matrix[1][2];  // Outputs 6


// Finding the Smallest Value Using INT_MAX

#include <iostream>
#include <climits> // INT_MAX ব্যবহারের জন্য এটি দরকার

int main() {
    int arry[5]; // অ্যারে ডিক্লেয়ার করা হলো
    int minValue = INT_MAX; // সবচেয়ে বড় সংখ্যাকে ইনিশিয়াল ভ্যালু সেট করলাম

    std::cout << "Enter 5 numbers: ";
    
    for (int i = 0; i < 5; i++) {
        std::cin >> arry[i]; // ইনপুট নেওয়া হচ্ছে
        
        // সবচেয়ে ছোট মান খুঁজছি
        if (arry[i] < minValue) {
            minValue = arry[i];
        }
    }

    std::cout << "You entered: ";
    for (int i = 0; i < 5; i++) {
        std::cout << arry[i] << " "; // ইনপুট দেখানো হচ্ছে
    }

    std::cout << "\nSmallest value: " << minValue << std::endl; // সবচেয়ে ছোট মান আউটপুট

    return 0;
}

//C++-এর <algorithm> লাইব্রেরির std::min() ফাংশন দিয়ে দুইটি ভ্যালুর মধ্যে ছোটটি বের করা যায়।

int main() {
    int arr[] = {14, 9, 7, 20, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    int minValue = *std::min_element(arr, arr + size);

    std::cout << "Smallest value: " << minValue << std::endl;

    return 0;
}

//C++-এ সবচেয়ে বড় সংখ্যা (Maximum Value) খোঁজার বিভিন্ন উপায়INT_MIN ব্যবহার করে লুপের মাধ্যমে খোঁজা

#include <iostream>
#include <climits> // INT_MIN ব্যবহারের জন্য

int main() {
    int arr[] = {12, 45, 7, 89, 56};
    int size = sizeof(arr) / sizeof(arr[0]);

    int maxValue = INT_MIN; // সবচেয়ে ছোট সংখ্যাকে প্রথমে সেট করলাম

    for (int i = 0; i < size; i++) {
        if (arr[i] > maxValue) {
            maxValue = arr[i]; // সর্বোচ্চ মান আপডেট করছি
        }
    }

    std::cout << "Largest value: " << maxValue << std::endl;

    return 0;
}
