#include <stdio.h>

int main(){
    float notes []= {13.5, 21.3 , 67.9 , 97.4 ,47.5};
    int taille = sizeof(notes)/sizeof(notes [0]);
    float somme = 0;

    for (int i = 0; i<taille; i++){
        somme+= notes  [i];
    }
    float moyenne = somme/taille;
    printf("Moyenne: %2f\n", moyenne);
    return 0;
}