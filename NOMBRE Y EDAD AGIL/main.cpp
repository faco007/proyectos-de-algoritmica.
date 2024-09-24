/* programa nombre y edad agil */

#include <iostream>

using namespace std;

int main(){
    string nombre, apellido;

    int edad;

    cout << "introduce tu nombre: ";
    cin >> nombre;
    cout << "introduce tu apellido: ";
    cin >> apellido;
    cout << "introduce tu edad: ";
    cin >> edad;
    cout << "hola " << nombre << " " << apellido << ", tu edad es " << edad <<endl;

    return 0;
}

