#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    stack<char> s;
    for (char c : str) {
        s.push(c);
    }

    string reversed_str = "";
    while (!s.empty()) {
        reversed_str += s.top();
        s.pop();
    }

    cout << "Reversed string: " << reversed_str << endl;

    return 0;
}
