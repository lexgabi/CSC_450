// Lexee Gabiola, CSC450-1, 8/20/23

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Method that reverses all characters in text file and store result in new text file
void reverse(string filenm) {
    ifstream f;
    f.open("CSC450_CT5_mod5.txt", ios::in);

    string fileContents;
    string fileLine;

    // Output file contents to string
    if (f.is_open()) {
        while (f.good()) {
            f >> fileLine;
            fileContents.append(fileLine);
        }

    }

    // Reverse contents of string
    int n = fileContents.length();
    for (int i = 0; i < n / 2; i++) {
        swap(fileContents[i], fileContents[n - i - 1]);
    }


    // Create new file to store reversed string
    ofstream file2("CSC450-mod5-reverse.txt");
    file2 << fileContents;
    

    file2.close();

    cout << "Successfuly reversed to new file!";
}

int main()
{
    string fileName = "CSC450_CT5_mod5.txt";
    // Obtain input from user
    cout << "Please enter your input: ";
    string input;
    getline(cin, input);

    // Open file using ofstream
    ofstream file;
    file.open(fileName, ios::app);
    if (!file) {
        cout << "No such file found";
    }
    else {
        file << input; // Append to provided text file
        file.close();
    }


    // Call reversal method
    reverse(fileName);

}