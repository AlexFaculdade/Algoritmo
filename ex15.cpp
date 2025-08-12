#include <iostream>

using namespace std;

int main() {
    float tempoViagem, velocidadeMedia, distancia;
    cout << "Velocidade media: " << endl;
    cin >> velocidadeMedia;
    cout << "Tempo de viagem: " << endl;
    cin >> tempoViagem;
    distancia = velocidadeMedia/tempoViagem;
    cout << "A distancia é de " << distancia << endl;
    cin >> tempoViagem;

    return 0;
}