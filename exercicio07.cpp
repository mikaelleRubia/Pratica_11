#include <iostream>
#include <string>
#include <vector>

using namespace std;

void  multiplica_por_n(vector<int> vet1,int qtde, int n){


    for (int i = 0; i < qtde; i++) {
        vet1.push_back(i*n);

    }

    for (int i = 0; i < qtde; i++) {
        cout <<"numero "<< i<< " X " << n << ": " <<vet1[i]<<endl;

    }

}

int main()
{
    vector<int> vet1 {};

    multiplica_por_n(vet1,7, 9);

    return 0;
}