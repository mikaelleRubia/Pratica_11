#include <iostream>
#include <string>
#include <vector>

using namespace std;

int  intercala_char(int tam1, vector<char> vet1,vector<char> vet2,  int tam2){
    int tamanho_vets = tam1 + tam2;
    vector<char> vet3;

    for (int i = 0; i < tamanho_vets/2; i++) {
        vet3.push_back(vet1[i]);
        vet3.push_back(vet2[i]);

    }

    for (auto x: vet3) cout << " letra: " << x << endl;

}

int main()
{
    vector<char> vet1 {'A', 'B', 'D', 'E'};
    vector<char> vet2 {'P', 'K', 'A',}; 

    int tam1= vet1.size(); 
    int tam2= vet2.size(); 

    intercala_char(tam1, vet1, vet2, tam2);

    return 0;
}