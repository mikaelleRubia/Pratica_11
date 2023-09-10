#include <string>
#include <iostream>

using namespace std;

void maxnin(int vetor[], int n, int& maximo, int& minimo){

    if(n<=0){
        cout << " vetor esta vazio" << endl;
    } 

    maximo = vetor[0];
    minimo=vetor[0];

    for(int i = 1; i <=n; i++){
        if(vetor[i]>maximo){
            maximo = vetor[i];
        }
        else if (vetor[i]<minimo){
            minimo=vetor[i];
        }      
    }
}

int main(void){

    int vetor[] = {3, 1, 4, 5, 9, 2, 6, 10};
    int n = sizeof(vetor)/sizeof(vetor[0]);
    int maximo, minimo;

    maxnin(vetor, n, maximo, minimo);

    cout << "maximo: " << maximo << " minimo: " << minimo << endl;

    return 0;

}