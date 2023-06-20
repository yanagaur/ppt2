#include <vector>
#include <algorithm>
#include <iostream>

int maximumProduct(std::vector<int>& nums) {
    std::sort(nums.begin(), nums.end());
    int n = nums.size();
    return std::max(nums[n - 1] * nums[n - 2] * nums[n - 3], nums[0] * nums[1] * nums[n - 1]);
}

int main() {
    std::vector<int> nums = {1, 2, 3};
    int result = maximumProduct(nums);
    std::cout << result << std::endl;
    return 0;
}