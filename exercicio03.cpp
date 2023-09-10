#include <iostream>
#include <string>

using namespace std;


int main()
{
    string resposta_; 
    int temp;
    int vet[10];



    cout << " Digite 10 numeros" << endl;
    for(int i = 0; i <10; i++) {
        cout << "valor " << i+1 <<":";
        cin >> vet[i];
    }
    cout  << endl;
    cout << " ============= Numeros =============" << endl;

    for(int i = 0; i <10; i++) {
        cout << " Numero: " << vet[i];
      
    }
    cout  << endl;

    // logica para ordenação 
    for(int i = 0; i <10; i++) {
        for(int j = i+1; j<10; j++) {
            if(vet[i] < vet[j]){
                temp = vet[i];
                vet[i] = vet[j];
                vet[j] = temp;
        }

        }
      
    }
    cout << " ============= Numeros ordenados =============" << endl;

    for(int i = 0; i <10; i++) {
        cout << " Numero novo ->:" << vet[i];
      
    }
    

}