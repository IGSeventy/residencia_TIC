#include <iostream>
#include <iomanip>
using namespace std;


int main() {
    float A, B;
    cout << "Digite um numero flutuante: ";
    cin >> A;
    cout << "Digite outro numero flutuante: ";
    cin >> B;
    cout << "Soma: " << fixed << setprecision(2) << A+B << endl;
    cout << "Subtração: " << fixed << setprecision(2) << A-B << endl;
    cout << "Multiplicação: " << fixed << setprecision(2) << A*B << endl;
    cout << "Divisão: " << fixed << setprecision(2) << fixed << setprecision(2) << A/B << endl;
    
    return 0;
}