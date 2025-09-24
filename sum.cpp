#include <iostream>
using namespace std;

void sum(int &a, int &b, int &res) {
    res = a + b;
}

int main() {
    int x = 0;
    int y = 0;
    int result = 0;
    cout << "Enter two numbers ";
    cin >> x >> y;

    sum(x, y, result);

    cout << "Sum = " << result << endl;
    return 0;
}

