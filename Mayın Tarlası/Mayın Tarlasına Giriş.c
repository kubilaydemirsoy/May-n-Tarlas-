#include <stdio.h>
#include <stdlib.h>

#define TAILLE_TABLEAU 8
#define NORMALE 7
#define GAGNER 1
#define PERDU -1
#define CONTINUE 0


int soustab[TAILLE_TABLEAU+2][TAILLE_TABLEAU+2];
char tab[TAILLE_TABLEAU+2][TAILLE_TABLEAU+2];





void creer_soustableau();
void initialiser_tableau();
void afficher_soustableau();
void afficher_tableau();
void placer_mines();
void verifiermatchgagner();
void explorer();
int creuser(int ligne,int colonne);






int main()
{
    printf("Mayin Tarlasi oyunumuza hosgeldiniz\n");
    creer_soustableau();
    initialiser_tableau();
     afficher_tableau();
    return 0;
}

void creer_soustableau()
{
    int i,j,nb_mine;

    for(i=0;i<=TAILLE_TABLEAU+1;i++)
    {

        for(j=0;j<=TAILLE_TABLEAU+1;j++)
        {
            soustab[i][j]=0;
        }

    }

    for(i=0;i<=TAILLE_TABLEAU+1;i++)
    {
        soustab[i][0]=1;
        soustab[i][TAILLE_TABLEAU+1]=1;
    }
    for(j=0;j<=TAILLE_TABLEAU;j++)
    {
        soustab[0][j]=1;
        soustab[TAILLE_TABLEAU+1][j]=1;
    }
    nb_mine=NORMALE;
}


void initialiser_tableau()
{
     int i,j;

    for(i=0;i<=TAILLE_TABLEAU+1;i++)
    {

        for(j=0;j<=TAILLE_TABLEAU+1;j++)
        {
            tab[i][j]='#';
        }

    }

    for(i=0;i<=TAILLE_TABLEAU+1;i++)
    {
        tab[i][0]='*';
        tab[i][TAILLE_TABLEAU+1]='*';
    }
    for(j=0;j<=TAILLE_TABLEAU;j++)
    {
        tab[0][j]='*';
        tab[TAILLE_TABLEAU+1][j]='*';
    }

}


void afficher_tableau()
{
    int i,j;

    printf("\n");

    for(i=1;i<=TAILLE_TABLEAU;i++)
    {
        printf("%3d",i);
    }
    printf("\n");

    for(i=1;i<=TAILLE_TABLEAU;i++)
    {
        for(j=1;j<=TAILLE_TABLEAU;j++)
        {

            printf("%3c",tab[i][j]);
        }
        printf("  |%d",i);
        printf("\n");
    }

    for(i=1;i<=TAILLE_TABLEAU;i++)
        printf("---");


}

