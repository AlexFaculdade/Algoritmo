#include <iostream>

using namespace std;

int main() {
    int idade;
    cout << "Idade: " << endl;
    cin >> idade;
    if(idade < 26) {
        cout << "Jovem" << endl;
    } else {
        cout << "Adulto" << endl;
    }

    cin >> idade;
    return 0;
}