#include <iostream>

using namespace std;

int main () {
    int num;
    cout << "Num: " << endl;
    cin >> num;
    if(num % 2 == 0) {
        cout << "Par" << endl;
    }
    cin >> num;

    return 0;
}