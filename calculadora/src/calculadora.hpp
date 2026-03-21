#pragma once
#include <cstdint>

class Calculadora {
public:
    enum OPERACION {
        SUM,
        REST,
        MULT,
        DIV,
    };

    Calculadora(uint32_t& n1, uint32_t& n2, const OPERACION op);
    
private:
    float sum(uint32_t num1, uint32_t num2);
    float rest(uint32_t num1, uint32_t num2);
    float mult(uint32_t num1, uint32_t num2);
    float div(uint32_t num1, uint32_t num2);

    void mostrar_resultado(float r);
    void limpiar();

    uint32_t *valor_previo = new uint32_t;
    uint32_t *valor_actual = new uint32_t;
    OPERACION opt;
};