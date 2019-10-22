#include "defines.h"
#include "serial.h"
#include "lib.h"

int main(vodi)
{
  serial_init(SERIAL_DEFAULT_DEVICE);
  puts("Hello World!\n");
  while (1)
  ;

  return 0;
}