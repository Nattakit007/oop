#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int num1, num2;
    float y = 123.456789;
    const float PI = 3.14159;
    string name1 = "Hello_C++";
    string name2 = "KMITL";

    cout << "Enter two integers: separated by space: ";
    cin >> num1 >> num2;
    cout << "You entered: " << num1 << " and " << num2 << endl;
    cout << " << Programming cout command >>" << endl;
    cout.width(20);
    cout << "Hello C++" << endl;
    cout.width(10);
    cout << PI << endl;
    cout << name1 << " " << name2 << endl;
    cout << setprecision(4) << y << endl;
    cout << fixed << setprecision(4) << y << endl;
    cout << fixed << setprecision(5) << y << endl;
    cout << num1 << " +" << num2 << " =" << num1 + num2;
    cout << " : " << num1 << " +" << num2++ << " = " << num1 + num2 << endl;
    cout << num1 << " + " << num2++ << " = " << num1 + num2;
    cout << " : " << num1 << " + " << ++num2 << " = " << num1 + num2 << endl;
    cout << num1 << " + " << ++num2 << " = " << num1 + num2 << endl;
    system("pause");
    return 0;
}