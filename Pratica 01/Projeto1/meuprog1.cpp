#include <iostream>
using namespace std;

int main() {
    string nome_do_usuario;
    cout << "Por favor, insira o seu nome: ";
    getline (cin, nome_do_usuario);
    cout << "Bom dia, " << nome_do_usuario << endl;
    return 0;
}