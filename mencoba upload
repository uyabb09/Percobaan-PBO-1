#include <stdio.h>

///Muhammad Bayu Aji Bagaskara///

enum Makanan {
    NasiGoreng = 50000,
    MieGoreng = 45000,
    AyamGoreng = 65000,
    
};

enum Minuman {
    AirMineral = 13000,
    EsTeh = 15000,
    JusJeruk = 20000,
    
};

int main() {
    printf("===== Rumah Makan =====\n");
    printf("Menu Makanan:\n");
    printf("1. Nasi Goreng\tRp. %d\n", NasiGoreng);
    printf("2. Mie Goreng\tRp. %d\n", MieGoreng);
    printf("3. Ayam Goreng\tRp. %d\n", AyamGoreng);
	
    int pilihanMakanan;
    printf("Pilih menu makanan (1-3): ");
    scanf("%d", &pilihanMakanan);

    printf("Menu Minuman:\n");
    printf("1. Air Mineral\tRp. %d\n", AirMineral);
    printf("2. Es Teh\tRp. %d\n", EsTeh);
    printf("3. Jus Jeruk\tRp. %d\n", JusJeruk);
    
    int pilihanMinuman;
    printf("Pilih menu minuman (1-3): ");
    scanf("%d", &pilihanMinuman);

    int totalHarga = 0;
    totalHarga += (pilihanMakanan == 1) ? NasiGoreng : (pilihanMakanan == 2) ? MieGoreng : (pilihanMakanan == 3) ? AyamGoreng;
    totalHarga += (pilihanMinuman == 1) ? AirMineral : (pilihanMinuman == 2) ? EsTeh : (pilihanMinuman == 3) ? JusJeruk;

    printf("Apakah Anda adalah member? (Y/N): ");
    char member;
    scanf(" %c", &member);

    if (member == 'Y' || member == 'y') {
        totalHarga = totalHarga * 0.9;
    }

    printf("Total harga: Rp. %.2f\n", (float)totalHarga);
    printf("Alamat memori variabel total: %p\n", &totalHarga);

    int uangBayar;
    printf("Masukkan uang pembayaran: ");
    scanf("%d", &uangBayar);

    if (uangBayar > totalHarga) {
        int kembalian = uangBayar - totalHarga;
        printf("Kembalian Anda: Rp. %d\n", kembalian);
    } else if (uangBayar < totalHarga) {
        printf("Uang kurang.\n");
    } else {
        printf("Terima kasih!\n");
    }

    return 0;
}
