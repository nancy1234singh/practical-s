//PRAC 3 Write a program that prints a table indicating the number of occurrences of eachalphabet in the text entered as command line arguments.

#include <iostream>
#include <string>
#include <map>
using namespace std;

void countOccurrences(string str) {
    map<char, int> freq; // Corrected map declaration

    for (char c : str) { // Corrected loop declaration
        if (isalpha(c)) { // Check if the character is an alphabet
            freq[tolower(c)]++; // Convert character to lowercase and increment frequency
        }
    }

    cout << "Character Frequency Table:\n";
    for (auto pair : freq) { // Corrected loop declaration
        cout << pair.first << " -> " << pair.second << endl;
    }
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input); // Reads the entire line of input including spaces

    countOccurrences(input); // Fixed function name to match declaration
    return 0;
}
