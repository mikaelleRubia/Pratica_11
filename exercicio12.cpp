#include <iostream>
#include <string>
#include <vector>

using namespace std;

void compara_string(string nome1, string nome2, string nome3){

    for (char caractere : nome1) {
    
            if (nome2.find(caractere) != string::npos && nome3.find(caractere) == string::npos) {
                nome3 += caractere;
            }
        }
    cout << nome3<< endl;
}

int main()
{
    string nome_a = "AW";
    string nome_b = "TRSAYHGFDJMNYHW";
    string nome_c;

    compara_string( nome_a,nome_b,nome_c);

    return 0;
}