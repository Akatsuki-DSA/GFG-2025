// User function template for C++
#include <vector>
#include <iostream>

class Solution {
  public:
    int getSecondLargest(std::vector<int> &arr) {
        if(arr.size() < 2) return -1;

        int first = arr[0];
        int second = arr[1];
        if(first < second){
            std::swap(first, second);
        }

        for(int i = 2; i < arr.size(); ++i){
            if(arr[i] > first){
                second = first;
                first = arr[i];
            }
            else if(arr[i] > second && arr[i] != first){
                second = arr[i];
            }
        }

        if(second == first) return -1;
        return second;
    }
};

int main() {
    Solution sol;
    std::vector<int> arr = {10, 20, 30, 40, 50};

    int secondLargest = sol.getSecondLargest(arr);

    if(secondLargest != -1){
        std::cout << "Second largest element is: " << secondLargest << std::endl;
    }
    else{
        std::cout << "There is no second largest element." << std::endl;
    }

    return 0;
}