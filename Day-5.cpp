# include <vector>
# include <iostream>
# include <algorithm>

using namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        int n = arr.size();
        int i = n - 2;
        while (i >= 0 && arr[i] >= arr[i + 1]) {
            i--;
        }
        if (i >= 0) {
            int j = n - 1;
            while (arr[j] <= arr[i]) {
                j--;
            }
            std::swap(arr[i], arr[j]);
        }
        reverse(arr.begin() + i + 1, arr.end());
    }
};

int main() {
    Solution solution;
    vector<int> arr = {1, 2, 3};
    solution.nextPermutation(arr);
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    return 0;
}