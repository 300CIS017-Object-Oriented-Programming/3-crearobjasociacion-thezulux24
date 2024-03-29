#include <iostream>
#include "Perro.h"
#include "Propietario.h"
#include "veterinario.h"
#include "raza.h"
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
    david->setEdad(2);
    david->mostrarInfo();

    lion->agregarPropietario("Brayan Zuluaga", "1087112028");
    std::cout << "El nombre del pPropietario del perro "<<lion->getNombre() << " es " << lion->getPropietario()->getNombre()<<std::endl;

    std::cout << lion->getPropietario()->getDoc() <<std::endl;
    lion->getPropietario()->setEdad(19);
    std::cout << lion->getPropietario()->getEdad() <<std::endl;

    std::cout << "####################" << std::endl << "PRUEBAS PARTE 2:" << std::endl << "####################" << std::endl;

    Veterinario* lucas = new Veterinario("lucas",20);

    lion->setVeterinario(lucas);

    std::cout << "El nombre del veterinario es " << lion->getVeterinario()->getNombre()<< " y tiene " << lion->getVeterinario()->getAniosExperiencia() << " anios de experiencia" << std::endl;

    Raza* mastin = new Raza("Mastin Napolitano", "Italia");

    Raza* maltes = new Raza("Maltes", "Italia");

    firulais.setRaza(mastin);

    std::cout << "la raza de " <<firulais.getNombre() << " es " << firulais.getpRaza()->getNombre() << " y su pais de origen es " << firulais.getpRaza()->getPaisOrigen() << std::endl;

    
    return 0;
}
