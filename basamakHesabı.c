#include <stdio.h>
int main()
{    
    int sayi, gecici, sonuc=0, kalan, sayac=1, basamak, kontrol = 0;
 
    printf("Sayi Giriniz: ");
    scanf("%d", &sayi);
    printf("Bulmak istedigini basamak degeri\n(1, 10, 100, 1000 vs seklinde girilmesi gerekli): ");
    scanf("%d", &basamak);

    if( (basamak % 10 == 0 || basamak == 1) && sayi >= 0)
	{
        gecici=sayi;
        
        if(gecici==0 && basamak==1){
            printf("%d", gecici);
            kontrol=1;
            sayac*=10;
        }      
        while ( gecici > 0 )
		{
            kalan = gecici % 10;
            gecici /= 10;    
        
            if(sayac==basamak){
                printf("%d", kalan);
                kontrol = 1;
                break;
            }       
            sayac *= 10;
        }
        sayac /= 10;
    }   
    else
	{
        if(sayi < 0)
        printf("Lutfen 0 ya da pozitif bir sayi giriniz!!!");
        printf("Basamak degerini 1, 10, 100, 1000 vs seklinde olmasi gerekli!!!");
        getch();
        return 0;
    }   
    if(sayac < basamak && kontrol == 0)
    printf("Aradiginiz Basamak Bulunamadi!!!");
    getch();   
    return 0; 
}
