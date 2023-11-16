#include "main.h"
#include <unistd.h>                                                            /*
*  _putchar - write the character ch to stdout
* Return : 1
*/
int _putchar(char ch)
{
return(write(1, &ch, 1));
}
