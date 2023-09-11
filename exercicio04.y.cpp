#include <iostream>
#include <string>

using namespace std;

void calcula(int& x, int& y){

    int temp =0;
    x = x+y; 
    temp = x;
    y = temp-y; 

} 

int main()
{
    int x =0;
    int y =0;

    cout << "Digite o valor de x: " << endl;
    cin >> x;

    cout << "Digite o valor de y: " << endl;
    cin >> y;

    calcula(x, y);

    cout << "A soma de dos valores digitados: " << x <<endl;
    cout << "A subtracao de dos valores digitados: " <<  y <<endl;


}