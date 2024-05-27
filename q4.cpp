#include <iostream>
#include <unordered_set>
using namespace std;
double calculateStatementCoverage(int totalStatements, int executedStatements) {
    return (executedStatements * 100.0) / totalStatements;
}
double calculatePathCoverage(int totalPaths, int executedPaths) {
    return (executedPaths * 100.0) / totalPaths;
}
double calculateConditionCoverage(int totalConditions, int executedConditions) {
    return (executedConditions * 100.0) / totalConditions;
}
double calculateFunctionCoverage(int totalFunctions, int executedFunctions) {
    return (executedFunctions * 100.0) / totalFunctions;
}

int main() {
    // Set the total number of statements, paths, conditions, and functions in
    // the code.
    int totalStatements = 100;
    int totalPaths = 50;
    int totalConditions = 75;
    int totalFunctions = 25;
    // Set the number of statements, paths, conditions, and functions that were
    // executed.
    int executedStatements = 90;
    int executedPaths = 40;
    int executedConditions = 60;
    int executedFunctions = 20;
    // Calculate and display the percentage of coverage for each type.
    cout << "Statement coverage: "
         << calculateStatementCoverage(totalStatements, executedStatements)
         << "%" << endl;
    cout << "Path coverage: "
         << calculatePathCoverage(totalPaths, executedPaths) << "%" << endl;
    cout << "Condition coverage: "
         << calculateConditionCoverage(totalConditions, executedConditions)
         << "%" << endl;
    cout << "Function coverage: "
         << calculateFunctionCoverage(totalFunctions, executedFunctions) << "%"
         << endl;
    return 0;
}
