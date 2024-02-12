//
// Created by lufe0 y Gonzo Feb2024.
//
#ifndef PERRO_H
#define PERRO_H

#include <string>
#include <iostream>
#include "Propietario.h"
#include "veterinario.h"
#include "raza.h"

class Perro {
private:
    int edad;
    std::string nombre;
    std::string raza;
    std::string tamanio;
    std::string color;
    Propietario* pPropietario;
    Veterinario* pVeterinario;
    Raza* pRaza;

public:
    Perro();
    Perro(std::string _nombre, int _edad, std::string _raza,std::string _color, std::string _tamanio);
    ~Perro(); //Destructor
    void ladrar();
    Propietario * getPropietario();
    Veterinario * getVeterinario();
    Raza * getpRaza();
    // Sirve para....... AL PUNTERO QUE ESTÁ CREADO DE PROPIETARIO SE ASOCIA CREANDO UN NUEVO OBJETO PROPIETARIO
    void agregarPropietario(std::string nombre, std::string docIdentidad);

    // Sirve para relacionar dos clases cuando ya se tiene un objeto
    void setPropietario(Propietario * pPropietario);

    void setRaza(Raza * pRaza);
    
    void setVeterinario(Veterinario* pVeterinario);

    int getEdad();
    void setEdad(int edad);
    std::string getRaza();
    void setRaza(std::string raza);
    std::string getNombre();
    void setNombre(std::string nombre);
    std::string getTamanio();
    void setTamanio(std::string tamanio);
    std::string getColor();
    void setColor(std::string color);
};
#endif
