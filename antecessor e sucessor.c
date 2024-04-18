//Este programa informa o antecessor, e também o sucessor do número solicitado pelo usuário!
#include<stdio.h>
#include<math.h>
#include<locale.h>
int main(){
	setlocale (LC_ALL, "portuguese");
	int n; 
	printf ("Digite o número:\n ");
scanf ("%i", &n);
printf ("O antecessor é: %i e o sucessor é: %i\n", n-1, n+1);	
	return (0);
}
