#include <stdio.h>
#include <string.h>

main(){
	
	int dizi[5] = {15,25,35,45,55};
	int sayi;
	
	printf("Sayiyi giriniz: ");
	scanf("%d",&sayi);
	
	for(int i = 0; i <= 5; i++)
	{
		if(sayi == dizi[i])
		{
			printf("Girdiginiz sayi %d. siradadir.", i+1);
		}
	}
}
