//Este programa informa o antecessor, e tamb�m o sucessor do n�mero solicitado pelo usu�rio!
#include<stdio.h>
#include<math.h>
#include<locale.h>
int main(){
	setlocale (LC_ALL, "portuguese");
	int n; 
	printf ("Digite o n�mero:\n ");
scanf ("%i", &n);
printf ("O antecessor �: %i e o sucessor �: %i\n", n-1, n+1);	
	return (0);
}
