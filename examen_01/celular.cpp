#include "celular.h"
#include <iostream>

// Constructor
Celular::Celular(std::string marca, std::string modelo, int almacenamiento, float precio) {
    this->marca = marca;
    this->modelo = modelo;
    this->almacenamiento = almacenamiento;
    this->precio = precio;
    this->encendido = false; 
}

// Método para encender
void Celular::encender() {
    if (!encendido) {
        encendido = true;
        std::cout << "El celular se ha encendido." << std::endl;
    } else {
        std::cout << "El celular ya está encendido." << std::endl;
    }
}

// Método para apagar
void Celular::apagar() {
    if (encendido) {
        encendido = false;
        std::cout << "El celular se ha apagado." << std::endl;
    } else {
        std::cout << "El celular ya está apagado." << std::endl;
    }
}

// Método para mostrar información
void Celular::mostrarInformacion() {
    std::cout << "Marca: " << marca << std::endl;
    std::cout << "Modelo: " << modelo << std::endl;
    std::cout << "Almacenamiento: " << almacenamiento << " GB" << std::endl;
    std::cout << "Precio: $" << precio << std::endl;
    std::cout << "Estado: " << (encendido ? "Encendido" : "Apagado") << std::endl;
}

