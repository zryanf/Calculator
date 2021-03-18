#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int soma(int n1,int n2){
    int somar;
    somar=n1+n2;
    return somar;
}
int subtrai(int n1, int n2){
    int subtrair;
    subtrair= n1-n2;
    return subtrair;
}
int multiplica(int n1, int n2){
    int multiplicar;
    multiplicar = n1*n2;
    return multiplicar;
}
int dividi(int n1, int n2){
    int dividir;
    dividir = n1/n2;
    return dividir;
}
int raiz(int n1){
    int raizar;
    raizar=sqrt(n1);
    return raizar;
}
int main(){
    int num, vamemo;
    int v1, v2;
    int res;
    char loop = 's';
    while (loop == 's')
    {
    printf("1 : Adicao\n");
    printf("2 : Subtracao\n");
    printf("3 : Multiplicacao\n");
    printf("4 : Divisao\n");
    printf("5 : Raiz Quadrada\n");
    printf("Escolha uma opcao acima e digite o numero: ");
    scanf("%d",&num);
    if(num==1){
        printf("Digite o um valor: ");
        scanf("%d",&v1);
        printf("Digite outro valor: ");
        scanf("%d",&v2);
        res = soma(v1,v2);
        printf("Resultado: %d \n",res);
    }
    else if(num==2){
        printf("Digite o um valor: ");
        scanf("%d",&v1);
        printf("Digite outro valor: ");
        scanf("%d",&v2);
        res = subtrai(v1,v2);
        printf("Resultado: %d \n",res);
    }
    else if (num==3){
        printf("Digite o um valor: ");
        scanf("%d",&v1);
        printf("Digite outro valor: ");
        scanf("%d",&v2);
        res = multiplica(v1,v2);
        printf("Resultado: %d \n",res);
    }
    else if(num==4){
        printf("Digite o um valor: ");
        scanf("%d",&v1);
        printf("Digite outro valor: ");
        scanf("%d",&v2);
        if (v2 == 0 )
        {
            printf("Nao pode ser dividido\n");
            printf("Deseja continuar calculando, sim(s) ou nao(n):");
            scanf(" %c",&loop);
            continue;
        }
        else{
            res = dividi(v1,v2);
            printf("Resultado: %d\n %.3f ",res);
        }
    }
    else if(num==5){
        printf("Digite o um valor: ");
        scanf("%d",&v1);
        if (v1 <= 0)
        {
            printf("Nao existe valor para essa raiz\n");
            printf("Deseja continuar calculando, sim(s) ou nao(n):");
            scanf(" %c",&loop);
            continue;
        }
        else{
            res = raiz(v1);
            printf("Resultado: %d\n ",res);
        }
    }
printf("Adicionar resultado da memoria: 1\n");
printf("Subtrair resultado da memoria: 2\n");
printf("Nao alterar memoria: 3\n");
scanf("%d",&vamemo);
int memoria = 0;
if(vamemo==1){
    res = res + memoria;
    memoria = res;
}
else if(vamemo==2) {
    res = res - memoria;
    memoria = res;
}
printf("Deseja continuar calculando, sim(s) ou nao(n):");
scanf(" %c",&loop);
if(loop == 'n'){
printf("Valor memoria:%d ",memoria);
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf(" Copyright © Ryan Ferreira Maciel");
}
}
    return 0;
}
