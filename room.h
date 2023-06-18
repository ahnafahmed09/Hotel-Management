#include <stdio.h>




void room(void)
{
    int r;
    printf("\nPress 1 for VIP room : \n");
    printf("\nPress 2 for Business class room : \n");
    printf("\nPress 3 for Economy class room : \n");
    scanf("%d",&r);

    if(r==1)
    {
        slot_vip();
    }
    else if(r==2)
    {
        slot_business();
    }
    else if(r==3)
    {
        slot_economy();
    }

}

void slot_vip(void)
{
    int number;
   room_diagram();
   printf("Enter the room number you want to book :");
   scanf("%d",&number);
}

void slot_business(void)
{
    room_diagram();
    char rooms[3],roomfile[3];

    FILE *room;
    room=fopen("room.txt","r");


        //storing the username and password from file
        fscanf(room,"%s", roomfile);

        while(1)
        {

    printf("\n\n\n\n        _______________________________________\n");
    printf("        |             Room Booking            |\n");
    printf("        |_____________________________________|\n");

    printf("\n\n\n\n        _______________________________________\n");
    printf("        |        Enter room number :          |\n");
    printf("        |_____________________________________|\n");


          fflush(stdin);
          fgets(rooms,sizeof(rooms),stdin);
        rooms[strlen(rooms)-1]='\0'; //remove the new line charecter




       //matching password and username
        if((strcmp(roomfile,rooms)!=0 ))

         {
             system("cls");
            printf("\n\n\n\n\n\n.........  Room is already booked  ..........\n\n\n\n\n\n");
            printf("Try Another room \n");
            getchar();
            break;

         }
        else
         {
             system("cls");
            printf("\n\n\n\n\n\n!!!!!!!!!  You booked this room successfully   !!!!!!!!!!!\n\n\n");
            sleep(2);
            system("cls");
         }
        }
        fclose(room);

    }


void slot_economy(void)
{
    int number;
   room_diagram();
   printf("Enter the room number you want to book :");
   scanf("%d",&number);
}




void room_diagram(void)
{
printf("           -:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::-   \n");
printf("          .= .:::::::::::::::. :::::::::::::::: .::::::::::::::. ................  *   \n");
printf("          .= -:              + *              + *              +.+..............+  *   \n");
printf("          .= -:              + *              + *              +.=              +  *   \n");
printf("          .= -:     101      + *    102       + *    103       +.=    104       +  *   \n");
printf("          .= -:              + *              + *              +.=              +  *   \n");
printf("          .= -=::::::::::::::+ *::::::::::::::+ *::::::::::::::+ +::::::::::::::+  *   \n");
printf("          .=                                                                       *   \n");
printf("          .=  +::::::::::::::= +::::::::::::::+ +::::::::::::::=.=::::::::::::::=  *   \n");
printf("          .=  +              + *              + *              +:-              =. *   \n");
printf("          .=  +              + *              + *              +:-              =. *   \n");
printf("          .=  +    201       + *   202        + *    203       +:-    204       =. *   \n");
printf("          .=  +              + *              + *              +:=              =. *   \n");
printf("          .=  :::::::::::::::. .::::::::::::::. :::::::::::::::. ::::::::::::::::  *   \n");
printf("          .=  +::::::::::::::= +::::::::::::::+ -=:::::::::::::+ *::::::::::::::+. *   \n");
printf("          .=  +              + *              =.-:             + *              =. *   \n");
printf("          .=  +    301       + *   302        =.-:   304       + *    305       =. *   \n");
printf("          .=  +              + *              =.-:             + *              =. *   \n");
printf("          .=  *::::::::::::::+ *::::::::::::::+ :-:::::::::::::= -::::::::::::::-  *   \n");
printf("          .=                                                                       *   \n");
printf("          .=  :::::::::::::::: :::::::::::::::-  =:::::::::::::=. =:::::::::::::=. *   \n");
printf("          .=  +              + =.             =. +             -:.=             -: *   \n");
printf("          .=  +   401        + =.  402        =. +   403       -:.=   404       -: *   \n");
printf("          .=  +              + =.             =. +             -:.=             -: *   \n");
printf("          .=  +::::::::::::::+ =-:::::::::::::*. =:::::::::::::=. -:::::::::::::-. *   \n");
printf("          .=                                                                       *   \n");
printf("           -::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::   \n");

Sleep(1000);
system("cls");

}





