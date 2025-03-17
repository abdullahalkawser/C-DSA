#include <iostream>  // ইনপুট-আউটপুট ফাংশন ব্যবহারের জন্য লাইব্রেরি
#include <vector>    // Vector STL ব্যবহারের জন্য লাইব্রেরি
using namespace std; // Standard namespace ব্যবহারের জন্য

int main() {
    vector<int> v = {1, 2, 3, 4, 5}; // // একটি integer vector তৈরি করা হয়েছে, যেখানে শুরুতেই ৫টি সংখ্যা রয়েছে

      
    cout << "Size: " << v.size() << endl; 
    cout << "Capacity: " << v.capacity() << endl; 

    //Static vs Dynamic Memory Allocation 

    int arr[5] = {1, 2, 3, 4, 5};  // ৫ সাইজের একটি স্ট্যাটিক অ্যারে
    cout << arr[2];  // Output: 3

    int *arr = new int[5]; // ডায়নামিক অ্যারে তৈরি
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    cout << arr[2];  // Output: 30

    delete[] arr;  // মেমোরি ফ্রি করা প্রয়োজন
    return 0;

    v.push_back(6); // নতুন উপাদান যোগ করা
    v.pop_back();   // শেষের উপাদান মুছে ফেলা

    for (int x : v) { //// `v` vector-এর প্রতিটি উপাদান `x`-এ নিয়ে লুপ চালানো হচ্ছে
        cout << x << " ";
    }

    return 0;
}
