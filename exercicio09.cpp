#include <iostream>
#include <string>
#include <vector>

using namespace std;

float calc_serie(int N){
    float resultado =0.0;
    int tam = N;
    for(int i = 1; i <= N; i++){
        resultado += static_cast<float>(i) / tam;
        tam --;
    } 
    return resultado;
}

int main()
{
    int serie;
    cout << "digite o valor da serie "<< endl;
    cin >> serie;
    float resultado = calc_serie( serie);

    cout << resultado << endl;
    return 0;
}