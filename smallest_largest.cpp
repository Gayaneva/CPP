#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int n = 5;

    vector<int> nums(n);

    cout << "Enter numbers" << endl;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int smallest = nums[0];
    int largest = nums[0];

    for (int i = 1; i < n; i++) {
        if (nums[i] < smallest){
		 smallest = nums[i];
}
        if (nums[i] > largest){ 	
		 largest = nums[i];
}
    }

    cout << "Smallest is " << smallest << endl;
    cout << "Largest is " << largest << endl;

    return 0;
}

