#include <iostream>
#include <vector>

// Function to reverse a portion of the array
void reverse(std::vector<int>& arr, int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to left rotate array by d positions
void rotateArr(std::vector<int>& arr, int d) {
    int n = arr.size();
    d = d % n; // In case d is greater than n

    // Reverse the first d elements
    reverse(arr, 0, d - 1);
    // Reverse the remaining elements
    reverse(arr, d, n - 1);
    // Reverse the entire array
    reverse(arr, 0, n - 1);
}

int main() {
    std::vector<int> arr = { 1, 2, 3, 4, 5, 6 };
    int d = 2;

    rotateArr(arr, d);

    for (int i = 0; i < arr.size(); i++)
        std::cout << arr[i] << " ";

    return 0;
}