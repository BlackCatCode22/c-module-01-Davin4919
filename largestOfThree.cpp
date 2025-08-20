#include <iostream>
using namespace std;

int main() {
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int largest;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    if (num1 > num2) {
        if (num1 > num3) {
            largest = num1;
        } else {
            largest = num3;
        }
    } else {
        if (num2 > num3) {
            largest = num2;
        } else {
            largest = num3;
        }
    }

    cout << "The largest number is: " << largest << endl;

    return 0;
}
