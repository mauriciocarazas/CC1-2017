#include <allegro.h>
#define MAXFILAS 20
#define MAXCOLS 31
BITMAP *buffer;
BITMAP *roca; //aqui cargamos la imagen (EN EL MAIN)
BITMAP *pacbmp;  //creamos un buffer que tenga rodas las dimensiones del pacman
BITMAP *pacman;  //aqui vamos a imprimir la imagen dbp del PACMAN; pero que solo contenga una posición
BITMAP *comida; //declaramos un bitmap llamado comida que guarda la imagen de la comida


int dir=4;   //que tenga las direcciones de pacman, y cambie dependiendo a donde mira el pacman
int px=30*14, py=30*17  ;  //la posicion inicial del pacman



char mapa[MAXFILAS][MAXCOLS]={ //dibuj el mapa
      "XXXXXXXXXXXXXX XXXXXXXXXXXXXX",
      "Xo o   o o  XX XX  o o  o  oX",
      "X XXX XXXXX XX XX XXXXX XXX X",
	  "XoXXX XXXXX XX XX XXXXX XXXoX",
      "X      o o o o o o o o      X",
      "XoXXX XX XXXXXXXXXXX XXoXXXoX",
      "X     XX ooo XXX ooo XX     X",
      "XoXXXoXXXXXX XXX XXXXXXoXXXoX",
      "X XXXoXX ooo     ooo XXoXXX X",
      " o    XX XXXXXXXXXXX XX    o ",
      "X XXXoXX XXXXXXXXXXX XXoXXX X",
      "X XXXoXX oo       oo XXoXXXoX",
      "X XXXoXXXXXX XXX XXXXXXoXXX X",
      "Xo    XX     XXX     XX    oX",
      "X XXXoXX XXXXXXXXXXX XXoXXX X",
      "XoXXX  o  o o o o o  o  XXXoX",
      "X XXXoXXXX XXX XXXX XXX XXX X",
      "XoXXXoXXXX          XXX XXXoX",
      "X  o  o o  XXX XXXX o o  o  X",
      "XXXXXXXXXXXXXX XXXXXXXXXXXXXX",
};

void dibujar_mapa(){
	int row, col;
    for (row = 0 ; row<MAXFILAS ; row++){
        for (col = 0 ; col<MAXCOLS ; col++){//revisa todo el mapa
            if(mapa[row][col] == 'X'){ /// si tenemos un caracter que es una X(del mapa)
                draw_sprite(buffer, roca, col*30, row*30); //donde vea una x imprima el bitmap roca
            }                                              //multiplicamos las coordenadas x30 ya que la escala es de 30 a 1(30x30)
            else if(mapa[row][col] == 'o'){ //dibujamos las monedas del buffer comida
                draw_sprite(buffer,comida , col*30 , row*30);
                ///aqui come las monedas y la borramos
                if(py/30 == row && px/30 == col){ //Aqui le decimos que si pacman esta en la misma posicion del buffer comida, entonces borramos la moenda
                    mapa[row][col] = ' '; // al pacman lo movemo de 30 en 30 por eso dividimos entre 30, asi igualamos con el tamanio char
                }
            }
        }
    }
}
void pantalla(){
	blit(buffer, screen, 0, 0, 0, 0,880, 600); //damos la orden de que se imprima todo en la pantalla
}
void dibujar_personaje(){ //funcion que nos pinta al pacman
	blit(pacbmp,pacman,dir*33,0,0,0,33,33); //imprimir(blit) la imagen de pacman sobre el bufer pacman

// LA EXPLICACION DE BLIT
/*las dos primeras coodenadas dicen de donde a donde agarramos el pacman
	es porque va cambiando segun la variable dirrecion
	elegimos de donde a donde va a pegar la imagen del pacman
	agarrando desde arriba desde los puntos 33,66,99,142(aprovechamos a dir)
 las otras 2 es desde donde vamos a pegar la imagen de pacman
 y las ultimas 2 se pone las dimensiones que va a tener la imgane de c/posicion
https://www.allegro.cc/manual/4/api/blitting-and-sprites/blit
*/
	draw_sprite(buffer,pacman,px,py); //para la transparencia del buffer pacman y las coordenadas donde esta el pacman

//https://www.allegro.cc/manual/4/api/blitting-and-sprites/draw_sprite
}
///PARA QUE CUANDO PACMAN SE COMA TODAS LAS MONEDAS, SE ACABE EL JUEGO
bool game_over(){
    int row,col;
    for (row = 0 ; row<MAXFILAS ; row++){
        for (col = 0 ; col<MAXCOLS ; col++){//revisa todo el mapa
            if(mapa[row][col] == 'o')return true;//buscnado monedas
        }//en el caso de que si hayan monedas retorna verdad
    }
    return false;//en caso de que no regrese verdad, nos da un FALSE para acabar
}///ES COMO UN CORTO CIRCUITO PARA ACABAR EL JUEGO

