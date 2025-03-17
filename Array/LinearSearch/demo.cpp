#include <iostream>

void linearSearch(int arr[], int sz, int target) {
    for (int i = 0; i < sz; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 4, 2, 3, 7, 8, 9, 2};
    int sz = 8;
    int target = 4;
    
    std::cout << linearSearch(arr, sz, target) << std::endl;

    return 0;
}

//আপনি C++ এ অ্যারে রিভার্স করতে পারেন কয়েকভাবে। নিচে তিনটি পদ্ধতি দেওয়া হলো:



#include <iostream>
using namespace std;

void reverseArray(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        swap(arr[i], arr[size - i - 1]);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr, size);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

//2. STL reverse() ফাংশন ব্যবহার করে
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    reverse(arr, arr + size);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

//3. রিকারশন ব্যবহার করে



void reverseArray(int arr[], int start, int end) {
    if (start >= end) return;
    swap(arr[start], arr[end]);
    reverseArray(arr, start + 1, end - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr, 0, size - 1);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
