// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>  // Aqui moram o rand() e o srand()
#include <time.h>    // Aqui mora o time(NULL)
#define LINHAS 8
#define COLUNAS 9
typedef struct {
    int vida ;
    int dano ;
 //  char letra[2];
}criatura ;
void iniciar_mapa(char mapa[LINHAS][COLUNAS]){
    int i , j ; 
    for( i = 0 ; i<LINHAS ;i++){
        for(j = 0 ; j <COLUNAS ; j++){
             mapa[i][j] = '*'; 
          if(1<2){
                mapa[i][0] = '|';
                 // PISO
                 if(mapa[i][j]=='*'){
                     mapa[i][j] ='_' ;
                 }
                 mapa[i][COLUNAS-1] = '|';
            }
        }
    }
}
void desenhar_mapa(char mapa[LINHAS][COLUNAS]){
    int i , j ; 
    for( i = 0 ; i<LINHAS ;i++){
        for(j = 0 ; j <COLUNAS ; j++){
             printf("%c ",mapa[i][j]);
            }
            printf("\n");
        }
    };
void s_criatura(criatura *lobo){
    lobo->vida == 2 ;
    lobo->dano == 3 ;
    //lobo->letra == "L";
}
void spaw(int x , int y,char mapa[LINHAS][COLUNAS]){
    if (x > 0 && x < LINHAS - 1 && y > 0 && y < COLUNAS - 1) {
        mapa[x][y] = 'L'; 
    }
    else{
        printf("Nenhum animal foi encontrado \n");
    };
    printf("%d %d\n",x,y);
}
void mais_criaturas(char mapa[LINHAS][COLUNAS],int x,int y){
    for(int i = 0 ; i< 5; i++){
        x +=1 ; y +=1 ;
        if (x > 0 && x < LINHAS - 1 && y > 0 && y < COLUNAS - 1) {
            mapa[x][y] = 'L'; 
         }
    }
    desenhar_mapa(mapa);
}
int main() {
// SPAW 
 criatura lobo ;
 s_criatura(&lobo);
srand(time(NULL));
int x = rand()%LINHAS ;
int y = rand()%COLUNAS ;
///MAPA 
char mapa[LINHAS][COLUNAS];
iniciar_mapa(mapa);
spaw(x,y,mapa);
//desenhar_mapa(mapa);
mais_criaturas(mapa,x,y);

    return 0;
}
