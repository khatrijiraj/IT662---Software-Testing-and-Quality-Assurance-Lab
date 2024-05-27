#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

// Structure to represent a variable in the program
struct Variable {
    string name;
    int value;
};

// Structure to represent a line of code in the program
struct Line {
    int line_number;
    string code;
};

// Function to get the variables used in a line of code
vector<Variable> get_variables(const string &code) {
    vector<Variable> variables;
    // Split the code into words
    vector<string> words;
    string word;
    for (char ch : code) {
        if (isspace(ch)) {
            if (!word.empty()) {
                words.push_back(word);
                word.clear();
            }
        } else {
            word.push_back(ch);
        }
    }
    if (!word.empty()) {
        words.push_back(word);
    }
    // Iterate through the words and add any variables to the list
    for (const string &word : words) {
        if (word[0] == '$') {
            // Assume the value of the variable is 0
            variables.push_back({word, 0});
        }
    }
    return variables;
}
int main() {
    // Read the lines of code
    vector<Line> lines;
    cout << "Enter the lines of code: " << endl;
    string line;
    int line_number = 1;
    while (getline(cin, line)) {
        lines.push_back({line_number, line});
        line_number++;
    }
    unordered_set<string> variables;
    // Iterate through the lines of code and add any variables used in the
    // code
    for (const Line &line : lines) {
        for (const Variable &variable : get_variables(line.code)) {
            variables.insert(variable.name);
        }
    }
    // Output the variables used in the program
    cout << "Variables used in the program: " << endl;
    for (const string &variable : variables) {
        cout << variable << endl;
    }
    return 0;
}
