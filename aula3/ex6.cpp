#include <iostream>

using namespace std;

int main() {
    float num;
    cout << "Num: " << endl;
    cin >> num;
    if(num > 0 ) {
        cout << "Positivo" << endl;
    } else if(num == 0) {
        cout << "Neutro" << endl;
    } else {
        cout << "Negativo" << endl;
    }

    cin >> num;
    return 0;
}