 #include <stdio.h>
 #include <stdlib.h>


int main() {
    int mTabuleiro[9][9];
    int n,ni, lin, col, aux, aux2, aux3=0, quad, mAux[n], mAux2[3][3], result=1;
    scanf("%d", &n);
    aux3 = n;


    while(n>0){
    for(lin=0; lin <= 8; lin++){
        for(col=0; col <= 8; col++){
            scanf("%d", &mTabuleiro[col][lin]);
        }
    }
        for(lin=0; lin<=8; lin++ ){
            for(col=0; col<=8; col++){
                for(aux=col+1; aux<=8; aux++){
                    if(mTabuleiro[aux][lin]== mTabuleiro[col][lin]) result=0;
                }
            }
        }

        for(col=0; col<=8; col++){
            for(lin=0; lin<=8; lin++){
                for(aux=lin+1; aux<=8; aux++){
                    if(mTabuleiro[col][aux]== mTabuleiro[col][lin]) result=0;
                }
            }
        }


    for(lin=0; lin<3; lin++){
            for(col=0; col<3; col++){
                mAux2[lin][col]=0;
            }
        }

       for(lin=0; lin<9; lin++){
            for(col=0; col<9; col++){
                quad=mTabuleiro[lin][col]*mTabuleiro[lin][col];
                mAux2[lin/3][col/3]=mAux2[lin/3][col/3]+quad;
            }
       }
       for(lin=0; lin<3; lin++){
            for(col=0; col<3; col++){
                if(mAux2[lin][col] != 285)result=0;
                }
            }


        if(result==1) mAux[n]=1;
    else mAux[n]=0;
    n--;
    }


    for(ni=1,n=aux3; n>0; n--,ni++){
        printf("Instancia %d\n",ni);
       if(mAux[n]!=0) printf("SIM\n\n");
    else printf("NAO\n\n");
    }

    return 0;
}
