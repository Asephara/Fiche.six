#include <stdio.h>
int main(){
    float chiffre[]={22.3,14.7,18.9,2.4};
    int taille = sizeof (chiffre)/ sizeof(chiffre[0]);
    float somme=0;

 for (int i = 0; i < taille ; i ++) {
    somme += chiffre[i]; 
    } 

    float moyenne = somme/taille;
    printf("Moyenne: %2f\n", moyenne);

    return 0;

} 