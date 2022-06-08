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

  //Se crea la fila de los cuadros
  char** Black = reverse(whiteSquare);
  char** Union = join(Black, whiteSquare);
  char** SFilas = repeatH(Union,4);

  //se crea una fila de piezas blancas
  char** CabTorAlf = join(join(rook, knight),bishop);
  char** AlfTorCab = join(join(bishop,knight),rook);
  char** ReRa = join(join(king,queen),AlfTorCab);

  //se sobreponen las piezas sobre los cuadros
  char** PiezasW = join(CabTorAlf,ReRa);
  char** FilaW = superImpose(PiezasW,SFilas);

  //Peones Blancos

  //Peones Negros

  //Fichas Negras

  char** FilaB = reverse(superImpose(PiezasW,SFilas));
  interpreter(FilaB);
}
  
  

