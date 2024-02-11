#include "veterinario.h"
#include <iostream>

Veterinario::Veterinario(std::string nombre, int aniosExperiencia){
    this-> nombre = nombre;
    this-> aniosExperiencia = aniosExperiencia;
}

std::string Veterinario::getNombre(){
    return nombre;
}
int Veterinario::getAniosExperiencia(){
    return aniosExperiencia;
}
void Veterinario::setNombre(std::string nombre){
    this->nombre = nombre;
}
void Veterinario::setAniosExperiencia(int aniosExperiencia){
    this->aniosExperiencia = aniosExperiencia;

}