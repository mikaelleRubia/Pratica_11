#include <iostream>
#include <string>

using namespace std;

string codificarcao (string frase){
    string frase_nova ="";
    for (char x: frase){
        if(isalpha(x)){
            if(x == 'Z'){
                x= 'A';
            }
            else if(x == 'z'){
                   x='a'; 
            }
            else{
                x++;
                frase_nova += x;
            }
        }else{
            frase_nova += " ";

        }
    }
    return frase_nova;
}



string descodificarcao (string frase){
    string frase_nova ="";
    for (char x: frase){
        if(isalpha(x)){
            if(x == 'Z'){
                x= 'A';
            }
            else if(x == 'z'){
                   x='a'; 
            }
            else{
                x--;
                frase_nova += x;
            }
        }else{
            frase_nova += " ";
        }
    }
    return frase_nova;
}

int main() {

    string nome ="Estrutura de Dados";
    string frase_codificada ="";

    frase_codificada = codificarcao(nome);
    cout << "codificada: " <<frase_codificada << endl;

    frase_codificada = descodificarcao(frase_codificada);
    cout << "descodificada: " << frase_codificada << endl;

    return 0;
}