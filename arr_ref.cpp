#include <iostream>
using namespace std;

int main() {
    int arr[3] = {1, 2, 3};
    int &r = arr[0];
    r = 100;

    cout << "Array elements: ";
    for (int i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

