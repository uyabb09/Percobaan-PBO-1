#include <stdio.h>
#include <iostream>
#include <string.h>
#include <cstring>

int main() {
    char pilihan;

    while (true) {
        std::cout << "\n=== Pencarian Kata ===\n";

        // Meminta pengguna memasukkan teks
        char teks[1000];
        std::cout << "Teks yang ditulis: ";
        std::cin.getline(teks, sizeof(teks));

        // Meminta pengguna memasukkan kata yang ingin dicari
        char kata_cari[100];
        std::cout << "Masukkan kata yang ingin dicari: ";
        std::cin >> kata_cari;

        // Mengonversi teks dan kata_cari ke huruf kecil untuk pencarian yang tidak bersifat case-sensitive
        for (int i = 0; teks[i]; ++i) {
            teks[i] = tolower(teks[i]);
        }

        for (int i = 0; kata_cari[i]; ++i) {
            kata_cari[i] = tolower(kata_cari[i]);
        }

        // Mencari kata dalam teks dan menyimpan posisinya
        char* posisi = teks;
        int posisi_kemunculan = 0;

        while ((posisi = strstr(posisi, kata_cari)) != nullptr) {
            std::cout << "Kata \"" << kata_cari << "\" ditemukan pada posisi " << (posisi - teks) + 1 << std::endl;
            posisi_kemunculan++;
            posisi += strlen(kata_cari);
        }

        // Menampilkan pesan jika kata tidak ditemukan
        if (posisi_kemunculan == 0) {
            std::cout << "Kata \"" << kata_cari << "\" tidak ditemukan dalam teks." << std::endl;
        }

        // Menanyakan apakah pengguna ingin mencari kata lagi
        std::cout << "Apakah Anda ingin mencari kata lagi? (1=Ya, 0=Tidak): ";
        std::cin >> pilihan;

        if (pilihan != '1') {
            break;
        }

        // Membersihkan input buffer
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    return 0;
}
