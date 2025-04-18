#include <iostream>
#include <locale>
using namespace std;

// Una fundación que se dedica a fomentar la adopción de mascotas dispone de los registros de adopciones del año 2024. Por cada adopción que se haya efectuado se registró:
// Mes de la adopción (entero entre 1 y 12)
// Tipo de animal adoptado (entero entre 10 y 15)
// Edad del adoptante responsable
// Tipo de vivienda del adoptante responsable (entero entre 1 y 5)

// La información no se encuentra agrupada ni ordenada bajo ningún criterio. Para indicar el fin de la carga de datos se ingresa un mes de adopción igual a cero.

// Se pide calcular e informar
// El tipo de animal más adoptado en general.
// El promedio de edad de los adoptantes de cada tipo de animal.
// Por cada tipo de animal y tipo de vivienda la cantidad total de adopciones registradas.

// Aclaración:
// Los tipos de animales son:
// 10 - Perro, 11 - Gato, 12 - Conejo, 13 - Hurón, 14 - Caballo, 15 - Oveja

// Los tipos de vivienda son:
// 1 - Casa, 2 - Departamento, 3 - Casa Quinta, 4 - Finca, 5 - Duplex


// La mundialmente conocida hamburguesería Coco’s Burger desea registrar la información de las ventas de la primera semana de Agosto 2023 de su local ubicado en Canelones, Uruguay.

// Por cada venta se registra:
// •    Código de hamburguesa (entero de 1 a 5)
// •    Día (entero de 1 - Lunes a 7 - Domingo)
// •    Cantidad vendida (entero)
// •  Tipo de Acompañamiento ('B' – con batatas / 'P' – con papas / 'C' – Aros de cebolla / 'X' – sin acompañamiento)

// Pueden existir varios registros de ventas para la misma hamburguesa. El fin de la carga de datos se indica con un código de hamburguesa igual a 0.

// A este lote se le precede otro ordenado por número de hamburguesa con la siguiente información:
// •    Código de hamburguesa (1 a 5)
// •    Precio (float)
// •    Stock al comienzo de la semana (entero)

// Se pide determinar e informar:
// Por cada hamburguesa, la cantidad de unidades vendidas y el total recaudado.
// La hamburguesa más vendida el viernes.
// Los días que se vendieron hamburguesas acompañadas de Batatas pero no se vendieron hamburguesas acompañadas de Aros de Cebolla.
// Las hamburguesas que lograron un sold out (vendieron todo)
// Por cada día y acompañamiento, la cantidad de hamburguesas vendidas.


int main()
{
   setlocale(LC_ALL, "es_ES.UTF-8");
   
   return 0;
}