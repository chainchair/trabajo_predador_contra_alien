//#include "personajes.cpp"
#include <iostream>
using namespace std;

class objetos{
private:  
  // tipos de objetos 
  // buenos y malos
  // fuerza recuperacion / trampa osos planta venenosa
  
public: 
template <typename T>
  void ventajaFuerza(T A){
    A.setFuerza(A.getFuerza()+5);
  }
template <typename T>
  void ventajaRecuperacion(T A){
    A.setVida(A.getVida()+5);
  }
template <typename T>
  void trampaDeOsos(T A){
    A.setVida(A.getVida()-5);
  }
  

  //para poder usar una sola funcion random creo un template(tipo plantilla) porque no puedo usar el tipo de dato personaje porque es abstracto
  template <typename T>
void plantaVenenosa(T A){
    A.setFuerza(A.getFuerza()-5);
  }
template <typename T>
  void aleatorio(T A){
    
    int random= rand()%4;
    
    switch(random){
      case 0:
        ventajaFuerza(A);
        cout<<"posion de fuerza obtenida\n+5 a la fuerza";
      case 1:
        ventajaRecuperacion(A);
        cout<<"posion de recuperación obtenida\n+5 de vida";
      case 2:
        trampaDeOsos(A);
        cout<<"ha caido en una trampa de osos\n-5 de vida";
      case 3:
        plantaVenenosa(A);
        cout<<"te ha atacado una planta venenosa\n-5 de fuerza";
      default:
        cout<<"no deberias estar aquí, esto es un ERROR\n noooo mas bien apague y vamonos";
    }
  }
};