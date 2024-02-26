#include <stdio.h>

int main() {
    char inputString[100];

    printf("Masukkan sebuah string: ");
    fgets(inputString, sizeof(inputString), stdin);

    printf("Karakter unik dalam string adalah: ");

    // Loop untuk memproses setiap karakter dalam string
    for (int i = 0; inputString[i] != '\0'; i++) {
        // Cek apakah karakter sudah dicetak sebelumnya
        int isUnique = 1;
        for (int j = 0; j < i; j++) {
            if (inputString[i] == inputString[j]) {
                // Karakter sudah dicetak, tandai sebagai tidak unik
                isUnique = 0;
                break;
            }
        }

        // Cetak karakter jika karakter tersebut unik
        if (isUnique) {
            printf("%c", inputString[i]);
        }
    }

    return 0;
}