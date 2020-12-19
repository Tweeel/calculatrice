#include<stdio.h>
#include<stdlib.h>

int main()
{
    double Somme,Produit,Moyenne,Minimum,Maximum,a,b;
    int c;
    printf("entrer la valeur de a : ");
    scanf("%lf",&a);
    printf("entrer la valeur de b : ");
    scanf("%lf",&b);
    Somme=a+b;
    Produit=a*b;
    Moyenne=(a+b)/2;
    printf("\n**************** MENU *******************");
    printf("\n1 . ----------> Somme  ------------------");
    printf("\n2 . ----------> Produit  ----------------");
    printf("\n3 . ----------> Moyenne  ----------------");
    printf("\n4 . ----------> Minimum  ----------------");
    printf("\n5 . ----------> Maximum  ----------------");
    printf("\nje veut la : ");
    scanf("%d",&c);
    switch(c)
    {
        case 1: printf("la somme = %lf",Somme);
            break;
        case 2: printf("le produit = %lf",Produit);
            break;
        case 3: printf("la moyenne = %lf",Moyenne);
            break;
        case 4:
            if(a>b)
                printf("le Minimum est : %lf",b);
            else
                printf("le Minimum est : %lf",a);

            break;
         case 5:
            if(a>b)
                printf("le Maximum est : %lf",a);
            else
                printf("le Maximum est : %lf",b);
            break;
    }


    return 0;
}

