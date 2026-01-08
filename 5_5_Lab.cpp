#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class prototype_calculator
{
public:
    virtual int add(int x, int y) = 0;
    virtual int subtract(int x, int y) = 0;
    virtual int multiply(int x, int y) = 0;
    virtual int sum(int x1, int x2, int x3, int x4, int x5, int x6, int x7, int x8, int x9, int x10) = 0;
};
class int_calculator : public prototype_calculator
{
public:
    int add(int x, int y) 
    {
        return x + y;
    }
    int subtract(int x, int y) 
    {
        return x - y;
    }
    int multiply(int x, int y) 
    {
        return x * y;
    }
    int sum(int x1, int x2 = 0, int x3 = 0, int x4 = 0, int x5 = 0, int x6 = 0, int x7 = 0, int x8 = 0, int x9 = 0, int x10 = 0) 
    {
        return x1 + x2 + x3 + x4 + x5 + x6 + x7 + x8 + x9 + x10;
    }
};

int main()
{

    int_calculator cal;
    cout<<fixed<<setprecision(2)<<endl;
    cout << "--add--:--substract--:--multiply--" << endl;
    cout << setw(5) << cal.add(6, 9) << "  : "
         << setw(8) << cal.subtract(6, 9) << "    : "
         << setw(6) << cal.multiply(6, 9) << endl;
    cout << cal.add(6, 9) << " : " << cal.subtract(6, 9) << " : " << cal.multiply(6, 9) << endl;
    cout << "---------------sum----------------" << endl;
    cout << cal.sum(1, 2, 3, 4, 5, 6, 7, 8, 9, 10) << "," << cal.sum(1, 2, 3, 4, 5, 6, 7, 8, 9) << "," << cal.sum(1, 2, 3, 4, 5, 6, 7, 8) << ",";
    cout << cal.sum(1, 2, 3, 4, 5, 6, 7) << "," << cal.sum(1, 2, 3, 4, 5, 6) << "," << cal.sum(1, 2, 3, 4, 5) << "," << cal.sum(1, 2, 3, 4) << ",";
    cout << cal.sum(1, 2, 3) << "," << cal.sum(1, 2) << "," << cal.sum(1) << endl;

    return 0;
}