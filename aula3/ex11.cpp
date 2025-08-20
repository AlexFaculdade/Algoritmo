#include <iostream>

using namespace std;

int main() {

    int num;
    cout << "Num: " << endl;
    cin >> num;
    if(num % 3 == 0) {
        cout << "Multiplo de 3" << endl;
    } else {
        cout << "Nao e multiplo de 3" << endl;
    }

    cin >> num;

    return 0;
}