#ifndef RECTANGULO_H
#define RECTANGULO_H

#include "figura.h"

class Rectangulo : public Figura {
private:
    double base;
    double altura;

public:
    // Constructor
    Rectangulo(std::string nombre, double base, double altura);

    // Métodos
    double calcularArea() override;
    void describir() override;

    // Getters
    double obtenerBase();
    double obtenerAltura();
};

#endif
