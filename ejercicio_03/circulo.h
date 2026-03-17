#ifndef CIRCULO_H
#define CIRCULO_H

#include "figura.h"

class Circulo : public Figura {
private:
    double radio;

public:
    // Constructor
    Circulo(std::string nombre, double radio);

    // Métodos
    double calcularArea() override;
    void describir() override;

    // Getter
    double obtenerRadio();
};

#endif
