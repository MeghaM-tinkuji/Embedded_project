#include "activity1.h"
#include "activity2.h"
#include "activity1.c"
#include "activity2.c"
#include "activity3.h"
#include "activity3.c"
#include "activity4.h"
#include "activity4.c"

volatile uint16_t digital_value;

int main(void)
{
  while(1)
   {
   activity1();
   digital_value = activity2();
   activity3(digital_value);
   activity4(digital_value);
   }
   return 0;
}
