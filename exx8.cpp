#include <iostream>

using namespace std;

int main() {
    float raio, area;

    cout << "Escreva o raio: " << endl;
    cin >> raio;
    area = (raio*raio) * 3.14;
    cout << "A área do círculo é: " << area;
    cin >> raio;
    return 0;
}