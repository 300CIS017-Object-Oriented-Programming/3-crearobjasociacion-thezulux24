#include "raza.h"
#include <iostream>

Raza::Raza(std::string nombre, std::string paisOrigen){
    this->nombre = nombre;
    this->paisOrigen = paisOrigen;
}

std::string Raza::getNombre(){
    return nombre;
}
std::string Raza::getPaisOrigen(){
    return paisOrigen;
}
void Raza::setNombre(std::string nombre){
    this->nombre = nombre;
}
void Raza::setPaisOrigen(std::string paisOrigen){
    this->paisOrigen = paisOrigen;

}