//
// Created by lufe y Gonzo Feb2024.
//

#include "Propietario.h"
#include <iostream>

//TODO Agrege el constructor por defecto y agrege un constructor con dos parametros

Propietario::Propietario(std::string docIdentidad){
 this-> docIdentidad = docIdentidad;
}
Propietario::Propietario(std::string nombre, std::string docIdentidad) {
 this->nombre = nombre;
 this->docIdentidad = docIdentidad;
}

std::string Propietario::getNombre()  {
    return nombre;
}
std::string Propietario::getDoc()  {
    return docIdentidad;
}
int Propietario::getEdad()  {
    return edad;
}

void Propietario::setNombre(std::string nombre) {
    this->nombre = nombre;
}
 void Propietario::setDoc(std::string docIdentidad){
    this->docIdentidad = docIdentidad;
}
void Propietario::setEdad(int edad){
    this->edad = edad;
}

void Propietario::mostrarInfo(){
    std::cout << "nombre: " << nombre << std::endl << "edad: " << edad << std::endl << "identificacion: " << docIdentidad << std::endl;
}