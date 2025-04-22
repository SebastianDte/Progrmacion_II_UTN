#include <iostream>
#include <locale>
using namespace std;

// Un individuo acaba de obtener su álbum de figuritas de DragonCube. Se trata de un libro cuyas páginas cuentan con espacios en blanco designados para pegar 50 figuritas. 

// Estos espacios en blanco están numerados y cada uno de ellos está reservado para una figurita en particular, identificada con el mismo número. Luego de obtener el álbum, el coleccionista comienza a comprar paquetes de figuritas que contienen, cada uno, 5 unidades. Los paquetes vienen identificados con un número natural como código.

// Las figuritas, además de estar numeradas, se clasifican por:

// Tipo de figurita:
// - Común (C)
// - Holograma (H)

// Se pide realizar un programa que permita registrar, por cada paquete, la información de las
// 5 figuritas. Los registros tienen la siguiente estructura:
// Número de paquete (entero)
// Número de figurita (1 a 50)
// Tipo de figurita (C o H)
// ¿Pegar en el álbum? (S/N)

// No hay límites en la cantidad de paquetes que el coleccionista pueda comprar. La carga de datos finaliza con un número de paquete igual a 0. Calcular e informar:
// La cantidad de figuritas comunes repetidas.
// La cantidad de figuritas faltantes del álbum.
// La cantidad de hologramas entre las figuritas compradas (sin contar las repetidas).
// El estado del álbum pudiendo ser uno de los siguientes casos:
// "Incompleto" si no se llegaron a pegar las 50 figuritas.
// "Completo" si se llegaron a pegar las 50 figuritas entre comunes y hologramas.
// "Completo común" si está completo pero además tiene las 50 figuritas comunes pegadas.
// "Completo holográfico" si está completo pero además tiene las 50 figuritas hologramas pegadas.
// Teniendo en cuenta que cada paquete cuesta $500 y que cada figurita común se puede vender a $20 y cada holograma a $50. Calcular el costo total de la colección y el costo total de una potencial venta de figuritas no pegadas de la colección.

// Aclaraciones:
// Cuando se carga los datos de un paquete se debe solicitar la información de las cinco figuritas que incluye el paquete.
// El álbum tiene 50 figuritas en total pero los paquetes pueden traer de cada una la variante común y holograma. En total son 100 figuritas distintas.
// El coleccionista puede decidir si pega en el álbum figuritas comunes y hologramas, sólo comunes o sólo hologramas. Cada espacio del álbum sin figuritas es una figurita faltante.
// Las figuritas que el coleccionista no pega en el álbum son parte de su colección en una pila aparte. Si el coleccionista tiene la figurita #1 varias veces pero nunca la pegó en el álbum entonces el álbum no puede considerarse completo.
// Se considera una figurita repetida si tiene la misma figurita del mismo tipo más de una vez. Por ejemplo, si tengo la figurita #1 común y #1 holograma en mi colección, no la tengo repetida. Sin embargo, si tres veces tengo la figura #1 holograma en mi colección entonces la tengo repetida DOS veces.

int main()
{
   setlocale(LC_ALL, "es_ES.UTF-8");
   
   //Declaración de cariables
   int album[50] = {0}; // Inicializa el álbum con 50 espacios en blanco
   int paquete[5] = {0}; 
   char tipo[5] = {' '}; // Tipo de figurita (C o H)
   bool pegar[5] = {false}; // ¿Pegar en el álbum? (S/N)
   float costoPaquete = 500.0; // Costo de cada paquete
   float costoComunes = 20.0; // Costo de cada figurita común
   float costoHologramas = 50.0; // Costo de cada figurita holograma
   int comunesRepetidas = 0; // Contador de figuritas comunes repetidas
   int hologramasRepetidas = 0; // Contador de hologramas
   int numeroFigurita=0;
   while(true){
      cout << "Ingrese el número de paquete (0 para salir): ";
      int numPaquete;
      cin >> numPaquete;
      if(numPaquete == 0) break; // Salir si el número de paquete es 0
      for(int x = 0; x<5; x++){
         cout << "Ingrese el número de figurita (1 a 50): ";
         cin >> numeroFigurita;
         if(numeroFigurita >= 1 && numeroFigurita <= 50){
            paquete[x] = numeroFigurita; // Guardar el número de figurita
         }else{
            cout << "Número de figurita inválido. Debe estar entre 1 y 50." << endl;
            x--; // Volver a pedir el número de figurita
         }
         
      }
   }

   return 0;
}