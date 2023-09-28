#include <iostream>
#include <string>
#include <vector>

using namespace std;

void compara_string(string nome1, string nome2){
    int tam1 = nome1.size();
    int tam2 = nome2.size();
    string nome;
    string  tamanho_vets;
    tamanho_vets.resize(tam1 + tam2);

    int i = 0, j = 0, k = 0;
    while (i < tam1 && j < tam2) {
        tamanho_vets[k++] = nome1[i++];
        tamanho_vets[k++] = nome2[j++];
    }

    while (i < tam1) {
        tamanho_vets[k++] = nome1[i++];
    }

    while (j < tam2) {
        tamanho_vets[k++] = nome2[j++];
    }

    for (int i = 0; i < tam1 + tam2; i++) {
        cout << tamanho_vets[i] << " ";
    }
}

int main()
{
    string nome_a = "CASDWQTR";
    string nome_b = "TRSAY";

    compara_string( nome_a,nome_b);

    return 0;
}