#include "empleado_tiempo_completo.h"
#include <iostream>

// Constructor por defecto
EmpleadoTiempoCompleto::EmpleadoTiempoCompleto()
    : Empleado(), horasSemanales(0), bono(0.0) {
}

// Constructor con parámetros
EmpleadoTiempoCompleto::EmpleadoTiempoCompleto(std::string nombre, std::string id, float salarioBase,
                                               int horasSemanales, float bono)
    : Empleado(nombre, id, salarioBase), horasSemanales(horasSemanales), bono(bono) {
}

// Setters
void EmpleadoTiempoCompleto::actualizarHorasSemanales(int horasSemanales) {
    this->horasSemanales = horasSemanales;
}

void EmpleadoTiempoCompleto::actualizarBono(float bono) {
    this->bono = bono;
}

// Getters
int EmpleadoTiempoCompleto::obtenerHorasSemanales() {
    return horasSemanales;
}

float EmpleadoTiempoCompleto::obtenerBono() {
    return bono;
}

// Sobrescritura del método
void EmpleadoTiempoCompleto::mostrarInformacion() {
    Empleado::mostrarInformacion();
    std::cout << "Horas semanales: " << horasSemanales << std::endl;
    std::cout << "Bono: " << bono << std::endl;
}

// Método adicional
float EmpleadoTiempoCompleto::calcularSalarioTotal() {
    return salarioBase + bono;  // uso de protected
}
