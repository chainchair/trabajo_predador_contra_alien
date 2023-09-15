#include<iostream>
#include <cstdlib>
using namespace std;

class mapa{

private:
  int fila=4;
  int columna=4;
  int totalobjetos=(fila*columna)/2;
  string map[4][4];
public:
mapa(){
    for(int i=0;i<fila;i++){
      for(int j=0;j<columna;j++){
        if(i==0 && j==0){
          map[0][0]="X";
        }
        else if (i==fila-1 && j==columna-1){
          map[i][j]="Y";
        }
        else{
          map[i][j]=" ";  
        }
        
      }
    }

    
  }
void verMapa(){
    string stuff(columna*2+1,'-'); //stuff me permite "repetir" un string sin crear directamente un ciclo.
    for(int i=0;i<fila;i++){
      cout<<endl<<stuff<<endl;
      for(int j=0;j<columna;j++){
           cout<<"|"<<map[i][j];
           if(j==columna-1){cout<<"|";}
      }
     
    } cout<<endl<<stuff<<endl;
}

void asignarObjetos(){
  int total= totalobjetos;
  while(total>0){
    int fil=rand()%fila;
    int col=rand()%columna;
    if(map[fil][col]==" "){
      map[fil][col]="o"; //lleno la matriz con objetos
      total=total-1; //resto al total para poder salir del ciclo
    }
  }
}
  void setmap(string nuevoValor,int x,int y){
    map[x][y] =nuevoValor;
  }
  int getfila(){
    return fila;
  }
  int getcolunma(){
    return columna;
  }

}mapa1;
