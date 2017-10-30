#include <stdio.h>

int main(void)
{
	char cadena[100];
	int numero=0;
	int i,j=0;
	printf("Ingrese la palabra a analizar: ");
	scanf("%s",cadena);
	numero=strlen(cadena);
	for(i=0;i<((numero+1)/2);i++){
		numero--;
		printf("%c %c",cadena[i],cadena[numero]);
		if(cadena[i]!=cadena[numero]){
			j=1;
			break;
		}
	}
	if(j==1){
		printf("\nLa palabra no es un palindromo.");
	}else{
		printf("\nLa palabra es un palindromo.");
	}

        /*int variable = 10;
        int *puntero = &variable;
        *puntero = 10;
        printf("&variable : %p\n", &variable);
        printf("puntero   : %p\n", puntero);*/
        return 0;
}
