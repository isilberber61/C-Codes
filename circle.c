#include <stdio.h>

#define PI  3.14

int main()
  {
  	int secilen_islem,yaricap;
    float daire_alan,daire_cevre;
   printf("Lutfen bir yaricap uzunlugu giriniz: ");
   scanf("%d",&yaricap);
   
   printf("Girdiginiz sayilarla yapmak istediginiz islemi seciniz: \n");
   printf("1. Daire Cevresi: \n");
   printf("2. Daire Alani \n");
   
   scanf("%d",&secilen_islem);
   
   if(secilen_islem==1){
   	printf("Dairenin cevresi %f dir.", 2 * PI * yaricap );
    }
     else if(secilen_islem == 2){
     	printf("Dairenin alani %f dir.", PI * (yaricap^2) );
    }
    
   else{
   	    printf("Yanlis secim yapmtiniz!!!!");
   }
   
   return 0;
  }
