#include<stdio.h>
#include<locale.h>

main(){
	
	setlocale(LC_ALL,"");
	
	//c�digo feito utilizando regra de tr�s para  chegar ao valor do real investido
	//depois multiplico o valor inserido pelo usu�rio pelo n�mero de visualiza��es 
	//fiz um if para o caso do usu�rio fizer um investimento inferior a 1 real.
	
	float V,Visu;
	printf("Informe o valor em reais para saber o m�ximo de visualiza��es que o an�cio receber�\n");
	scanf("%f",&V);
	Visu=(V*199.8);
		if(V<=1);
		printf("O resultado � : %.2f",Visu);
		
}
