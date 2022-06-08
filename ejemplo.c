#include "chess.h"
#include "figures.h"

void display(){
  //caballo negro
  /*char** blackKnight = reverse(knight);
  interpreter(blackKnight);*/

  //cuadro blanco y negro
  /*char** Black = reverse(whiteSquare);
  char** Union = join(Black, whiteSquare);
  
  //Union de filas
  char** Suceso = repeatH(Union,4);
  char** Espejo =flipV(Suceso);
  
  //Union de columnas
  char** UnionFilas = up(Suceso , Espejo);
  char** Tablero = repeatV(UnionFilas,4);
  interpreter(Tablero); */

  char** CuadroB=reverse(whiteSquare);

  char** torreW=rook;

  //torre con cuadro blanco
  char** Black = reverse(whiteSquare);
  char** Union = join(Black, whiteSquare);
  char** SFilas = repeatH(Union,4);

  char** CabTorAlf = join(join(rook, knight),bishop);
  char** AlfTorCab = join(join(bishop,knight),rook);
  char** ReRa = join(join(king,queen),AlfTorCab);

  char** PiezasW = join(CabTorAlf,ReRa);
  char** FilaW = superImpose(PiezasW,SFilas);

  interpreter(FilaW);
}
  
  

