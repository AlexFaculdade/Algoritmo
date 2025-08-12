#include <iostream>

using namespace std;

int main() {
    float distancia, velocidade, velocidadeMedia;
    cout << "Distancia percorrida: " << endl;
    cin >> distancia; 
    cout << "Velocidade: " << endl;
    cin >> velocidade;

    velocidadeMedia = distancia/velocidade;
    cout <<  "A velocidade media é: " << velocidadeMedia << endl;
    cin >> velocidadeMedia;

    return 0;
}