#include "chess.h"
#include "figures.h"

void display(){
  //caballo negro
  /*char** blackKnight = reverse(knight);
  interpreter(blackKnight);*/

  //cuadro blanco y negro
  char** Black = reverse(repeatH(whiteSquare,0));
  char** White = repeatH(whiteSquare,0);

  char** Union = join(Black, White);
  interpreter(Union);
}
  
  

