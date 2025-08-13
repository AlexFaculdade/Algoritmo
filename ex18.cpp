#include <iostream>

using namespace std;

int main() {

    int idade;
    cout << "Digite sua idade" << endl;
    cin >> idade;
    if(idade >= 18 && idade < 65) {
        cout << "Apto para CNH" << endl;
    } else if(idade < 18) {
        cout << "Idade insuficiente para CNH" << endl;
    } else if(idade >= 65) {
        cout << "Exame especial necessário" << endl;
    }

    cin >> idade;

    return 0;
}