#include <iostream>

using namespace std;

int main() {
    int nota;
    cout << "Nota: " << endl;
    cin >> nota;
    if(nota < 0 || nota> 10) {
        cout << "Nota invalida" << endl;
    } else {
        cout << "Nota valida" << endl;
    }

    cin >> nota;

    return 0; 
}