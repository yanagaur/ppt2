#include <vector>
#include <algorithm>
#include <iostream>

int search(const std::vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return -1;
}

int main() {
    std::vector<int> nums = {-1, 0, 3, 5, 9, 12};
    int target = 9;
    
    int result = search(nums, target);
    if (result != -1) {
        std::cout << "Target found at index " << result << std::endl;
    } else {
        std::cout << "Target not found in the array" << std::endl;
    }
    
    return 0;
}