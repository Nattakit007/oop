#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main (){
    int inp;
    cout << " *** Multiplication table ***" << endl << "Enter a number (2-100) : ";
    cin >> inp;
    if(inp <=100){
    for(int n = 1;n <= 12;n++){
        int sum = inp*n;
        cout << setw(2) << right << inp;
        cout << " x ";
        cout << setw(2) << left << n;
        cout << " = " << sum << endl;
    }
}else{
    cout<< "I said max is 100" << endl;
}

    return 0;
}