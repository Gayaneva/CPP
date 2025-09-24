#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int n = 5;

    vector<int> nums(n);
    int sum = 0;

    cout << "Enter 5  numbers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];    
        sum += nums[i];
    }

    double avg =  (double)sum / n ;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << avg << endl;

    return 0;
}

