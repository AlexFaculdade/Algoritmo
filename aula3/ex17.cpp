#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Escreva um número inteiro: " << endl;
    cin >> num;

    if(num == 0) {
        cout << "Neutro" << endl;
    } else if(num % 2 == 0) {
        cout << "O número é par" << endl;
    } else {
        cout << "O número é impar" << endl;
    }

    cin >> num;
    

    return 0;
}