#include "Evaluador.h"
#include <iostream>
using namespace std;

//Devuelve la suma de a (dado) y b (dado)
//en este ejercicio cree lo que es una variable
// resultado para hacer la suma en una sola variable y que retorne resultado//
int sumar(int a, int b)
{
    int resultado=0;
    resultado=a+b;
    return resultado;
}

//Devuelve la resta de a (dado) y b (dado)
//en este ejercicio cree lo que es una variable
// resultado para hacer la resta en una sola variable y que retorne resultado//
int restar(int a, int b)
{
    int resultado=0;
    resultado=a-b;
    return resultado;
}

//Devuelve la multiplicacion de a (dado) y b (dado)
//en este ejercicio cree lo que es una variable
// resultado para hacer la multiplicacion en una sola variable y que retorne resultado//
int multiplicar(int a, int b)
{
    int resultado=0;
    resultado=a*b;
    return resultado;
}

//Devuelve la division de a (dado) y b (dado)
//en este ejercicio cree lo que es una variable
// resultado para hacer la division en una sola variable y que retorne resultado//
int dividir(int a, int b)
{
    int resultado=0;
    resultado=a/b;
    return resultado;
}

//Devuelve el numero mayor entre a (dado) y b (dado)
//en esta funcion se agrego un contador que haga la condicion cual es mayor y la retorne
int getMayor(int a, int b)
{

    if(a>b){
    return a;
    }

    return b;

}

//Devuelve el numero mayor entre a (dado) y b (dado)
//en esta funcion se agrego un contador que haga la condicion cual es menor y la retorne
int getMenor(int a, int b)
{
    if(a<b){
    return a;
    }

    return b;
}

//Devuelve el numero mayor entre a (dado), b (dado) y c (dado)
//en esta funcion se agrego un contador que haga la condicion cual es mayor,entre  3
//variables, se utiliza dos condiciones if y retorne el mayor de los 3 numeros//
int getMayor(int a, int b, int c)
{
  if(a>b & a>c){
        return a;
  }
  if(b>a & b>c){
        return b;
  }

    return c;


}

//Establece el valor (dado) en el arreglo (dado) en el indice posicion (dado)
//En esta funcion asignamos al arreglo la posicion como parametro //
void setValor(int arreglo[], int valor, int posicion)
{

    arreglo[posicion]=valor;
}

//Obtiene y devuelve el valor del arreglo (dado) en el indice posicion (dado)
//en esta funcion solo retornamos el valor dado al arreglo en la posicion//
int getValor(int arreglo[], int posicion)
{

    return arreglo[posicion];
}

//Devuelve el numero mayor del arreglo (dado) que contiene tamano (dado) elementos
//Creamos la variable mayor y la varible i luego iniciamos un ciclo for para recorrer
// el arreglo
int getMayor(int arreglo[], int tamano)
{

    int mayor=0;
    int i;

    for(i=0; i<tamano; i++){
        if(arreglo[i]>mayor){
            mayor=arreglo[i];
        }
    }

    return mayor;
}

//Devuelve el numero menor del arreglo (dado) que contiene tamano (dado) elementos
//en esta funcion se inicio la variable menor y la i se utilizo ciclo for para recorrer el
//el arreglo hasta que "menor" sea menor que "i "//
int getMenor(int arreglo[], int tamano)
{
    int menor=999;
    int i;

    for(i=0; i<tamano; i++){
        if(arreglo[i]<menor){
            menor=arreglo[i];
        }
    }

    return menor;
}

//Devuelve el promedio de los numeros del arreglo (dado) que contiene tamano (dado) elementos
//en esta funcion se creo las variables de suma y la de promedio y se inicio un ciclo
//para recorrer el arreglo//
int getPromedio(int arreglo[], int tamano)
{
  int sum=0;
  int prom=0;
    int i;

    for(i=0; i<tamano; i++){
            sum+=arreglo[i];
            prom=sum/tamano;


    }

    return prom;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
