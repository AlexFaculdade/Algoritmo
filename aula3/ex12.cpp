#include <iostream>

using namespace std;

int main() {

    float temp;
    cout << "Temperatura: " << endl;
    cin >> temp;
    if(temp < 0) {
        cout << "Congelante" << endl;
    } else if(temp==0) {
        cout << "Igual a 0" << endl;
    } else if(temp >0) {
        cout << "Acima de zero" << endl;
    }

    cin >> temp;

    return 0;
}