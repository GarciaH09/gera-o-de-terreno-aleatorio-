// Online C compiler to run C program online
#include <stdio.h>
#define LINHAS 8
#define COLUNAS 9
void iniciar_mapa(char mapa[LINHAS][COLUNAS]){
    int i , j ; 
    for( i = 0 ; i<LINHAS ;i++){
        for(j = 0 ; j <COLUNAS ; j++){
            if(i == 0 || i == LINHAS -1 ){
                mapa[i][j] = '-';
                }
            else if(j ==0 || j == COLUNAS -1 ){
                mapa[i][j] = '|';
                }
            else{
                mapa[i][j] ='*';
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
int main() {
char mapa[LINHAS][COLUNAS];
iniciar_mapa(mapa);
desenhar_mapa(mapa);
    return 0;
}