#include <iostream>
#include <vector>

using namespace std;


void encontrarLetra(const string& texto, char letra, vector<int>& indices, int* tamanho) {
    for (int i = 0; i < texto.length(); i++) {
        if (texto[i] == letra) {
            indices.push_back(i); 
        }
    }

    *tamanho = indices.size(); 
}

int main() {
    string texto = "exemplo de texto com a letra";
    char letra = 'e';

    vector<int> indices;
    int tamanho = 0;

    encontrarLetra(texto, letra, indices, &tamanho);

    cout << "Letra '" << letra << "' encontrada nas posicoes: ";
    for (int i = 0; i < tamanho; i++) {
        cout << indices[i] << " ";
    }
    cout << endl;

    cout << "Total de ocorrencias: " << tamanho << endl;

    return 0;
}
