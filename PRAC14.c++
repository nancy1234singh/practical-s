// #`14copy the contents of one text file to another file ,after removing all whitespaces.

#include <iostream>
#include <cstdio>  // For file handling functions

using namespace std;

int main() {
    FILE *source, *destination;
    char ch;

    // Open the source file in read mode
    source = fopen("source.txt", "r");
    if (source == nullptr) {
        cout << "Error: Source file not found or could not be opened." << endl;
        return 1;  // Exit if source file can't be opened
    }

    // Open the destination file in write mode
    destination = fopen("destination.txt", "w");
    if (destination == nullptr) {
        cout << "Error: Could not open destination file for writing." << endl;
        fclose(source);  // Close source file before exiting
        return 1;
    }

    // Copy contents from source to destination
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    cout << "File copy successful." << endl;

    // Close both files
    fclose(source);
    fclose(destination);

    return 0;
}
