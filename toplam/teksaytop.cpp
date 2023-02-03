#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* klavyeden girilen 10 adet pozitif tam sayýdan tek olanlarýnýn toplamini alan program */

int main() {
	int i, sayi, top=0, ort=0;
	
	for (i=1; i<=10; i++){
		
		if(sayi % 2 == 1)
		top= top + sayi;
		
		printf(" %d. sayiyi giriniz:\n",i);
		scanf("%d", &sayi);
	}
	ort=top/10;
	
	printf("\ngirilen tek sayilarin toplami: %d", top);
	

	
	
	
	
	return 0;
}
