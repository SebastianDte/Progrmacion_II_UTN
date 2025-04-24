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

void pegarFigurita(int numeroFigurita, int indexAuxiliar, int album[][2], int &contFigComunesRepetida,int &cantidadHologramas){
   // La cantidad de hologramas entre las figuritas compradas (sin contar las repetidas).
  
   // Verificar si la figurita ya está pegada en el álbum
   if(indexAuxiliar == 0 && album[numeroFigurita-1][0] == 0){
      album[numeroFigurita-1][0] = numeroFigurita; // Marca la figurita común como pegada
   }else if(indexAuxiliar == 1 && album[numeroFigurita-1][1] == 0){
      album[numeroFigurita-1][1] = numeroFigurita; // Marca la figurita holograma como pegada
      cantidadHologramas++; // Incrementa el contador de hologramas
   }else{
      contFigComunesRepetida++; // Incrementa el contador de figuritas repetidas
   }
}

int contarFiguritasFaltantes(int album[][2], int filas, int columnas){
   int contFiguritasFaltantes = 0;
   for (int i = 0; i < filas; i++){
      if(album[i][0] == 0 ){
         contFiguritasFaltantes++; 
      }
      if( album[i][1] == 0){
         contFiguritasFaltantes++; 
      }
      
   }
   return contFiguritasFaltantes;
}

int main()
{
   setlocale(LC_ALL, "es_ES.UTF-8");
   
   const int filas = 50; 
   const int columnas = 2; 

   //Declaración de cariables
   int album[filas][columnas] = {0}; 
   int contFigComunesRepetidas = 0;
   int indexAuxiliar=0;
   int numeroPaquete = 0;
   int numeroFigurita = 0;
   char tipoFigurita = ' ';
   char respuesta;
   int cantidadHologramas = 0;
 
   while (true)
   {
      
      for (int i = 0; i < 5; i++)
      {
         cout << "Ingrese el número de paquete (0 para salir): ";
         cin >> numeroPaquete;  
         cout << "Ingrese el número de figurita (1 a 50): ";
         cin >> numeroFigurita;
         cout << "Ingrese el tipo de figurita (C o H): ";
         cin >> tipoFigurita;

         if(tipoFigurita == 'C' || tipoFigurita == 'c'){
            indexAuxiliar = 0; // Común
         }else if(tipoFigurita == 'H' || tipoFigurita == 'h'){
            indexAuxiliar = 1; // Holograma
         }

         cout << "¿Pegar en el álbum? (S/N): ";
         cin >> respuesta;
         if(respuesta == 'S' || respuesta == 's'){
            pegarFigurita(numeroFigurita, indexAuxiliar, album, contFigComunesRepetidas,cantidadHologramas);
         }
      }
   }

   //Cantidad de figuritas comunes repetidas
   cout << "Cantidad de figuritas comunes repetidas: " << contFigComunesRepetidas << endl;

   // Calcular la cantidad de figuritas faltantes
   int contFiguritasFaltantes = contarFiguritasFaltantes(album, filas, columnas);
   cout << "Cantidad de figuritas faltantes: " << contFiguritasFaltantes << endl;

   return 0;
}