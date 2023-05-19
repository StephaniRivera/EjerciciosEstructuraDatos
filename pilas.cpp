#include <iostream>
#include <stack>
#include <string>

class Persona {
public:
    std::string nombre;
    int edad;

    Persona(const std::string& nombre, int edad) : nombre(nombre), edad(edad) {}
};

int main() {
    const int capacidadMaxima = 3;
    std::stack<Persona> pila;

    std::cout << "Registro de personas (Capacidad máxima: " << capacidadMaxima << ")" << std::endl;

    // Agregar personas al registro
    for (int i = 1; i <= capacidadMaxima; i++) {
        std::string nombre;
        int edad;

        std::cout << "Ingrese el nombre de la persona: ";
        std::cin >> nombre;
        std::cout << "Ingrese la edad de la persona: ";
        std::cin >> edad;

        Persona persona(nombre, edad);
        pila.push(persona);
        std::cout << "Persona agregada al registro." << std::endl;
    }
    std::cout << "Registro completo. Última persona agregada: " << pila.top().nombre << std::endl;

    // Eliminar personas del registro
    std::cout << "Eliminando personas del registro:" << std::endl;
    while (!pila.empty()) {
        Persona persona = pila.top();
        pila.pop();
        std::cout << "Persona eliminada: " << persona.nombre << std::endl;
    }

    std::cout << "Registro vacío." << std::endl;

return 0;
}