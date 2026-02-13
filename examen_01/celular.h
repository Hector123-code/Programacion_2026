#ifndef CELULAR_H
#define CELULAR_H

#include <string>

class Celular {
private:
    std::string marca;
    std::string modelo;
    int almacenamiento;   
    float precio;
    bool encendido;

public:
    // Constructor
    Celular(std::string marca, std::string modelo, int almacenamiento, float precio);

    // Métodos
    void encender();
    void apagar();
    void mostrarInformacion();
};

#endif

