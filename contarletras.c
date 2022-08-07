#include<stdio.h>
#include<string.h>

int main(void)
{
 char nome[40];
 int cont=0;
 printf("\t digite um nome\n");
 fgets(nome,40,stdin);
 cont=strlen(nome)-1;
 printf("\t este nome possui %d letras\n",cont);



return 0;
}
