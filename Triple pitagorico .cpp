// triples_pitagoricos.cpp
#include <iostream>
#include <cmath>
#include "Triple pitagorico.h"

void encontrar_triples_pitagoricos(int max_value) {
    std::cout << "Triples pitagóricos encontrados:\n";
    // Bucle para iterar valores del primer lado (a)
    for (int a = 1; a <= max_value; a++) {
        // Bucle para iterar valores del segundo lado (b), empezando desde a para evitar duplicados
        for (int b = a; b <= max_value; b++) {
            // Calculamos el tercer lado (c) como la raíz cuadrada de a^2 + b^2
            double c = sqrt(a * a + b * b);

            // Verificamos si c es un entero y cumple la condición de pitagórico (a^2 + b^2 = c^2)
            if (c == static_cast<int>(c)) { // Verifica si c es entero
                int int_c = static_cast<int>(c); // Convertimos c a entero para comparaciones adicionales

                // Verificamos las condiciones de un triángulo
                if (a + b > int_c && a + int_c > b && b + int_c > a) {
                    std::cout << a << " - " << b << " - " << int_c << "\n";
                }
            }
        }
    }
}