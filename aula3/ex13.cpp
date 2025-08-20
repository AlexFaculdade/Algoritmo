#include <iostream>

using namespace std;

int main() {
    float nota,nota2,media;
    cout << "Nota: " << endl;
    cin >> nota;
    cout << "Nota2: " << endl;
    cin >> nota2;
    media = (nota+nota2)/2;
    if(media>=6) {
        cout << "Aprovado" << endl;
    } else {
        cout << "Recuperacao final" << endl;
    } 
    cin >> nota;
    

    return 0;
}