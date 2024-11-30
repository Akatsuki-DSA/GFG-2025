#include <vector>
#include <iostream>

class Solution {
public:
    void rotateLeft(std::vector<int> &arr, int d) {
        int n = arr.size();
        d = d % n; // Handle cases where d > n

        if (d == 0) return; // No rotation needed

        std::vector<int> temp(arr.begin(), arr.begin() + d);

        // Shift the remaining elements to the left
        for(int i = 0; i < n - d; ++i){
            arr[i] = arr[i + d];
        }

        // Copy the first d elements to the end
        for(int i = 0; i < d; ++i){
            arr[n - d + i] = temp[i];
        }
    }
};

// Added main function to execute rotateLeft
int main() {
    Solution sol;
    std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int d = 2; // Number of positions to rotate

    std::cout << "Original array: ";
    for(auto num : arr){
        std::cout << num << " ";
    }
    std::cout << std::endl;

    sol.rotateLeft(arr, d);

    std::cout << "Array after left rotation by " << d << " positions: ";
    for(auto num : arr){
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}