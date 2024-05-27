#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
// This structure represents a test case.
struct TestCase {
    string name;   // The name of the test case.
    int priority;  // The priority of the test case.
};

// This function compares two test cases based on their priority..
bool compareTestCases(const TestCase &a, const TestCase &b) {
    return a.priority < b.priority;
}

int main() {
    // Create a vector of test cases.
    vector<TestCase> testCases = {
        {"Test case 1", 2}, {"Test case 2", 3}, {"Test case 3", 1},
        {"Test case 4", 2}, {"Test case 5", 3},
    };

    // Sort the test cases in ascending order of priority.
    sort(testCases.begin(), testCases.end(), compareTestCases);
    // Print the test cases in the order they will be executed.

    cout << "Test cases:" << endl;
    for (const TestCase &testCase : testCases) {
        cout << " - " << testCase.name << " (priority: " << testCase.priority
             << ")" << endl;
    }
    return 0;
}
