#include <stdio.h>
#include <stdlib.h>
#include "splash_screen.h"
#include "splash_screen2.h"
#include "login.h"
#include "room1.h"
#include "room.h"

int main(void)
{
   int log;

   splash_screen();
   printf("Press any key to continue...");
   getch();
   login();
   room_diagram();
   room();
   splash_screen2();

    return 0;
}


