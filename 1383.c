 #include <stdio.h>


int main() {
    int mTabuleiro[9][9];
    int n,ni, lin, col, aux, aux2, aux3=0, quad, mAux[1000], mAux2[3][3], result;
    //le o numero de matrizes.
    scanf("%d", &n);
    aux3 = n;
    //cria um loop para comparar as respostas do sudoku.
    while(n>0){
    result=1;
    //Lê as respostas do sudoku.
    for(lin=0; lin <= 8; lin++){
        for(col=0; col <= 8; col++){
            scanf("%d", &mTabuleiro[col][lin]);
        }
    }
    //Compara todos os numeros de todas as linhas.
        for(lin=0; lin<=8; lin++ ){
            for(col=0; col<=8; col++){
                for(aux=col+1; aux<=8; aux++){
                    if(mTabuleiro[aux][lin]== mTabuleiro[col][lin]) result=0;
                }
            }
        }
    //Compara todos os numeros de todas as colunas.
        for(col=0; col<=8; col++){
            for(lin=0; lin<=8; lin++){
                for(aux=lin+1; aux<=8; aux++){
                    if(mTabuleiro[col][aux]== mTabuleiro[col][lin]) result=0;
                }
            }
        }

    //Inicia a matriz auxiliar.
    for(lin=0; lin<3; lin++){
            for(col=0; col<3; col++){
                mAux2[lin][col]=0;
            }
        }
   //Armazena a soma dos quadrados de cada setor da matriz 9x9 na mariz auxiliar 3x3.
       for(lin=0; lin<9; lin++){
            for(col=0; col<9; col++){
                quad=mTabuleiro[lin][col]*mTabuleiro[lin][col];
                mAux2[lin/3][col/3]=mAux2[lin/3][col/3]+quad;
            }
       }
   //Verifica se todos os valores armazenados na matriz auxiliar são iguias a 255.
       for(lin=0; lin<3; lin++){
            for(col=0; col<3; col++){
                if(mAux2[lin][col] != 285)result=0;
                }
            }
    //armazena a resposta em uma matriz.
    mAux[n]=result;
    n--;
    }

   //Imprime os resultados
    for(ni=1,n=aux3; n>0; n--,ni++){
        printf("Instancia %d\n",ni);
       if(mAux[n]!=0) printf("SIM\n\n");
    else printf("NAO\n\n");
    }

    return 0;
}
