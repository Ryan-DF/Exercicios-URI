#include <stdio.h>
#include <string.h>

int main() {

    char mRisadas[51], sAux[51]="", sAux2[51]="";
    int iAux;
    scanf("%s", &mRisadas);

    for(iAux=strlen(mRisadas); iAux > -1; iAux--){
        if(mRisadas[iAux] == 'a') {
                strcat(sAux,"a");
                }
        else if(mRisadas[iAux] == 'e') {
                strcat(sAux,"e");
                }
        else if(mRisadas[iAux] == 'i') {
                strcat(sAux,"i");
                }
        else if(mRisadas[iAux] == 'o') {
                strcat(sAux,"o");
                }
        else if(mRisadas[iAux] == 'u') {
                strcat(sAux,"u");
                }
    }
    for(iAux = 0; iAux <= strlen(mRisadas); iAux++){
        if(mRisadas[iAux] == 'a') {
                strcat(sAux2,"a");
                }
        else if(mRisadas[iAux] == 'e') {
                strcat(sAux2,"e");
                }
        else if(mRisadas[iAux] == 'i') {
                strcat(sAux2,"i");
                }
        else if(mRisadas[iAux] == 'o') {
                strcat(sAux2,"o");
                }
        else if(mRisadas[iAux] == 'u') {
                strcat(sAux2,"u");
                }
    }
    if(!strcmp(sAux2,sAux)) printf("S\n");
    else printf("N\n");
    return 0;
}
