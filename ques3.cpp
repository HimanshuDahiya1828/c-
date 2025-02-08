#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    char replacement;

    cout << "Enter a string: ";
    cin >> input;
    cout << "Enter the character to replace vowels with: ";
    cin >> replacement;

    for (char &ch : input) {
        char lowerChar = tolower(ch);
        if (lowerChar == 'a' || lowerChar == 'e' || lowerChar == 'i' || lowerChar == 'o' || lowerChar == 'u') {
            ch = replacement;
        }
    }

    cout << "String after replacing vowels: " << input << endl;

    return 0;
}
