#include <iostream>

using namespace std;

int main() {
    int nota;
    cout << "Nota: " << endl;
    cin >> nota;
    if(nota >= 6) {
        cout << "Aprovado" << endl;
    } else {
        cout << "Reprovado" << endl;
    }

    cin >> nota;

    return 0;
}