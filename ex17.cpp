#include <iostream>

using namespace std;

int main() {
    int ano, mes, dia, idadeDias;
    cout << "Digite qual ano voce nasceu: " << endl;
    cin >> ano;
    cout << "Digite qual mes voce nasceu em numero: " << endl;
    cin >> mes;
    cout << "Digite qual dia voce nasceu: " << endl;
    cin >> dia;
    ano = 2025 - ano;
    if(mes - 8 > 1) {
        mes = mes * 30;
     } else if(mes-8 < 0) { 
        ano - 1;
        mes = 12 - mes;
     }
    mes = 8 - mes;
    idadeDias = (ano *365) + (mes * 30) + dia;
    cout << "Sua idade em dias e: " << idadeDias << endl;
    cin >> idadeDias;

    return 0;
}