#include <iostream>

using namespace std;

int main () {
    int idade;
    cout << "Idade: " << endl;
    cin >> idade;

    if(idade >= 18) {
        cout << "Maior de idade" << endl;
    } else {
        cout << "Menor de idade" << endl;
    }

    cin >> idade;
    return 0;
}