#include "figura.h"

// Constructor
Figura::Figura(std::string nombre) {
    this->nombre = nombre;
}

// Destructor
Figura::~Figura() {
    // vacío
}

// Getter
std::string Figura::obtenerNombre() {
    return nombre;
}
