#include <iostream>
#include <vector>

bool canPlaceFlowers(std::vector<int>& flowerbed, int n) {
    int count = 0;
    int size = flowerbed.size();

    for (int i = 0; i < size; i++) {
        if (flowerbed[i] == 0 &&
            (i == 0 || flowerbed[i - 1] == 0) &&
            (i == size - 1 || flowerbed[i + 1] == 0)) {
            // Plant a flower in the current plot
            flowerbed[i] = 1;
            count++;

            // Check if the required number of flowers is reached
            if (count >= n)
                return true;
        }
    }

    return count >= n;
}

int main() {
    // Example usage
    std::vector<int> flowerbed = {1, 0, 0, 0, 1};
    int n = 1;

    bool canPlant = canPlaceFlowers(flowerbed, n);

    std::cout << "Can plant " << n << " new flowers? " << std::boolalpha << canPlant << std::endl;

    return 0;
}
