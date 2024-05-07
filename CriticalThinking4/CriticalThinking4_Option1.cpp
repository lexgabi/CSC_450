// Lexee Gabiola, CSC450-1, 8/13/23

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "Employee Salary Calculator" << endl;
    
    // Obtain variables from user and store at pointer
    double* hours,* payRate,* overtime;
    cout << "Enter standard number of hours worked: ";
    hours = new double;
    cin >> *hours;
    cout << "Enter rate of pay: ";
    payRate = new double;
    cin >> *payRate;
    cout << "Enter overtime hours (if applicable): ";
    overtime = new double;
    cin >> *overtime;

    // Caculate appropriate pay
    double standardPay = *payRate * *hours;
    double overtimePay = (1.5 * *payRate) * *overtime;
    double totalPay = standardPay + overtimePay;

    // Format output
    cout << fixed;
    cout << setprecision(2);
    cout << setw(18);
    cout << "Standard Pay: $" << standardPay << endl;

    cout << setw(18);
    cout << "Overtime Pay: $" << overtimePay << endl;

    cout << setw(18);
    cout << "Total Pay: $" << totalPay << endl;

    // Output variables and pointers
    cout << "\nThe variables used are " << *hours << ", " << *payRate << ", and " << *overtime << endl;
    cout << "Their memory addresses are " << hours << ", " << payRate << ", and " << overtime << endl;

    // Clear dynamic memory
    delete hours, payRate, overtime;
}
