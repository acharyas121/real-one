#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    FILE *chose,*chose2,*chose3,*chose4,*chose5;
    char choose1[20],bb[20],cc,dd,ee,ff,gg,choose2[20],choose3[20],choose4[20],choose5[20];
    int choice,choice1,bb1;
    printf("\t\t\tFILED OF INTEREST\n");
    printf("\t\t\t=================\n\n");
    printf("Press '1' for cultural and religious interest\n");
    printf("Press '2' for Trekking and hiking interest\n");
    printf("Press '3' for Biological interest\n");
    printf("Press '4' for Adventurous interest\n");
    printf("Press '5' for Natural interest\n");
    scanf("%d",&choice);
    if(choice==1)
    {
        goto cultures;
    }
    if(choice==2)
    {
        goto trekking;
    }
    if(choice==3)
    {
    goto biology;
    }
    if(choice==4)
    {
        goto adventure;
    }
    if(choice==5)
    {
        goto national;
    }
    cultures:
        system("cls");
        printf("\t\tLIST:\n");
        printf("Name of Heritage\t\t\tFile name\n");
        printf("1. Pashupatinath Temple\t\t\t'pashupati.txt'\n");
        printf("2. Bouddhanath Stupa\t\t\t'bouddha.txt'\n");
        printf("3. Swayambhunath Stupa\t\t\t'swayambhu.txt'\n");
        printf("4. Changunarayan Temple\t\t\t'changunarayan.txt'\n");
        printf("5. Manakamana Temple\t\t\t'manakamana.txt'\n");
        printf("6. Lumbini\t\t\t\t'lumbini.txt'\n");
        printf("7. Chandragiri Temple\t\t\t'chandragiri.txt'\n");
        printf("8. Muktinath Temple\t\t\t'muktinath.txt'\n");
        printf("9. Pathivara Temple\t\t\t'pathivara.txt'\n");
        printf("10. Bindabasini Temple\t\t\t'bindabasini.txt'\n");
        printf("Type the filename that you are interested in.\n");
        printf("Press '100' to exit to the home page\n");
        scanf("%s",&choose1);


        system("cls");

        chose = fopen(choose1,"r");
        while (cc!=EOF)
            {
                cc = fgetc(chose);
                printf("%c",cc);

            }
            printf("\n\n");
    trekking:
        {
        system("cls");
        printf("\t\tLIST:\n");
        printf("Name of Place\t\t\tFile name\n");
        printf("1. Poonhill\t\t\t'poonhill.txt'\n");
        printf("2. Mustang\t\t\t'mustang.txt'\n");
        printf("3. Tilicho lake\t\t\t'tilicho.txt'\n");
        printf("4. Ghandruk\t\t\t'ghandruk.txt'\n");
        printf("5. Annapurna Base Camp\t\t\t\t'annapurna.txt'\n");
        printf("6. Sagarmatha Base Casmp\t\t\t'sagarmatha.txt'\n");
        printf("Type the filename that you are interested in.\n");
        printf("Press '100' to exit to the home page\n");
        scanf("%s",&choose2);
        system("cls");
        chose2 = fopen(choose2,"r");
        while (dd!=EOF)
            {
                cc = fgetc(chose2);
                printf("%c",dd);

            }
            printf("\n\n");
        }

    biology:
      {
        system("cls");
        printf("\t\tLIST:\n");
        printf("Name of Place\t\t\tFile name\n");
        printf("1. Chitwan NP\t\t\t'chitwan.txt'\n");
        printf("2. Shey Phoskundo NP\t\t\t'phoksundo.txt'\n");
        printf("3. Bardiya NP\t\t\t'bardiya.txt'\n");
        printf("4. Rara NP\t\t\t'rara.txt'\n");
        printf("5. Sagarmatha NP\t\t\t'sagarmathanp.txt'\n");
        printf("6. Pokhara\t\t\t\t'pokhara.txt'\n");
        printf("7. Kathmandu\t\t\t'kathmandu.txt'\n");
        printf("Type the filename that you are interested in.\n");
        printf("Press '100' to exit to the home page\n");
        scanf("%s",&choose3);
        system("cls");
        chose3 = fopen(choose3,"r");
        while (ee!=EOF)
            {
                cc = fgetc(chose3);
                printf("%c",ee);

            }
            printf("\n\n");
      }
    adventure:
        {
        system("cls");
        printf("\t\tLIST:\n");
        printf("Name of Place\t\t\tFile name\n");
        printf("1. Lakeside\t\t\t'lakeside.txt'\n");
        printf("2. Thamel\t\t\t'thamel.txt'\n");
        printf("3. Bhotekoshi\t\t\t'bhotekoshi.txt'\n");
        printf("4. Bungee\t\t\t'bungee.txt'\n");
        printf("5. Sarangkot\t\t\t'sarangkot.txt'\n");
        printf("Type the filename that you are interested in.\n");
        printf("Press '100' to exit to the home page\n");
        scanf("%s",&choose4);
        system("cls");
        chose4 = fopen(choose4,"r");
        while (ff!=EOF)
            {
                cc = fgetc(chose4);
                printf("%c",ff);

            }
            printf("\n\n");
          }
    national:
        {
        system("cls");
        printf("\t\tLIST:\n");
        printf("Name of Place\t\t\tFile name\n");
        printf("1. Narayanhiti\t\t\t'narayanhiti.txt'\n");
        printf("2. Bhaktapur DS\t\t\t'bhaktapur.txt'\n");
        printf("3. Hanumandhoka DS\t\t\t'hanumandhoka.txt'\n");
        printf("4. Patandhoka DS\t\t\t'patandhoka.txt'\n");
        printf("5. Gorkha Durbar\t\t\t'gorkha.txt'\n");
        printf("Type the filename that you are interested in.\n");
        printf("Press '100' to exit to the home page\n");
        scanf("%s",&choose5);
        system("cls");
        chose5 = fopen(choose5,"r");
        while (gg!=EOF)
            {
                cc = fgetc(chose5);
                printf("%c",gg);

            }
            printf("\n\n");
          }





}


