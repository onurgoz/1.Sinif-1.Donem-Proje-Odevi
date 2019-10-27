#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int i,m,b,j=0,a,plaka,kontenjan,topkontenjan=0,partisayi,oysayisi[81],toplam_oy[100],kopya_oy[100],geneloytop,millet_vekili[100][100],toplam_milletv[100],toplam_milletv_0[100],kopya_millet_vekili[100],il_birincisi[100],buyuk_oy=0,aktarici,aktarici2;
char harf[100],aktarici1,kopya_harf[100];
float iloysayi[81];
int sayi=65;
int main()
{
    printf("Secime katilan parti sayisini giriniz:");
    scanf("%d",&partisayi);
    ilgirdi();
}

void ilgirdi()
{
    do
    {
        sayi=65;
        printf("Ilin plaka kodunu giriniz:");
        scanf("%d",&plaka);
        if(plaka==0)
        break;
        printf("Ilin milletvekili kontenjanini giriniz:");
        scanf("%d",&kontenjan);
        topkontenjan+=kontenjan;
            for(i=0;i<partisayi;i++)
            {
            harf[i]=sayi;
            printf("%c Partisinin Oyunu Giriniz : ",harf[i]);
            scanf("%d",&oysayisi[i]);
            toplam_oy[i]+=oysayisi[i];
            geneloytop+=oysayisi[i];
            iloysayi[a]+=oysayisi[i];
            sayi++;
            }
        kopyalama(oysayisi,kopya_oy);
        kopya_isim();
        kopyalama(millet_vekili,kopya_millet_vekili);
        siralama(kopya_oy,kopya_harf,kopya_millet_vekili);
        kopyalama(oysayisi,kopya_oy);
        millet_vekili_hesapla();
        siralama(oysayisi,harf,kontenjan);

    printf("Il Plaka Kodu:%d\nMilletvekili Kontenjani:%d\nGecerli Oy Sayisi:%.0f\n",plaka,kontenjan,iloysayi[a]);
        printf("\t\tOy Say  Oy Yuzde  MV Say\n");
        printf("\t\t------  --------  ------\n");
    for(i=0;i<=partisayi-1;i++)
    {
        printf("%c Partisi\t%d\t%.2f\t   %d\n",harf[i],oysayisi[i],((oysayisi[i]/iloysayi[a])*100),millet_vekili[a][i]);
    }
    printf("Devam etmek icin bir tusa basiniz ... \n");
    getch();
    a++;
    }while(plaka!=0);
    printf("\nTurkiye Geneli\n");
            printf("Milletvekili Kontejani: %d\n", topkontenjan);
            printf("Gecerli Oy Sayisi: %d\n\n", geneloytop);
            printf("\t\t    Oy Say  Oy Yuzde  MV Say  MV Yuzde  \n");
            printf("\t\t    ------  --------  ------  --------  \n");
            for(i=0;i<partisayi;i++)
            {
                sayi=65;
            printf("%c Partisi\t\t%d\t%d\t%d\t%.2f\n",sayi+i,toplam_oy[i],(toplam_oy[i]/geneloytop)*100,toplam_milletv[i],(toplam_milletv[i]/topkontenjan)*100);
            }

}
void kopya_isim()
{
    for(i=0;i<partisayi;i++)
        kopya_harf[i]=harf[i];

}
void kopyalama(int asil[],int kopya[])
{
    for(i=0;i<partisayi;i++)
        kopya[i]=asil[i];
}
void millet_vekili_hesapla()
{

    m=kontenjan;
    while(m>0){
			for(i=0; i<partisayi; i++){
				if (kopya_oy[i]>buyuk_oy){
					buyuk_oy=kopya_oy[i];
					b=i;
				}
}
			kopya_oy[b]=kopya_oy[b]/2;
			buyuk_oy=kopya_oy[b];
			millet_vekili[a][b]+=1;
			toplam_milletv[b]+=millet_vekili[a][b];
			m--;
		}

}
void siralama(int oy[], char c[], int mv_sayi[])
{

        for(i=0;i<partisayi-1;i++)
        {
            for(j=0;j<partisayi-1;j++)
            {
                if(oysayisi[j]<oysayisi[j+1])
                {
                    aktarici=millet_vekili[a][j+1];
                    millet_vekili[a][j+1]=millet_vekili[a][j];
                    millet_vekili[a][j]=aktarici;
                    aktarici1=c[j+1];
                    c[j+1]=c[j];
                    c[j]=aktarici1;
                    aktarici2=oy[j];
                    oy[j]=oy[j+1];
                    oy[j+1]=aktarici2;

                }
            }
        }

}

