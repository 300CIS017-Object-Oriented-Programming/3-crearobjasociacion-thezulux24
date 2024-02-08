#include <iostream>
#include "Perro.h"
#include "Propietario.h"

int main() {

    // Instanciar
    Perro firulais;
    firulais.setNombre("Firulais");
    firulais.setColor("Negro");
    firulais.setEdad(5);
    firulais.setTamanio("Grande");
    firulais.setRaza("Mastin napolitano");

    //Agregar un nuevo pPropietario a Firulais
    firulais.agregarPropietario("Carlos Zapata", "102842313");

    // Consultar el nombre del pPropietario del perro Firulais
    std::cout<< "El nombre del pPropietario del perro "<<firulais.getNombre() << " es " << firulais.getPropietario()->getNombre()<<std::endl;

    Perro* lion = new Perro("Lion", 2, "Pitbull", "Negro", "Mediano");
    lion->ladrar();

    Propietario* david = new Propietario ("6677");
    david->setNombre ("David");
    david->setEdad(12);
    david->mostrarInfo();
    return 0;
}
