#include <iostream>
#include <string>

int main() {
    std::string nombre, apellido;
    int edad;

    // Solicitar nombre
    std::cout << "Introduzca su nombre: ";
    std::cin >> nombre;

    // Solicitar apellido
    std::cout << "Introduzca su apellido: ";
    std::cin >> apellido;

    // Solicitar edad
    std::cout << "Introduzca su edad: ";
    std::cin >> edad;

    // Mostrar los datos ingresados
    std::cout << "Hola, " << nombre << " " << apellido << ". Tienes " << edad << " anios." << std::endl;

    return 0;
}
