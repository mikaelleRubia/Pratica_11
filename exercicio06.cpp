#include <iostream>

using namespace std;

void intercala(int *vet1, int tam1, int *vet2, int tam2) {
    int *tamanho_vets = new int[tam1 + tam2];
    int i = 0, j = 0, k = 0;

    while (i < tam1 && j < tam2) {
        tamanho_vets[k++] = vet1[i++];
        tamanho_vets[k++] = vet2[j++];
    }

    while (i < tam1) {
        tamanho_vets[k++] = vet1[i++];
    }

    while (j < tam2) {
        tamanho_vets[k++] = vet2[j++];
    }

    for (int i = 0; i < tam1 + tam2; i++) {
        cout << tamanho_vets[i] << " ";
    }
}

int main() {
    int tam1 = 3;
    int vet1[] = {1, 3, 5};

    int tam2 = 6;
    int vet2[] = {2, 4, 6, 8, 9, 50};

    intercala(vet1, tam1, vet2, tam2);


    return 0;
}
