#include "personajes.cpp"
//#include "mapa.cpp"
#include<iostream>
class predator: public Personaje{
private:    
    int x=getposicionX();
    int y=getposicionY();
public:
predator(){}
void habilidad() override{
  cout<<"ataque "<<endl;
  }
void mover() override{
    cout<<""<<endl;
  }
}predator1;