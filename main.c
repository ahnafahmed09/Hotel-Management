#include <stdio.h>
#include <stdlib.h>
#include "splash_screen.h"
#include "login.h"

int main(void)
{
   int log;

   splash_screen();
   printf("Press any key to continue...");
   getch();
   login();

    return 0;
}


