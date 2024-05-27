#include <climits>  // for INT_MAX and INT_MIN
#include <iostream>
#include <vector>
using namespace std;

pair<int, int> findMinMax(const vector<int>& arr) {
    int minElement = INT_MAX;
    int maxElement = INT_MIN;

    for (int num : arr) {
        minElement = min(minElement, num);
        maxElement = max(maxElement, num);
    }

    return {minElement, maxElement};
}

int main() {
    vector<int> arr = {3, 7, 1, 9, 4, 6, 5, 2, 8};
    pair<int, int> result = findMinMax(arr);

    cout << "Minimum element: " << result.first << endl;
    cout << "Maximum element: " << result.second << endl;

    return 0;
}
