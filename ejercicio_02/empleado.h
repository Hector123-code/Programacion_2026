#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>

class Empleado {
protected:
    std::string nombre;
    std::string id;
    float salarioBase;

public:
    // Constructores
    Empleado();
    Empleado(std::string nombre, std::string id, float salarioBase);

    // Setters
    void actualizarNombre(std::string nombre);
    void actualizarId(std::string id);
    void actualizarSalarioBase(float salarioBase);

    // Getters
    std::string obtenerNombre();
    std::string obtenerId();
    float obtenerSalarioBase();

    // Método de visualización
    void mostrarInformacion();
};

#endif
