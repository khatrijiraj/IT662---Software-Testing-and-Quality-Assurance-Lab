#include <cassert>
#include <iostream>
#include <vector>

// Function to calculate the sum of elements in an array
int sum(const std::vector<int>& arr) {
    int result = 0;
    for (int num : arr) {
        result += num;
    }
    return result;
}

// Test function for slice-based testing
void testSum() {
    // Test slice 1: Array with positive numbers
    std::vector<int> testArr1 = {1, 2, 3, 4, 5};
    assert(sum(testArr1) == 15);

    // Test slice 2: Array with negative numbers
    std::vector<int> testArr2 = {-1, -2, -3, -4, -5};
    assert(sum(testArr2) == -15);

    // Test slice 3: Array with mixed positive and negative numbers
    std::vector<int> testArr3 = {-1, 2, -3, 4, -5};
    assert(sum(testArr3) == -3);

    // Test slice 4: Array with a single element
    std::vector<int> testArr4 = {10};
    assert(sum(testArr4) == 10);

    // Test slice 5: Empty array
    std::vector<int> testArr5 = {};
    assert(sum(testArr5) == 0);

    std::cout << "All test cases passed!" << std::endl;
}

int main() {
    testSum();
    return 0;
}
