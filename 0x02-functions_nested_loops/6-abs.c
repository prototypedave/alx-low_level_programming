#include <stdlib.h>
#include "main.h"
int _abs(int n)
{
    if (n < 0){
      n = abs(n);
      return n;
    }
    else {
      return n;
    }
}
