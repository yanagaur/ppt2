#include <vector>
#include <algorithm>
#include <iostream>

bool isMonotonic(const std::vector<int>& nums) {
    bool increasing = true;
    bool decreasing = true;

    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] < nums[i - 1]) {
            increasing = false;
        }
        if (nums[i] > nums[i - 1]) {
            decreasing = false;
        }
    }

    return increasing || decreasing;
}

int main() {
    std::vector<int> nums = {1, 2, 2, 3};
    bool result = isMonotonic(nums);
    if (result) {
        std::cout << "The array is monotonic" << std::endl;
    } else {
        std::cout << "The array is not monotonic" << std::endl;
    }
    return 0;
}