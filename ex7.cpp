#include <iostream>

using namespace std;

int main() {
    float soma, sub, mult, div, num1, num2;
    cout << "Type The first number: " << endl;
    cin >>  num1;
    cout << "Type the second number: " << endl;
    cin >> num2;
    soma = num1+num2;
    sub =  num1-num2;
    mult = num1*num2;
    div = num1/num2;
    cout << "soma: " << soma << ", sub: " << sub << " mult: " << mult << " e div: " << div << endl; 
    cin >> num1;

    return 0;
}