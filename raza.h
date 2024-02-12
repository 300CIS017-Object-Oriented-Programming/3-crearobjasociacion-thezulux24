#ifndef RAZA_H
#define RAZA_H

#include <string>

class Raza {
private:
    std::string nombre;
    std::string paisOrigen;

public:
    Raza() = default; 
    Raza(std::string nombre, std::string paisOrigen);
    std::string getNombre();
    std::string getPaisOrigen();
    void setNombre(std::string nombre);
    void setPaisOrigen(std::string getPaisOrigen);

};

#endif //RAZA_H