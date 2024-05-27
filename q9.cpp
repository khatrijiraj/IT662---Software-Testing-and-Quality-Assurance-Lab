#include <cassert>
#include <iostream>
#include <vector>

// Original function to be tested
int calculate_sum(const std::vector<int>& arr) {
    int result = 0;
    for (int num : arr) {
        result += num;
    }
    return result;
}

// Mutated versions of the function
int mutated_calculate_sum(const std::vector<int>& arr) {
    int result = 0;
    for (int num : arr) {
        result -= num;  // Mutated: Changed + to -
    }
    return result;
}

int mutated_calculate_sum2(const std::vector<int>& arr) {
    int result = 1;  // Mutated: Changed initial value to 1
    for (int num : arr) {
        result += num;
    }
    return result;
}

int mutated_calculate_sum3(const std::vector<int>& arr) {
    int result = 0;
    for (int num : arr) {
        result += num * 2;  // Mutated: Changed + to * and operand to 2
    }
    return result;
}

// Test function
void test_calculate_sum() {
    std::vector<int> arr = {1, 2, 3, 4, 5};
    assert(calculate_sum(arr) == 15);
}

int main() {
    // Mutation testing
    int testCount = 0;
    int detectedCount = 0;

    // Test the original function
    test_calculate_sum();
    testCount++;

    // Test mutated versions
    if (calculate_sum({1, 2, 3, 4, 5}) !=
        mutated_calculate_sum({1, 2, 3, 4, 5})) {
        std::cout << "Mutation 1 detected." << std::endl;
        detectedCount++;
    }

    if (calculate_sum({1, 2, 3, 4, 5}) !=
        mutated_calculate_sum2({1, 2, 3, 4, 5})) {
        std::cout << "Mutation 2 detected." << std::endl;
        detectedCount++;
    }

    if (calculate_sum({1, 2, 3, 4, 5}) !=
        mutated_calculate_sum3({1, 2, 3, 4, 5})) {
        std::cout << "Mutation 3 detected." << std::endl;
        detectedCount++;
    }

    std::cout << "Total tests: " << testCount << std::endl;
    std::cout << "Mutations detected: " << detectedCount << std::endl;

    return 0;
}
