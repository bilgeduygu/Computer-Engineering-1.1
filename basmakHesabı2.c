#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
int i;
int sayi;
int onbinler,binler,yuzler,onlar,birler;
printf("5 Basamakli bir Sayi giriniz :");
scanf("%d",&sayi);
if(sayi>=10000 && sayi<=99999)
{
/*Diyelim ki sayimiz 12345 . Birler basamagýný bulmak için sayimizi ilk o
larak sayimizi 10000 e bölmemiz gerekecek*/
onbinler=sayi/10000;  // Burada on binler basamagýný bulduk.
/** Þimdi sayýnýn binler basamagýný bulalým */
sayi=sayi-(onbinler*10000);  // 12345-1000=2345 gibi bir sonuc bulduk 
binler=sayi/1000;  // Sonuc olarak (12345-1000)/1000 = 2 ;
// Þimdi unutmmanýz gereken sayýmýz artýk 12345 deðil 2345 tir ;) 
sayi=sayi-(binler*1000);  //  2345-(2*100) =  345  kaldý  
yuzler=sayi/100;  // 345/100 = 3 
// Artýk sayýmýz 345   onlar basamagýný bulmak için
sayi=sayi-(yuzler*100); // 345-(3*100) = 45
onlar=sayi/10;     // 45 / 10 =4 
// Þimdi sayinin birler basamagýný yazdýralim.
sayi=sayi-(onlar*10);  //45-40 = 5
birler=sayi;
printf("%d\t%d\t%d\t%d\t%d\n",onbinler,binler,yuzler,onlar,birler);
}
else
printf("Girdigin Sayinin 5 basamakli olduguna emin misin ? --->  :) \n");
system("PAUSE");   
}
