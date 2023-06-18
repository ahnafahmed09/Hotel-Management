void login(void)
{

    char username[50],password[25],userfile[50],passwordfile[25];

    FILE *log;
    log=fopen("login.txt","r");


        //storing the username and password from file
        fscanf(log,"%s%s", userfile,passwordfile);

        while(1)
        {

    printf("\n\n\n\n        _______________________________________\n");
    printf("        |          Login panel                |\n");
    printf("        |_____________________________________|\n");

    printf("\n\n\n\n        _______________________________________\n");
    printf("        |        Enter user name :            |\n");
    printf("        |_____________________________________|\n");


          fflush(stdin);
          fgets(username,sizeof(username),stdin);
        username[strlen(username)-1]='\0'; //remove the new line charecter

    printf("\n\n\n\n        _______________________________________\n");
    printf("        |        Enter password :             |\n");
    printf("        |_____________________________________|\n");


        fflush(stdin);
        fgets(password,sizeof(password),stdin);
        password[strlen(password)-1]='\0';


       //matching password and username
        if((strcmp(userfile,username)==0 )&& (strcmp(passwordfile,password)==0))

         {
             system("cls");
            printf(".........Login Successful..........\n\n\n\n\n\n");
            printf("Enter any key to Continue\n");
            getchar();
            break;

         }
        else
         {
             system("cls");
            printf(">>>>> Login Unsuccessful!!!!!!!!!!!\n\n\n");
            printf("Try Again.!!!!!!!!!\n\n\n");
            sleep(2);
            system("cls");
         }
        }
        fclose(log);

    }
