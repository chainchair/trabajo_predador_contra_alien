#include "personajes.cpp"
#include "mapa.cpp"
#include<iostream>
using namespace std;

class Alien : public Personaje{
private:
  int x=getposicionX();
  int y=getposicionY();

public:
Alien(){}
  //Personaje(){}
void habilidad() override{
    
    //mapa1.setmap("#", x, y);
    cout<<"se ha colocado un bloqueo '#' "<<endl;
  }
void mover() override{
  cout<<"";/*
  int random= rand()%2;
  switch(random){
    
    case 0:
      if(x+1<=mapa1.getfila()-1){
        mapa1.setmap(getnombre(),x+1,y);
        setPosicion(x+1,y);
      }else{
        mover();
      }
    case 1:
      if (x-1>=0){
        mapa1.setmap(getnombre(),x-1,y);
        setPosicion(x-1,y);
      }else{
        mover();
      }
    default:
    cout<<"no deberias estar aqui, eso es malo, te regresare al programa"<<endl;
    mover();
      
  }*/
}
}alien1;