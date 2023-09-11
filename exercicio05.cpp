#include <iostream>

using namespace std;

int insere_meio(int vetor[], int& qtde, int elemento) {
    if (qtde == 0) {
        vetor[0] = elemento;
        qtde = 1;
        return qtde;
    }


    if (qtde % 2 == 0) {
        for (int i = qtde - 1; i >= qtde / 2; i--) {
            vetor[i + 1] = vetor[i];
        }
    } else {
       
        for (int i = qtde - 1; i > qtde / 2; i--) {
            vetor[i + 1] = vetor[i];
        }
    }

    vetor[qtde / 2] = elemento;
    qtde++;

    return qtde;
}

int main() {
    int vetor[100]; 
    int qtde = 6;   

    for (int i = 0; i < qtde; i++) {
        vetor[i] = i + 1; 
    }

    int elemento = 100;
    qtde = insere_meio(vetor, qtde, elemento);

    cout << "Novo tamanho do vetor: " << qtde << endl;
    cout << "Vetor apos a insercao: ";
    for (int i = 0; i < qtde; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
