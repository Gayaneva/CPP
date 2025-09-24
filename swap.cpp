#include <iostream>
using namespace std;

void swap(int a, int b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

int main(){
 int x = 0;
int  y = 0;
    cout << "Enter two integers to swap: ";
    cin >> x >> y;
    cout << "Before swap x = " << x << ", y = " << y << endl;
    swap(x, y);
    cout << "After swap  x = " << x << ", y = " << y << endl;


}
