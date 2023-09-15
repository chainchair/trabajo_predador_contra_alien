#include<iostream>


using namespace std;

class Personaje{
private:
  string nombre;
  int vida=5;
  int fuerza=5;
  int posicionX=0;
  int posicionY=0;

public:
 Personaje(){
 }
  void setFuerza(int nuevaFuerza){
    fuerza=nuevaFuerza;
  }
  void setVida(int nuevaVida){
    vida=nuevaVida;
  }

  int getVida(void){
      return vida;
    }
  int getFuerza(void){
      return fuerza;
  }
  void setPosicion(int x,int y){
    posicionX=x;
    posicionY=y;
  }
  int getposicionX(){
    return posicionX;
  }
  int getposicionY(){
    return posicionY;
  }
  string getnombre(){
    return nombre;
  }
  void setNombre(string n){
    nombre=n;
  }
  virtual void habilidad()= 0;
  virtual void mover()=0;
  
};
