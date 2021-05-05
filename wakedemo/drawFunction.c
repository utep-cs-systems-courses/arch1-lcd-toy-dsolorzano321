#include "lcdutils.h"
#include "drawFunction.h"

void drawShape(u_int color){
  u_char r, c;
  u_char center = 10;
  for(r = 0; r<=10; r++){
    for(c = 0; c <= 0; c++){
      drawPixel(center+c+55, r+60, color);
      drawPixel(center-c+55, r+60, color);
      
    }

  }


}
