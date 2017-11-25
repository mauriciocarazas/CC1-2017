class fantasma
{
    BITMAP *enemigobmp;
    BITMAP *enemigo;
 
    int fdir ;
    int _x, _y;
 
public:
       fantasma(int x, int y); //construcctor de parametros
       void dibujar_fantasma() const;
       void mover_fantasma();
       void choque_pacman();
};
/*---------- Constructor de la clase ------------*/
fantasma::fantasma(int x, int y)
{
    _x = x;
    _y = y;
    fdir = rand()%4;
    enemigobmp = load_bitmap("images/enemigo.bmp",NULL);
    enemigo = create_bitmap(30,30);
}
 
 
void fantasma::dibujar_fantasma()const
{
     blit(enemigobmp,enemigo ,0,0,0,0,30,30);
     draw_sprite(buffer, enemigo, _x,_y);
}
 
/*---------- Funcion que determina si hay colision entre pacman y un fantasma ------------*/
void fantasma::choque_pacman()
{
    if(py== _y && px == _x || _y ==anteriorpy && _x==anteriorpx)
    {
 
        for(int j=0;j<=5;j++)
        {
            clear(pacman);
            clear(buffer);
            dibujar_mapa();
 
            blit(muertebmp, pacman,j*33,0,0,0,33,33);
            draw_sprite(buffer,pacman,px,py);
 
            pantalla();
            rest(80);
 
        }
        vidas--;
        cout<<endl<<"vidas"<<vidas<<endl;
        pop();//desapilar TOS
        px =30*14;
        py =30*17;
        dir =4;
    }
}
 
/*-------------- Funcion para mover un fantasma --------------*/
void fantasma::mover_fantasma()
{
    dibujar_fantasma();
    choque_pacman();
    if(mapa[_y/30][_x/30] == '|'){
        fdir = rand()%4;
        }
    if(fdir == 0)
    {
       if(mapa[_y/30][(_x-30)/30]!= 'X') _x-=30;
            else fdir = rand()%4;
    }
    if(fdir == 1)
    {
       if(mapa[_y/30][(_x+30)/30]!= 'X') _x+=30;
            else fdir = rand()%4;
    }
    if(fdir == 2)
    {
       if(mapa[(_y-30)/30][(_x)/30]!= 'X') _y-=30;
            else fdir = rand()%4;
    }
    if(fdir == 3)
    {
       if(mapa[(_y+30)/30][(_x)/30]!= 'X') _y+=30;
            else fdir = rand()%4;
    if(_x <= -30) _x=870;
            else if(_x >= 870) _x = -30;
}
}
 