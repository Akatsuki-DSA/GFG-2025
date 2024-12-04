# include <stdio.h>
# include <iostream>
# include <vector>
# include <algorithm>

class Solution {
  public:
    std::vector<int> findMajority(std::vector<int> &arr) {
    int n = arr.size();
    int ele1 = -1, ele2 = -1, cnt1 = 0, cnt2 = 0;

    for (int ele : arr) {
        if (ele == ele1) {
            cnt1++;
        } else if (ele == ele2) {
            cnt2++;
        } else if (cnt1 == 0) {
            ele1 = ele;
            cnt1 = 1;
        } else if (cnt2 == 0) {
            ele2 = ele;
            cnt2 = 1;
        } else {
            cnt1--;
            cnt2--;
        }
    }
    cnt1 = cnt2 = 0;
    for (int ele : arr) {
        if (ele == ele1) cnt1++;
        if (ele == ele2) cnt2++;
    }

    std::vector<int> res;
    if (cnt1 > n / 3) res.push_back(ele1);
    if (cnt2 > n / 3 && ele1 != ele2) res.push_back(ele2);

    if (res.size() == 2 && res[0] > res[1]) std::swap(res[0], res[1]);

    return res;
}

};
int main() {
    Solution sol;
    std::vector<int> arr = {3, 2, 3, 1, 2, 2, 1, 1};
    std::vector<int> result = sol.findMajority(arr);

    std::cout << "Majority elements are: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}