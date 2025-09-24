#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cout << "Enter a word  ";
    cin >> word;

    cout << "Reversed word ";
    for (int i = word.size() - 1; i >= 0; i--) {
        cout << word[i];
    }
    cout << endl;
}



