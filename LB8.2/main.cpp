#include <iostream>
#include <string>
#include <sstream>

using namespace std;

bool containsWordStartingWithA(const string& str) {
    stringstream ss(str);
    string word;

    while (ss >> word) {
        if (!word.empty() && word[0] == 'a') {
            return true;
        }
    }

    return false;
}

int main() {
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);

    if (containsWordStartingWithA(str)) {
        cout << "The string contains a word starting with 'a'." << endl;
    }
    else {
        cout << "The string does not contain any word starting with 'a'." << endl;
    }

    return 0;
}
