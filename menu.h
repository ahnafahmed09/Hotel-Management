#include <stdio.h>
#include <string.h>



void room(void)
{
    int r,s;

    printf("Enter any number to show rooms \n");
    printf("Enter -1 to exit room show and make a choice \n");
    scanf("%d",&s);

    //Menu Driven Program
    while(s!=-1)
    {
      printf("\nPress 1 for VIP room : \n");
    printf("\nPress 2 for Business class room : \n");
    printf("\nPress 3 for Economy class room : \n");

    printf("\n\n\nEnter any number to show rooms \n");
    printf("\n\n\nEnter -1 to exit room show and make a choice \n");
    scanf("%d",&s);
    }

    printf("\n\n\n\n        _______________________________________\n");
    printf("        |             ENTER YOUR CHOICE       |\n");
    printf("        |_____________________________________|\n");

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
    int room_no;




    printf("\n\n\n\n        ___________________________________________\n");
    printf("        |             ENTER ROOM NUMBER          |\n");
    printf("        |________________________________________|\n");
    scanf("%d", &room_no);


    FILE *file = fopen("roomsvip.txt","r");
    int roomExists = 0;



    if (file != NULL) {
        int given_room_no;

        while (fscanf(file,"%d",&given_room_no) == 1) {
            if (given_room_no == room_no) {
                roomExists = 1;
                break;
            }
        }

        fclose(file);
    }

    while (roomExists) {

    printf("\n\n\n\n        ___________________________________\n");
    printf("        |Room %d has already been booked. |\n",room_no);
    printf("        |Enter a different room number     |\n");
    printf("        |__________________________________|\n");
        scanf("%d", &room_no);

        file = fopen("roomsvip.txt", "r");
        roomExists = 0;

        if (file != NULL) {
            int given_room_no;

            while (fscanf(file, "%d",&given_room_no) == 1) {
                if (given_room_no == room_no) {
                    roomExists = 1;
                    break;
                }
            }

            fclose(file);
        }
    }

    file = fopen("roomsvip.txt", "a");

    if (file == NULL) {
        printf("Failed to open file.\n");
        return 0;
    }

    fprintf(file, "%d\n", room_no);
    fclose(file);

     printf("\n\n\n\n        _______________________________________\n");
    printf("        |Room %d has been successfully booked |\n",room_no);
    printf("        |_____________________________________|\n");

    Sleep(10000);
    system("cls");
}

void slot_business(void)
{
int room_no;




    printf("\n\n\n\n        ___________________________________________\n");
    printf("        |             ENTER ROOM NUMBER          |\n");
    printf("        |________________________________________|\n");
    scanf("%d", &room_no);


    FILE *file = fopen("roomsbusiness.txt","r");
    int roomExists = 0;



    if (file != NULL) {
        int given_room_no;

        while (fscanf(file,"%d",&given_room_no) == 1) {
            if (given_room_no == room_no) {
                roomExists = 1;
                break;
            }
        }

        fclose(file);
    }

    while (roomExists) {

    printf("\n\n\n\n        ___________________________________\n");
    printf("        |Room %d has already been booked. |\n",room_no);
    printf("        |Enter a different room number     |\n");
    printf("        |__________________________________|\n");
        scanf("%d", &room_no);

        file = fopen("roomsbusiness.txt", "r");
        roomExists = 0;

        if (file != NULL) {
            int given_room_no;

            while (fscanf(file, "%d",&given_room_no) == 1) {
                if (given_room_no == room_no) {
                    roomExists = 1;
                    break;
                }
            }

            fclose(file);
        }
    }

    file = fopen("roomsbusiness.txt", "a");

    if (file == NULL) {
        printf("Failed to open file.\n");
        return 0;
    }

    fprintf(file, "%d\n", room_no);
    fclose(file);

     printf("\n\n\n\n        _______________________________________\n");
    printf("        |Room %d has been successfully booked |\n",room_no);
    printf("        |_____________________________________|\n");

    Sleep(10000);
    system("cls");

    }


void slot_economy(void)
{
    int room_no;




    printf("\n\n\n\n        ___________________________________________\n");
    printf("        |             ENTER ROOM NUMBER          |\n");
    printf("        |________________________________________|\n");
    scanf("%d", &room_no);


    FILE *file = fopen("roomseconomy.txt","r");
    int roomExists = 0;



    if (file != NULL) {
        int given_room_no;

        while (fscanf(file,"%d",&given_room_no) == 1) {
            if (given_room_no == room_no) {
                roomExists = 1;
                break;
            }
        }

        fclose(file);
    }

    while (roomExists) {

    printf("\n\n\n\n        ___________________________________\n");
    printf("        |Room %d has already been booked. |\n",room_no);
    printf("        |Enter a different room number     |\n");
    printf("        |__________________________________|\n");
        scanf("%d", &room_no);

        file = fopen("roomseconomy.txt", "r");
        roomExists = 0;

        if (file != NULL) {
            int given_room_no;

            while (fscanf(file, "%d",&given_room_no) == 1) {
                if (given_room_no == room_no) {
                    roomExists = 1;
                    break;
                }
            }

            fclose(file);
        }
    }

    file = fopen("roomseconomy.txt", "a");

    if (file == NULL) {
        printf("Failed to open file.\n");
        return 0;
    }

    fprintf(file, "%d\n", room_no);
    fclose(file);

     printf("\n\n\n\n        _______________________________________\n");
    printf("        |Room %d has been successfully booked |\n",room_no);
    printf("        |_____________________________________|\n");

    Sleep(10000);
    system("cls");
}





