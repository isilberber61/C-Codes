#include <stdio.h>

 int main()
 {
 	    int para_miktari,ikiyuzluk_banknot,yuzluk_banknot,ellilik_banknot,yirmilik_banknot,onluk_banknot,kalan_tl;
      printf("Cekmek istediginiz para miktarini giriniz: \n");
      scanf("%d", &para_miktari);
   if(para_miktari % 10 ==0)
   {
   	ikiyuzluk_banknot = para_miktari /200;
    kalan_tl =  para_miktari % 200;
	
	yuzluk_banknot = kalan_tl/100;
	kalan_tl = kalan_tl % 100;
	
	ellilik_banknot = kalan_tl/50;
	kalan_tl = kalan_tl % 50;
	
	yirmilik_banknot = kalan_tl / 20;
	kalan_tl = kalan_tl % 20;
	
	onluk_banknot = kalan_tl /10;
	kalan_tl = kalan_tl % 10;
	
	printf("Bankamatik Cikisi\n");
	printf("%d adet 200 TL\n", ikiyuzluk_banknot);
	printf("%d adet 100 TL\n", yuzluk_banknot);
    printf("%d adet 50 TL\n", ellilik_banknot);
    printf("%d adet 20 TL\n", yirmilik_banknot);
    printf("%d adet 10 TL\n", onluk_banknot);
   }
        else
           printf("Girilen para miktari verilemiyor!!!");
           
           return 0;
 }
