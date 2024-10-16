//
// Created by alexa on 16/10/2024.
//
#include "main2.h"
#include <iostream>
#include <fmt/core.h>
#include "funciones.h"

using namespace std;
using namespace fmt;

int main() {
  cout << "Hola chambales" << endl;
  print("Hola Fernando Alonso\n");

  print("Suma de 5 + 4: {}\n", suma(5,4));
  print("Resta de 5 - 4: {}\n", resta(5,4));

  return 0;
}


