#include <iostream>
using namespace std;

// Recursive function to print all subsequences of a string
void printSubsequences(string input, string output) {
    // If the input string is empty, print the output and return
    if (input.empty()) {
        cout << output << endl;
        return;
    }

    // Include the first character of the input in the output
    printSubsequences(input.substr(1), output + input[0]);

    // Exclude the first character of the input from the output
    printSubsequences(input.substr(1), output);
}

int main() {
    string str = "abc"; // Replace with your input string
    printSubsequences(str, "");
    return 0;
}
