#include <stdio.h>

int main() {

    char p1[20], p2[20], p3[20];

    scanf("%s", &p1);
    scanf("%s", &p2);
    scanf("%s", &p3);

    if(!strcmp(p1,"vertebrado")){
        if(!strcmp(p2,"ave")){
            if(!strcmp(p3,"carnivoro")) printf("aguia\n");
            else if(!strcmp(p3,"onivoro")) printf("pomba\n");
        }
        else if(!strcmp(p2,"mamifero")){
            if(!strcmp(p3,"onivoro")) printf("homem\n");
            else if(!strcmp(p3,"herbivoro")) printf("vaca\n");
        }
    }
    else if(!strcmp(p1,"invertebrado")){
        if(!strcmp(p2,"inseto")){
            if(!strcmp(p3,"hematofago")) printf("pulga\n");
            else if(!strcmp(p3,"herbivoro")) printf("lagarta\n");
        }
        else if(!strcmp(p2,"anelideo")){
            if(!strcmp(p3,"hematofago")) printf("sanguessuga\n");
            else if(!strcmp(p3,"onivoro")) printf("minhoca\n");
        }
    }
    return 0;
}