int main(){
	allegro_init();
	install_keyboard();

	set_color_depth(32);
	set_gfx_mode(GFX_AUTODETECT_WINDOWED,880,600,0,0); //iniciamos la pantalla de alegro con ese tamanio

	buffer = create_bitmap(880,600);    //creamos un buffer con dimensiones del mapa sacamos para la pantalla de alegro
	roca = load_bitmap("roca.bmp",NULL); //cargamos la imagen en el bitmap roca
	pacbmp = load_bitmap("pacman.bmp",NULL);//cargamos la imagen en el bitmap PACMAN
	pacman = create_bitmap(33,33);  // nos crea un bitmap de dimensiones 33*33, es lo q mide casa posicion del pacman
	comida= load_bitmap("Comida.bmp",NULL);//cargamos el bmp comida en el buffer comida

	///AQUI ES PARA EL MOVIMIENTO Y EL GAMEOVER (QUE ACABA EL JUEGO)
	while(!key[KEY_ESC] && game_over ()){ //esto se ejecuta siempre que la tecla que presionemos no sea ESC
        //Aqui asociamos las teclas a la variable direccion (0,1,2,3)
		if(key[KEY_RIGHT])     dir =1; //cuando la tecla que se presione sea "derecha", entoces la variable dir sea 0
        else if(key[KEY_LEFT]) dir =0;//cuando la tecla que se presione sea "izquierda", entoces la variable dir sea 1
        else if(key[KEY_UP])   dir =2;//cuando la tecla que se presione sea "arriba", entoces la variable dir sea 2
        else if(key[KEY_DOWN]) dir =3;//cuando la tecla que se presione sea "abajo", entoces la variable dir sea 3
		//aqui asociamos las direcciones (0,1,2,3) a el movimiento
        /// Hacemos el codigo para que pacman no atraviese paredes
        if(dir==0){  //cuando sea 0
            if(mapa[py/30][(px-30)/30] != 'X')//cuando pacman se mueve a la izquiera, revisa el muro, lo divide entre 30 xq esa es la escala del mapa char.
                px -= 30;// le restamos a el pacman 30 de su posicion en el eje x
            else dir = 4; // en caso de que el muro si exista, dir=4 significa que pacman ya no se mueve
        }
        if(dir==1){ //cuando la direccion sea 1:
            if(mapa[py/30][(px+30)/30] != 'X')//igual que antes nos fijamos en una posicion mas adelante, hacia la derecha de donde estamos y la dividimos entre 30 porque esta es la escala que tenmos del char y si NO ES 'X'
                px  += 30;//le sumamos a el pacman 30 de su posicion en el eje x Y SE SIGUE MOVIENDO
            else dir = 4; //EN CASO DE QUE SIO SEA =X DETEMOS EN PACMAN CON DIR=X
        }
        if(dir==2){//cuando la direccion sea 2:
            if(mapa[(py-30)/30][(px)/30] != 'X')//Ahora nos fijamos  en la posicion de arriba
                py -= 30;//le restamos a el pacman 30 de su posicion en el eje y, porque cuando restas en y vas hacia arriba
            else dir = 4;
        }
        if(dir==3){//cuando la direccion sea 33:
            if(mapa[(py+30)/30][(px)/30] != 'X')
                py += 30;//le sumamos a el pacman 30 de su posicion en el eje y, si vamos hacia abajo hay que incrementar la variable
            else dir = 4;
        }
    ///aqui el codigo para que salte de un lado del mapa a otro
        //las medidas 880 y 600 son multiplicando x30 las x de cada coordenada
        if(px <= -30) px=870; //cuando esta en el atajo de la izquierda del mapa, pacman aparece por la derecha, TODO EN EL EJE X
            else if (px >= 870) px = -30;
        if(py <= -30) py=590; //cuando esta en el atajo de la izquierda del mapa, pacman aparece por la derecha, TODO EN EL EJE X
            else if (py >= 590) py = -30;

        clear(buffer); //limpia el buffer porque sino al avanzar,se queda el pacman o los fantasmas por donde pasan
        dibujar_mapa(); //llamamos a la funcion
        dibujar_personaje();//llamamos a la funcion
        pantalla();//llamamos a la funcion
        rest(70); //esta funcion le da tiempo para que alcancemos a ver el movimiento del pacman

        ///para que muerda pacman
        clear(pacman); //limpiamos el buffer pacman para qie al cambiar de posicion se reincie la imagen
        blit(pacbmp,pacman,4*33,0,0,0,33,33); //vamos a dibujar a pacaman cerrado
        draw_sprite(buffer,pacman,px,py);
        pantalla();//llamasmos a la funcion
        rest(90);//la velocidad con la que cambia la imagen del pacman dependiendo de la posicion
	}
}
END_OF_MAIN();








