#include "chess.h"
#include "figures.h"

void display(){
  //caballo negro
  /*char** blackKnight = reverse(knight);
  interpreter(blackKnight);*/

  //cuadro blanco y negro
  char** Black = reverse(whiteSquare);
  char** Union = join(Black, whiteSquare);
  
  char** Suceso = repeatH(Union,4);
  char** Espejo =flipV(Suceso);
  
  char** UnionFilas = up(Suceso , Espejo);
  char** Tablero = repeatV(UnionFilas,4);
  interpreter(Tablero); 

}
  
  

