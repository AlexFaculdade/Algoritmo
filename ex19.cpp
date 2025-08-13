#include <iostream>

using namespace std;

int main() {   
    float precoProduto;
    bool desconto = true;
    cout << "Digite o preço do produto: " << endl;
    cin >> precoProduto;

    if(precoProduto >= 500) {
        precoProduto = precoProduto - (precoProduto *0.1);
    } else if(precoProduto >=200) {
        precoProduto = precoProduto - (precoProduto * 0.07);
    } else if(precoProduto >= 100) {
        precoProduto = precoProduto - (precoProduto * 0.05);
    } else {
        desconto = false;
    }

    if(desconto) {
        cout << "O preço do produto com desconto fica: " << precoProduto << endl;
    } else {
        cout << "Para esse produto não há desconto, portanto, o preço é: " << precoProduto << endl;
    }

    cin >> precoProduto;


    return 0;
}