#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "\n\t ............................................\n";
    cout << "\t                  Calculator                   \n";
    cout << "\t..............................................\n";
    cout << "\t1: Addition\t\t" << "8: Sin" << endl;
    cout << "\t2: Subtraction\t\t" << "9: Cos" << endl;
    cout << "\t3: Multiplication\t" << "10: Tan" << endl;
    cout << "\t4: Division\t\t" << "11: Inverse of Sin" << endl;
    cout << "\t5: Exponent\t\t" << "12: Inverse of Cos" << endl;
    cout << "\t6: Square root\t\t" << "13: Inverse of Tan" << endl;
    cout << "\t7: Log\t\t\t" << "14: Exit" << endl;

    float x, y;
    const double PI = M_PI;  
    int choice;
    do {
        cout << "\n\t Enter the function that you want to perform: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "\n Enter 1st Number: ";
                cin >> x;
                cout << "Enter 2nd Number: ";
                cin >> y;
                cout << "\n Result = " << x + y << endl;
                break;
            case 2:
                cout << "\n Enter 1st Number: ";
                cin >> x;
                cout << "Enter 2nd Number: ";
                cin >> y;
                cout << "\n Result = " << x - y << endl;
                break;
            case 3:
                cout << "\n Enter 1st Number: ";
                cin >> x;
                cout << "Enter 2nd Number: ";
                cin >> y;
                cout << "\n Result = " << x * y << endl;
                break;
            case 4:
                cout << "\n Enter 1st Number: ";
                cin >> x;
                cout << "Enter 2nd Number: ";
                cin >> y;
                if (y != 0) {
                    cout << "\n Result = " << x / y << endl;
                } else {
                    cout << "\n Error: Division by zero" << endl;
                }
                break;
            case 5:
                cout << "\n Enter 1st Number: ";
                cin >> x;
                cout << "Enter Exponent Number: ";
                cin >> y;
                cout << "\n Result = " << pow(x, y) << endl;
                break;
            case 6:
                cout << "\n Enter the Number: ";
                cin >> x;
                cout << "\n Result = " << sqrt(x) << endl;
                break;
            case 7:
                cout << "\n Enter the Number: ";
                cin >> x;
                cout << "\n Result = " << log10(x) << endl;
                break;
            case 8:
                cout << "\n Enter the Number: ";
                cin >> x;
                x = x * PI / 180.0;
                cout << "\n Result = " << sin(x) << endl;
                break;
            case 9:
                cout << "\n Enter the Number: ";
                cin >> x;
                x = x * PI / 180.0;
                cout << "\n Result = " << cos(x) << endl;
                break;
            case 10:
                cout << "\n Enter the Number: ";
                cin >> x;
                x = x * PI / 180.0;
                cout << "\n Result = " << tan(x) << endl;
                break;
            case 11:
                cout << "\n Enter the Number: ";
                cin >> x;
                cout << "\n Result = " << asin(x) * 180.0 / PI << endl;
                break;
            case 12:
                cout << "\n Enter the Number: ";
                cin >> x;
                cout << "\n Result = " << acos(x) * 180.0 / PI << endl;
                break;
            case 13:
                cout << "\n Enter the Number: ";
                cin >> x;
                cout << "\n Result = " << atan(x) * 180.0 / PI << endl;
                break;
            case 14:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "\nWrong Input\t";
                break;
        }
    } while (choice != 14);
    return 0;
}