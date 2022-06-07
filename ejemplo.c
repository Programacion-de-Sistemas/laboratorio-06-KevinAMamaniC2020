#include "chess.h"
#include "figures.h"

void display(){
  char** blackKnight = reverse(knight);
  interpreter(blackKnight);

  char** Square = repeatH(whiteSquare,8);
  interpreter(Square);  
}

