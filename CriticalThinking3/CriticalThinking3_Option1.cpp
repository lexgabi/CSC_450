// Lexee Gabiola
// CSC450-1, 8/6/2023

#include <iostream>
using namespace std;

int main()
{
    cout << "Enter three integer values" << endl;
    int* p1, * p2, * p3;
    //int input1, input2, input3;
    p1 = new int;
    cin >> *p1;
    p2 = new int;
    cin >> *p2;
    p3 = new int;
    cin >> *p3;

    cout << "Your numbers are " << *p1 << ", " << *p2 << ", and " << *p3 << endl;
    cout << "Their memory addresses are " << p1 << ", " << p2 << ", and " << p3 << endl;
    delete p1, p2, p3;
}