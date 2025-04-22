#pragma once
#include "Postulante.h"

class Evaluador
{
private:
    int _cantidadEvaluados;
    int _cantidadRechazados;
public:
    bool evaluar(Postulante postulante);
    int getCantidadEvaluados() const;
    int getCantidadRechazados() const;
};


