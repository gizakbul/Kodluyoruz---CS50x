#include <stdio.h>
#include <cs50.h>

void piramit_olustur(int yukseklik);

int main (void)
{
  bool kontrol = false;
  //girilen numarayi kontrol etmek icin ilk once numaranin yanlis oldugu varsayilir.
 
  int yukseklik;
  //kullanıcıdan alınacak yukseklik değerini atamak için kullanılır.
  
  do{
     yukseklik = get_int("Yükseklik(1-8 arasi): "); 
     //cs50.h kutuphanesi kullanarak kullanicidan sayi istemek uzere get_int fonskiyonu kullanilir.
     
     if (yukseklik <= 8 && yukseklik>=1) 
     //yuksekliğin 1-8 arasinda olmasini kontrol eder.
     {
     
       kontrol = true;
       //girilen numara 1-8 aralığında ise kontrol değişkeni true değer döndürür.
       
     }
  }while(kontrol == false);//Girilen değer 1-8 den farklı ise kontrol değişkeni false değer döndürmeye devam eder.
  
  
  piramit_olustur(yukseklik);
  //kontrol işlemlerinin başarılı olması (1-8 aralığında olması) durumunda fonksiyon çağrılır ve istenilen piramit oluşturulur.
}
void piramit_olustur(int yukseklik)
{
  int i, j;
  //dongulerde kullanilmak uzere tanimlandi.
  
  int tmp = yukseklik-1;
  //tmp (belirleyici) # yerine boslugun yazdirilacagi yeri belirlenmek icin kullanilacak. Sadece bosluklardan olusacak bir satirin olmayacagindan "yukseklik-1" degerine esitliyoruz.
  
  for(i= 0; i<yukseklik; i++)
  {
    for(j=0; j<yukseklik; j++)
    {
      if(j<tmp)
        printf(" ");
        //eger tmp j'den buyukse bosluk yazdir.
        
      else
      //aksi takdirde # yazdir.
        printf("#");
    }
    printf("\n");
    
    tmp--;
    //yukseklik sinir olmak uzere j 0'dan yukseklik'e büyüdükçe tmp azaltılır. Böylece saga egimli bir piramit sekli ekrana yazdirilir.
  }
}
