#include <iostream>
#include <vector>
#include <algorithm>

int arrayPairSum(std::vector<int>& nums) {
    // Sort the array in ascending order
    std::sort(nums.begin(), nums.end());

    int sum = 0;
    for (int i = 0; i < nums.size(); i += 2) {
        // Add the minimum value of each pair to the sum
        sum += nums[i];
    }

    return sum;
}

int main() {
    // Example usage
    std::vector<int> nums = {1, 4, 3, 2, 5, 6};

    int maxSum = arrayPairSum(nums);

    std::cout << "Maximized sum: " << maxSum << std::endl;

    return 0;
}
