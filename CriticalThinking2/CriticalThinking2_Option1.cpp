// Lexee Gabiola
// CSC450-1, CT 2

#include <iostream>
#include <string>
using namespace std;

int main()
{
    for (int i = 0; i < 3; i++) {
        string input;
        cout << "Enter a string: ";
        getline(cin, input);

        reverse(input.begin(), input.end());

        cout << "Your string reversed is " << input << endl << endl;
    }
    
}