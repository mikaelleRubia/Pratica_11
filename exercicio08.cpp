#include <iostream>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    };
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        };
    };
    return true;
};


int conta_primos (int *vet, int qtd){
    int cont = 0;

    for (int i = 0; i < qtd; i++) {
        if (isPrime(vet[i])) {
            cont++;  
        };
    };
    cout << cont <<endl;
};

int main() {
    int vetor[] = {2, 3, 4, 5, 11, 13};
    int qtde = sizeof(vetor) / sizeof(vetor[0]);

    conta_primos (vetor, qtde);


    return 0;
}