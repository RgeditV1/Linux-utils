#include "calculadora.hpp"
#include <iostream>

Calculadora::Calculadora(uint32_t& n1, uint32_t& n2, const OPERACION op)
    : valor_previo(&n1), valor_actual(&n2), opt(op) {
    
    float resul = 0;
    switch (opt) {
        case SUM:  resul = Calculadora::sum(*valor_previo, *valor_actual); break;
        case REST: resul = Calculadora::rest(*valor_previo, *valor_actual); break;
        case MULT: resul = Calculadora::mult(*valor_previo, *valor_actual); break;
        case DIV:  resul = Calculadora::div(*valor_previo, *valor_actual); break;
        default:   return;
    }
    mostrar_resultado(resul);
}

float Calculadora::sum(uint32_t num1, uint32_t num2){
    return float(num1) + num2;

}

float Calculadora::rest(uint32_t num1, uint32_t num2){
    return float(num1) - num2;

}

float Calculadora::mult(uint32_t num1, uint32_t num2){
    return float(num1) * num2;

}

float Calculadora::div(uint32_t num1, uint32_t num2) {
    if (num2 == 0) {
        std::cerr << "Error: División por cero." << std::endl;
        return 0.0f;
    }
    return float(num1) / num2;
}


void Calculadora::mostrar_resultado(float r) {
    std::cout << "El resultado es: " << r << std::endl;
}
