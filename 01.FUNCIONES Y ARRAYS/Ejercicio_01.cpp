#include <iostream>
#include <locale>
using namespace std;

// Cargar las notas del primer parcial de los 78 estudiantes de un curso. Luego de cargar todas las notas:
// - Pedir un número y mostrar por pantalla la nota registrada. Por ejemplo, se ingresa 10 para mostrar el décimo examen.
// - Listar cuántos estudiantes obtuvieron una nota mayor al promedio.

void CargarNotasEstudiantes(int vector[], int tamanio){
   int nota;
   for (int i = 0; i < tamanio; i++)
   {
      cout << "Ingrese la Nota N° " << i + 1 << endl;
      cin>>nota;
      vector[i] = nota;
   }
   
}
void Buscar(int vector[],int tamanio,int filtro){
   int numeroEncontrado;
   for (int i = 0; i < tamanio; i++)
   {
      if(vector[i] == filtro){
         cout << vector[i];
         break;
      }
   }
   
}
int Promedio(int vector[],int tamanio){
   int acumulador = 0;
   for (int i = 0; i < tamanio; i++)
   {
      acumulador += vector[i];
   }
   int promedio = acumulador / tamanio;
   return promedio;
}
void NotaMayorAlPromedio(int vector[],int tamanio){
   int promedio;
   promedio = Promedio(vector,tamanio);
   cout << "Notas Mayores al promedio(" << promedio << ")"<< endl;
   for (int i = 0; i < tamanio; i++)
   {
      if(vector[i]>promedio){
         cout << "Nota "<< i+1 << "("<<vector[i]<<")" << " Mayor al promedio" << endl; 
      }
   }  
}

int main()
{
   setlocale(LC_ALL, "es_ES.UTF-8");
   int const tamanioEstudiantes = 10;
   int estudiantes[tamanioEstudiantes] = {};
   int filtro;
   CargarNotasEstudiantes(estudiantes,tamanioEstudiantes);
   cout << "Ingrese una Numero para buscar la nota: " << endl;
   cin >> filtro;
   Buscar(estudiantes,tamanioEstudiantes,filtro);
   NotaMayorAlPromedio(estudiantes,tamanioEstudiantes);
   return 0;
}