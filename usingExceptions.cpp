#include <iostream>
#include <stdexcept>
using namespace std;

//github - https://github.com/nBeas/gitHubFolderProj.git

//Nathan Beasley
//cis1202-800
//7/22/24

char character(char start, int offset) {
    if (!isalpha(start)) {
        throw invalid_argument("invalidCharacterException");
    }

    bool upper = isupper(start);    //if the case gets changed later I can prevent it

    char newChar = start + offset;

    if (!isalpha(newChar) || isupper(newChar) != upper) {       //testing to see if the new char meets criteria
        throw invalid_argument("invalidRangeException");
    }
    return newChar;
}


int main() {

    for (int i = 0; i < 3; i++) {
        try {
            cout << character('b',-i) << endl;
        }   catch (invalid_argument &e) {
            cout << e.what() << endl;
        }
    }
    try {
        cout << character('!',5) << endl;
    }   catch (invalid_argument &e) {
        cout << e.what() << endl;
    }



    return 0;
}






/*
CIS 1202 Programming Assignment #15a
Exceptions
Write a function to calculate character offsets, throwing exceptions in error conditions.
Use a source code management tool as you develop this program.  Commit changes frequently using descriptive commit
messages.  Push your changes to GitHub or other publicly accessible location for your instructor to clone.
Requirements
Write a function according to this prototype:
char character(char start, int offset);
If start is not a letter (A-Z, a-z), throw an invalidCharacterExcpeption.
If the target is not a letter, throw an invalidRangeException.
Otherwise, return the letter described by the start and offset.
Build a driver in main to test this function and display its output.
Use try/catch blocks to call your function with different start and offset values.
Use the Sample Output below, or come up with your own test values.
Functions must pass parameters and return values as needed, using only local variables.
Global variables are not allowed.
Use comments to document your program as you see fit.
Include comments at the beginning of your program with your name, the class (with section), and the date.
// Josh Junior // CIS 1202 101 // January 31, 2021
Submit the URL for your repository to the dropbox.  No screen shots are needed.
Sample Output
character('a', 1) should return 'b'.
character('a', -1) should throw an invalidRangeExpection.
character('Z', -1) should return 'Y'.
character('?', 5) should throw an invalidCharacterExcpeption.
Do not allow upper- and lower-case transitions.  character('A', 32) should throw an exception, not return 'a'.




 */