#include <iostream>

using namespace std;

int main() {
    string user, senha;
    cout << "Digite seu usuario: " << endl;
    cin >> user;
    cout << "Digite a senha: " << endl;
    cin >> senha;

    if(user == "admin" && senha == "123") {
        cout << "Acesso permitido" << endl;
    } else {
        cout << "Acesso negado" << endl;
    }

    cin >> user;

    return 0;
}