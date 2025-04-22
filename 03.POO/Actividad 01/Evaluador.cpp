#include "Evaluador.h"
#include <iostream>
#include <string>
#include "Postulante.h"
bool Evaluador::evaluar(Postulante postulante) {
    // Verificar si la edad está dentro del rango permitido
    if (postulante.getEdad() < 22 || postulante.getEdad() > 50) {
        _cantidadRechazados++;
        return false;
    }

    // Verificar si la experiencia es suficiente
    if (postulante.getExperiencia() < 2) {
        _cantidadRechazados++;
        return false;
    }

    // Verificar si el puesto es aceptado
    if (postulante.getPuesto() != "Programador" && postulante.getPuesto() != "Tester" && postulante.getPuesto() != "Diseñador") {
        _cantidadRechazados++;
        return false;
    }

    _cantidadEvaluados++;
    return true;
}
int Evaluador::getCantidadEvaluados() const {
    return _cantidadEvaluados;
}

int Evaluador::getCantidadRechazados() const {
    return _cantidadRechazados;
}