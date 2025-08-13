#include <iostream>

using namespace std;

int main() {
    float num, num2;
    cout << "Num1: " << endl;
    cin >> num;
    cout << "Num2: " << endl;
    cin >> num2;

    if(num > num2 ){
        cout << "o primeiro numero é maior: " << num << endl;
    } else if(num == num2 ) {
        cout << "Os numeros sao iguais" << endl;
    } else {
        cout << "o segundo numero é maior: " << num2 << endl;
    }

    cin >> num;

    return 0;
}