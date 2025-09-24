#include <iostream>
using namespace std;

int main() {
    int x = 0;
    cout << "Enter a number ";
    cin >> x;

    int y = x;     
    int &r = x;    

    y = y + 10;    
    r = r + 20;   

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "r = " << r << endl;

    return 0;
}

