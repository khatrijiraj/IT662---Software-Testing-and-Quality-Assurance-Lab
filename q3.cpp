#include <iostream>
#include <string>

using namespace std;

int calculateCyclomaticComplexity(const string& code) {
    int complexity = 1;
    size_t pos = 0;

    while ((pos = code.find("\n", pos)) != string::npos) {
        string line = code.substr(0, pos);
        if (line.find("if") != string::npos ||
            line.find("else") != string::npos ||
            line.find("for") != string::npos ||
            line.find("while") != string::npos ||
            line.find("case") != string::npos ||
            line.find("default") != string::npos) {
            complexity++;
        }
        pos++;  // Move past the newline character
    }

    return complexity;
}

int main() {
    string code =
        "int main() {\n    int x = 10;\n    if (x > 5) {\n        cout << \"x "
        "is greater than 5\";\n    }\n    else {\n        cout << \"x is not "
        "greater than 5\";\n    }\n    return 0;\n}";

    int complexity = calculateCyclomaticComplexity(code);
    cout << "Cyclomatic Complexity: " << complexity << endl;

    return 0;
}
