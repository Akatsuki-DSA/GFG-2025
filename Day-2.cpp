#include <vector>
#include <iostream>

class Solution{
    public:
    void pushZerosToEnd(std::vector<int> &arr){
        int count = 0;
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] != 0){
                int temp = arr[count];
                arr[count] = arr[i];
                arr[i] = temp;
                count++;
            }
        }
    }
};

// Added main function to execute pushZerosToEnd
int main() {
    Solution sol;
    std::vector<int> arr = {0, 1, 0, 3, 12};
    
    std::cout << "Original array: ";
    for(auto num : arr){
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    sol.pushZerosToEnd(arr);
    
    std::cout << "Array after pushing zeros to end: ";
    for(auto num : arr){
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    return 0;
}