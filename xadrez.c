#include <stdio.h>

int main(){
   //Declara os valores de torre, bispo e rainha
   int torre = 5, bispo = 5, rainha = 8, cavalo = 2, i, j;
   
   //Torre (usando "for")
   printf("Movimento da torre:\n");
   for (i = 1; i <= torre; i++) {
       printf("Direita...\n");
   }
   //Pula a linha para separar as peças :
   printf("\n");
   
   //Bispo (usando "while")
   printf("Movimento do bispo:\n");
   i = 1;
   while (i <= bispo) {
       printf("Cima, esquerda...\n");
       
       i++;
   }
   //Pula a linha para separar as peças :
   printf("\n");
   
   //Rainha (usando "do-while")
   printf("Movimento da rainha:\n");
   i = 1;
   do {
       printf("Esquerda...\n");
       i++;
   }
   while (i <= rainha);
   
   //Pula a linha para separar as peças :
   printf("\n");
  
   //Cavalo (usando "loop/while")

   printf("Movimento do cavalo:\n");
   for( i = 1; i <= cavalo; i++ ) {
    for ( j = 1; j <= cavalo; j++ ) {
        printf("Cima...\n");
    }
    while( i < cavalo) {
        printf("Direita...\n");
        i++;
    }
    //Pula a linha para separar as peças :
    printf("\n");
   } 
   
   return 0;
}
