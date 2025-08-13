#include <iostream>

using namespace std;

int main() {
    float num, num2, num3;
    cout << "Primeiro num: " << endl;
    cin >> num;
    cout << "Segundo num: " << endl;
    cin >> num2;
    cout << "Terceiro num: " << endl;
    cin >> num3;

    if(num == num2 && num == num3) {
        cout << "Há igualdade" << endl;
    } else if(num > num2 && num > num3) {
        cout << "O maior num é " << num << endl;
    } else if(num2 > num && num2 > num3) {
        cout << "O maior num é " << num2 << endl;
    } else if(num3 > num && num3 > num2) {
        cout << "O maior num é " << num3 << endl;
    }

    cin >> num;

    return 0;
}