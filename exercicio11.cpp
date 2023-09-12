#include <iostream>
#include <string>

using namespace std;

int main() {

    string nome;
    cout << "digite um nome:" << endl;
    getline(cin, nome);

    for (int i = 0; i < nome.length(); i++) {
            char caracter = nome[i] + 1;
            cout << caracter;

    }

    return 0;
}

