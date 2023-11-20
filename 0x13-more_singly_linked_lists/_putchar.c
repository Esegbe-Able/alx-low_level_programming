#include "main.h"
#include <unistd.h>                                                            /*
*  _putchar - write the character y to stdout
* Return : 1
*/
int _putchar(char y)
{
return(write(1, &y, 1));
}
