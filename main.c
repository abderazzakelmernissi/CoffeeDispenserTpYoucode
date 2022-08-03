#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choix,sucre,lait;
    float prix;
    //char textBoisson[50];
    //char textSucre[50];
    //char textLait[50];

    do{
    printf("Bienvenu!\n");
    printf("Veuillez choisir un boisson\n");
    printf("*********************************\n");
    printf("Pour choisir un cafe saisir 1\n");
    printf("Pour choisir un The saisir 2\n");
    printf("Pour choisir un Chocolat saisir 3\n");
    printf("Pour choisir un Soda saisir 4\n");
    printf("*********************************\n");
    scanf("%d",&choix);
    }while(choix >=1 || choix < 5);


    switch (choix)
    {
        case 1 :prix = 2;
               // textBoisson[50] ="Cafe";
                printf("Saisir la dose du sucre\n");
                printf("0 sans sucre, 1 sucre, 2 tres sucre\n");
                scanf("%d", &sucre);
                if(sucre == 1){
                    prix = prix + 0.25;
                    //textSucre[50] = "Sucre";
                }
                else if(sucre == 2){
                    prix = prix + 0.50;
                  //  textSucre[50] = "tres Sucre";
                }
                else if (sucre == 0){
                    prix = prix + 0;
                  //  textSucre[50] = "Non sucré";
                }
                printf("tape 1 pour lait supplementaire ou 0 sans lait\n");
                scanf("%d",&lait);
                if(lait == 1)
                {
                    //prix = prix +1;
                    prix += 1;
                   // textLait[50] = "avec lait";
                }
                else if(lait == 0){
                   // textLait[50] = "sans lait";
                }
                printf("Vous devez payer %f DH\n", prix);
             //   printf("Votre %s est est pret",textLait[50]);

        break;

        case 2 :prix = 2;
                printf("Saisir la dose du sucre\n");
                printf("0 sans sucre, 1 sucre, 2 tres sucre\n");
                scanf("%d", &sucre);
                if(sucre == 1){
                    prix = prix + 0.25;
                }
                else if(sucre == 2){
                    prix = prix + 0.50;
                }
                else if (sucre == 0){
                    prix = prix + 0;
                }
                printf("Vous devez payer %f DH", prix);

        break;

        case 3 :prix = 2.5;
                printf("Saisir la dose du sucre\n");
                printf("0 sans sucre, 1 sucre, 2 tres sucre\n");
                scanf("%d", &sucre);
                if(sucre == 1){
                    prix = prix + 0.25;
                }
                else if(sucre == 2){
                    prix = prix + 0.50;
                }
                else if (sucre == 0){
                    prix = prix + 0;
                }
                printf("tape 1 pour lait supplementaire ou 0 sans lait\n");
                scanf("%d",&lait);
                if(lait == 1)
                {
                    //prix = prix +1;
                    prix += 1;
                }
                else if(lait == 0){

                }
                printf("Vous devez payer %f DH", prix);

        break;

        case 4 :prix = 3;
                printf("Vous devez payer %f DH", prix);

        break;

        default : printf("error");
    }


    return 0;
}
