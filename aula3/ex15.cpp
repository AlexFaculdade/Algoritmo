#include <iostream>

using namespace std;

int main() {

    float lado, lado2, lado3;
    bool isTriangle = false;
    cout << "lado: " << endl;
    cin >> lado;
    cout << "lado2: " << endl;
    cin >> lado2;
    cout << "lado3: " << endl;
    cin >> lado3;
    if(lado+lado2 > lado3 && lado2 + lado3 > lado && lado3+lado > lado2) {
        isTriangle = true;
    } else {
        cout << "Não é um triangulo" << endl;
    }

    if(lado == lado2 && lado == lado3 && isTriangle) {
        cout << "Triangulo equilatero" << endl;
    } else if(lado == lado2 || lado == lado3 || lado2 == lado3 && isTriangle) {
        cout << "Triangulo isosceles" << endl;
    } else {
        if(isTriangle) {
            cout << "Triangulo escaleno" << endl;
        }
    }

    cin >> isTriangle;
    return 0;
}