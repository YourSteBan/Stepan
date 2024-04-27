#include "graphics.h"
#include "picture.hpp"

void house()
{
   int polypoints[6] = {200, 200, 300, 100, 400, 200};
   setfillstyle(1, BROWN);
   bar(200, 200, 400, 400);
   setfillstyle(1, COlOR9139, 69, 19));
   fillpoly(3, polypoints);
}