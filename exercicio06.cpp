#include <iostream>
#include <string>
#include <vector>

using namespace std;

int  intercala(int tam1, vector<int> vet1,vector<int> vet2,  int tam2){
    int tamanho_vets = tam1 + tam2;
    vector<int> vet3;

    for (int i = 0; i < tamanho_vets/2; i++) {
        vet3.push_back(vet1[i]);
        vet3.push_back(vet2[i]);

    }

    for (auto x: vet3) cout << " Numero: " << x << endl;

}


int main()
{
    vector<int> vet1 {1, 2, 3, 4, 9};
    vector<int> vet2 {5, 11, 5, 14, 20}; 

    int tam1= vet1.size(); 
    int tam2= vet2.size(); 

    intercala(tam1, vet1, vet2, tam2);

    return 0;
}