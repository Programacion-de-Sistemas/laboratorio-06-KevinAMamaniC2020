#include "chess.h"
#include "figures.h"

char** flipV(char** y){
    char *p;
    p = y;
    for(int i=0;i<sizeof(y);i++){
        while(*p != '\0'){
            y[i] = strev(p);
            p++;
        }        
    }
    return y;    
}

char** flipH(char** y){
    for(int i=sizeof(y); i>=0;i--)
        return y;
}

char** rotateL(char** y){
        
}

char** rotateR(char** y){

}

char** reverse(char** y){

}

char** superImpose(char** y, char** x){

}

char** join(char** y, char** x){

}

char** up(char** y, char** x){

}

char** repeatH(char** y, int x){

}

char** repeatV(char** y, int x){

}

