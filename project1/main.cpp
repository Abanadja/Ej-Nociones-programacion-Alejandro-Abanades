//
// Created by alexa on 10/10/2024.
//

#include <iostream>

#include "Estudiante.h"
#include "Persona.h"

int g = 20;

int suma(int a, int b) {
    return a + b;
}

int main() {
    std::cout << "Hola Mundo" << std::endl;
    std::cout << "La suma es: " << suma(5, 3) << std::endl;
    std::cout << "Valor de g antes de la funcion suma: " << g << std::endl;
    std::cout << "La suma es: " << suma(5, g) << std::endl;
    std::cout << "Valor de g despues de la funcion suma: " << g << std::endl;

    Persona persona1;
    persona1.setNombre("El Nano");
    persona1.setEdad(43);
    persona1.setGenero("Masculino");
    std::cout << "Nombre :" << persona1.getNombre() << std::endl;
    std::cout << "Edad :" <<persona1.getEdad() << std::endl;
    std::cout << "Genero :" <<persona1.getGenero() << std::endl;

    Estudiante estudiante1;
    estudiante1.setNombre("Abanades");
    estudiante1.setEdad(20);
    estudiante1.setGenero("Masculino");
    estudiante1.setGrado("Ingenieria Informatica");
    estudiante1.mostrarDetalles();

    return 0;
}
