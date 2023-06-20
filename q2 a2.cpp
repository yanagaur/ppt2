#include <iostream>
#include <vector>
#include <unordered_set>

int distributeCandies(std::vector<int>& candyType) {
    // Calculate the maximum number of different types of candies Alice can eat
    int maxTypes = candyType.size() / 2;

    // Create an unordered set to store the unique candy types
    std::unordered_set<int> uniqueCandies;

    // Iterate through the candy types and add them to the set
    for (int candy : candyType) {
        uniqueCandies.insert(candy);
    }

    // Return the minimum of the number of unique candy types and the maximum allowed
    return std::min(uniqueCandies.size(), maxTypes);
}

int main() {
    // Example usage
    std::vector<int> candyType = {1, 1, 2, 2, 3, 3};

    int maxTypes = distributeCandies(candyType);

    std::cout << "Maximum number of different types of candies Alice can eat: " << maxTypes << std::endl;

    return 0;
}
