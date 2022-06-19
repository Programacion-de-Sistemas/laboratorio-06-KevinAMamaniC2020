#include "chess.h"
#include "figures.h"

//podria hacerlo con un sizeof pero todas 
//las funciones tendrian que recibir el parametro tamaño
//pero como todas las figuras tienen un mismo tamaño no varia mucho
int tamaño=59;

char** flipV(char** y){
    // Se crea un puntero para recorrer la cadena dentro del array
    char *p;
    p = y;
    //recorre todo el array
    for(int i=0;i<tamaño;i++){
        //recorremos con el puntero la cadena
        while(*p != '\0'){
            y[i] = strev(p);    //se invierte la cadena en una posicion
            p++;                
        }        
    }
    return y;       //retorna la cadena    
}

char** flipH(char** y){
    //recorre todo el array e invierte sus elementos
    char* temp;
    for(int i=0;i<t/2;i++){
        temp=y[i];
        y[i]=y[t-i-1];
        y[t-i-1]=temp;
    }
    return y;
}

char** rotateL(char** y){
    char temp = y[0]; //agarramos el primer array
    for(int i=0; i<(sizeof(y)-1);i++) //recorremos todo el array
        y[i] = y[i+1]; //lo rota
    return y;
}

char** rotateR(char** y){
    int tamaño = sizeof(y);//extraemos el tamaño del array
    int n = tamaño;
    char temp = y[tamaño-1];//tomamos el ultimo elmento
    for(int j=0;j<n;j++){ //recorremos el array
        for (int i=(tamaño-2);i>=0;i--) //lo volteamos a la derecha una por uno
            y[i+1] = y[i];
        y[0]=temp;//lo alamacenamos
    }
    return y;//retorna la cadena
}

char** reverse(char** y){
    char *p; //creamos un puntero
    p=y;    
    for(int i=0;i<tamaño;i++){  //recorrer array
        while(*p != '\0'){      //recorremos los elementos con el puntero
            if(*p =='_' || *p =='.'){//invierte el color definifo
                *p='@';
            }else if (*p =='='){
                *p='#';
            }else if (*p =='@'){
                *p='_';
                *p='.';
            }else if (*p =='#'){
                *p='=';
            }
            p++;
        }
    }   
    return y;//retorna la cadena
}

char** superImpose(char** y, char** x){
    return y;
}

char** join(char** y, char** x){
    int cadenas=0;
    //respecto a la cadena Y
    for(int i=0;i<tamaño;i++){
        int cadenas =+ strlen(y[i]);//extraemos elementos de la cadena
    }
    int tamañoZ = cadenas+tamaño*strlen(x); //juntamos los tamaños de las cadenas
    //cadena x
    char** z=malloc((tamaño+1)*sizeof(char));
    z[tamañoZ] = '\0'; //almacenamos esos elementos en la cadena

    //recorremos la segunda cadena
    int temp = 0;
    for(int i=0;i<tamaño;i++){
        if(i != 0){
            strcpy(z+temp,x);
            temp+=strlen(x);
        }

        strcpy(z+temp,y[i]);//se almacena en la cadena z
        temp += strlen(y[i]);
    }
    return z; //retorna la nueva cadena que une ambos elementos de los arrays
}

char** up(char** y, char** x){
    //se trata de unir los arrays mas no sus elementos   
    char** z;
    //Cadena Y
    for(int i=0;i<tamaño;i++){
        z[i] = y[i];
     //Cadena X      
    }for(int j=0;j<tamaño;j++){
        z[j++]=x[j];
    }
    //Juntar el tamaño de ambas cadenas
    for(int k=0;k<tamaño+tamaño;k++){
        return z[k];
    }
}

char** repeatH(char** y, int x){
    //se repite n veces la funcion con join
    for(int i=0;i<=x;i++){
        char** z=join(y,y);
        return z;
    }
}
//se repite hacia abajo con el array n veces
char** repeatV(char** y, int x){      
    for(int i=0;i<=x;i++){
        return y;    
    }
}

