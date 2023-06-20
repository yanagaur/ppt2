#include <iostream>
#include <vector>
#include <unordered_map>

int findLHS(std::vector<int>& nums) {
    // Create a frequency map to count the occurrences of each number
    std::unordered_map<int, int> freqMap;

    // Count the occurrences of each number in the array
    for (int num : nums) {
        freqMap[num]++;
    }

    int maxLength = 0;

    // Iterate through the numbers in the array
    for (auto it = freqMap.begin(); it != freqMap.end(); ++it) {
        int currentNum = it->first;

        // Check if there is a number that differs by 1 in frequency
        if (freqMap.count(currentNum + 1) > 0) {
            int currentLength = it->second + freqMap[currentNum + 1];
            maxLength = std::max(maxLength, currentLength);
        }
    }

    return maxLength;
}

int main() {
    // Example usage
    std::vector<int> nums = {1, 3, 2, 2, 5, 2, 3, 7};

    int longestLength = findLHS(nums);

    std::cout << "Length of the longest harmonious subsequence: " << longestLength << std::endl;

    return 0;
}
