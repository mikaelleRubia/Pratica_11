#include <iostream>
#include <string>
#include <vector>

using namespace std;

void compara_string(string nome1, string nome2,string nome){

    for (auto x: nome1) 
    for (auto y: nome2)

    if(x == y){
        nome +=x;
    }

    cout << " letra: " << nome << endl;
}

int main()
{
    string nome_a = "CASDWQTR";
    string nome_b = "TRSAY";
    string nome= "";



    compara_string( nome_a,nome_b, nome);

    return 0;
}