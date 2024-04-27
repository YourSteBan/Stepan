#include "graphics.h"
#include "picture.hpp"

void fence()
{
   int wx=600;
   int wy=800;
   setfillstyle(SOLID_FILL, GREEN);
   bar(200, wy/2 + 150, wx, wy/2 + 200);
   setcolor(BROWN);
   for(int i = 220; i < wx; i+=20) {
      line(i, wy/2 + 150, i, wy/2 + 200);
   }
}