#include <iostream>
#include <string>

using namespace std;

int main() {

    string nome;
    cout << "digite um nome:" << endl;
    getline(cin, nome);

    for (int i = 0; i < nome.length(); i++) {
            cout << nome.at(i) << endl;

    }

    return 0;
}

