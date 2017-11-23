#ifndef FANTASMA_H
#define FANTASMA_H
#include <stdlib.h>
int color[7] = {
      0x009,
      0x00E,
      0x00C,
      0x002,
      0x00B,
      0x005,
      0x00F

     };
class fantasma{
public:
      int fdir;
      int _x, _y;
      int col;
public:
      fantasma(int x , int y , int color);
      void dibujar_fantasma() const;
      void borrar_fantasma() const;
      void mover_fantasma();
      void choque_pacman();
};
#endif // FANTASMA_H
