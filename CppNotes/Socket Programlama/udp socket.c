#include <stdio.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <string.h>  // memset için

#define PORT 1453

int main(){

    int yol = socket(AF_INET, SOCK_STREAM, 0);

    // Veri yapısı ayarları
    struct sockaddr_in sunucu_bilgileri;
    memset(&sunucu_bilgileri, 0, sizeof(sunucu_bilgileri));  // Veri yapısını sıfırlama
    sunucu_bilgileri.sin_family = AF_INET;
    sunucu_bilgileri.sin_addr.s_addr = htonl(INADDR_ANY);  // veya inet_addr("127.0.0.1")
    sunucu_bilgileri.sin_port = htons(PORT);

    // Adres bağlama
    if( bind(yol, (struct sockaddr*)&sunucu_bilgileri, sizeof(sunucu_bilgileri)) < 0 ){
        fprintf(stderr, "Bağlama sırasında hata oluştu.");
        return 1;
    }

    fprintf(stderr, "Bağlama başarılı.");

    return 0;
}