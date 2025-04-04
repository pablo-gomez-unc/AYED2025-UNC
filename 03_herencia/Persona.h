//
// Created by Roberto Pablo Gomez on 20/03/2025.
//

#ifndef HERENCIA_PERSONA_H
#define HERENCIA_PERSONA_H

class Persona {
public:
    Persona(): edad(0), nombre(std::string("")) {};
    Persona(int e, std::string n): edad(e), nombre(n) {};
    void mostrar();
    void metodo();
private:
    int edad;
    std::string nombre;
};

#endif //HERENCIA_PERSONA_H
