#include <stdio.h> 
//C Programlama Dili'nde giriş ve çıkış işlemleri, stdio.h başlık dosyasında yer alan C standart giriş ve çıkış kütüphanesindeki fonksiyon, değişken, sabit ve diğer değerler kullanılarak yapılır. Bu kitaplık, klavyeler, yazıcılar, terminaller gibi fiziksel aygıtlarla veya sistem tarafından desteklenen diğer dosya türleriyle çalışmak için akış adı verilenleri kullanır. printf ve benzeri fonksiyonları kullanabilmek içi stdio.h kütüphanesi gereklidir.
#include <cs50.h>
//get_string, get_int, get_float gibi girdi isteyen CS50 fonksiyonlarını kullanmak için cs50.h kütüphanesine ihtiyaç vardır. 

int main (void)
{
    string name = get_string("What is your name?\n"); 
    //String tipinde 'name' değişkeni oluşturuldu ve kullanıcıdan alınan girdi sonucu            'name' değişkenine atandı.
    printf("Hello %s!\n", name);
    //Kullanıcının girdisiyle oluşturulan 'name' değişkeni kullanılarak ekranda kullanıcıya       Hello 'name' mesajı döndürüldü.
}
