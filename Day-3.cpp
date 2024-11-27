#include <iostream>
#include <vector>

class Solution {
  public:
    void reverseArray(std::vector<int> &arr) {
        // code here
        int right = arr.size()-1;
        int left=0;
        while(left<right){
            int temp = arr[left];
            arr[left]=arr[right];
            arr[right]=temp;
            left++;
            right--;
        }
    }
};

int main(){
    Solution sol;
    std::vector<int> arr = {1, 2, 3, 4, 5};
    sol.reverseArray(arr);
    for(int i = 0; i < arr.size(); i++){
        std::cout << arr[i] << " ";
    }
    return 0;
}