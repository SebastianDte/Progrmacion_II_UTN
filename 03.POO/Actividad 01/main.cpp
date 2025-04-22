#include <iostream>
#include <locale>
#include <string>
#include "Postulante.h"
#include "Evaluador.h"

using namespace std;
// Actividad de Programación Orientada a Objetos
// Encapsulamiento con Constructores
// 🧾 Evaluación de Postulantes en una Empresa de Tecnología
// Una empresa de tecnología está diseñando un sistema para evaluar a las personas que se postulan a distintos puestos de trabajo. El sistema debe permitir registrar los datos de cada persona, evaluar si cumple ciertos requisitos mínimos y llevar un registro de las evaluaciones realizadas.

// 🧑‍💻 Historias de Usuario
// Como reclutador, quiero poder registrar la información de una persona que se postula, incluyendo su nombre, edad, puesto al que aplica y años de experiencia laboral.
// Como reclutador, quiero poder evaluar si una persona cumple con los requisitos mínimos para continuar en el proceso de selección.
// Como empresa, necesito que los criterios de evaluación sean:


// La persona debe tener entre 22 y 50 años inclusive.
// Debe contar con al menos 2 años de experiencia laboral.
// El puesto al que aplica debe ser uno de los aceptados (por ejemplo: Programador, Tester o Diseñador).


// Como reclutador, quiero que el sistema me indique con claridad si la persona pasó o no la evaluación, y que además me permita llevar un conteo total de personas evaluadas y cuántas fueron rechazadas.


// Como reclutador, quiero poder ver cuántas personas han sido evaluadas hasta el momento, y de ellas, cuántas no cumplieron los requisitos.
// EXTRA:
// Como reclutador quiero poder establecer los criterio de evaluación, edad mínima, edad máxima, experiencia mínima y puesto

int main()
{
   setlocale(LC_ALL, "es_ES.UTF-8");
      Evaluador evaluador;
      Postulante postulante1, postulante2, postulante3;
      // Cargar datos de postulantes
      postulante1.cargarDatos("Juan Perez", 25, 3, "Programador");
      postulante2.cargarDatos("Maria Lopez", 21, 1, "Tester");
      postulante3.cargarDatos("Pedro Garcia", 30, 5, "Diseñador");

      // Evaluar postulantes
      evaluador.evaluar(postulante1);
      evaluador.evaluar(postulante2);
      evaluador.evaluar(postulante3);

      // Mostrar resultados
      cout << "Cantidad de postulantes evaluados: " << evaluador.getCantidadEvaluados() << endl;
      cout << "Cantidad de postulantes rechazados: " << evaluador.getCantidadRechazados() << endl;
      cout << "Postulante 1: " << postulante1.getNombre() << " - " << (evaluador.evaluar(postulante1) ? "Aprobado" : "Rechazado") << endl;
      cout << "Postulante 2: " << postulante2.getNombre() << " - " << (evaluador.evaluar(postulante2) ? "Aprobado" : "Rechazado") << endl;
      cout << "Postulante 3: " << postulante3.getNombre() << " - " << (evaluador.evaluar(postulante3) ? "Aprobado" : "Rechazado") << endl;

      cout << "Postulante 1: " << endl;
      postulante1.mostrarDatos();
      cout << "Postulante 2: " << endl;
      postulante2.mostrarDatos();
      cout << "Postulante 3: " << endl;
      postulante3.mostrarDatos();
      cout << endl;
      
   return 0;
}



