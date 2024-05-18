// Coderes Piahn Struktur Data dan Algoritma

#include <iostream>
#include <map>

// Struktur data untuk menyimpan informasi produk
struct Product {
    std::string name;
    double price;
};

int main() {
    double saldo = 0.0; // Saldo awal kasir

    // Daftar produk yang tersedia ya boskuh
    std::map<int, Product> products = {
        {1, {"Product A", 10.0}},
        {2, {"Product B", 20.0}},
        {3, {"Product C", 30.0}}
    };

    while (true) {
        std::cout << "=== Program Kasir ===" << std::endl;
        std::cout << "Saldo saat ini: Rp " << saldo << std::endl;
        std::cout << "-----------------------" << std::endl;
        std::cout << "Daftar Produk:" << std::endl;
        for (const auto& pair : products) {
            std::cout << pair.first << ". " << pair.second.name << " - Rp " << pair.second.price << std::endl;
        }
        std::cout << "-----------------------" << std::endl;
        std::cout << "1. Top-up" << std::endl;
        std::cout << "2. Beli Produk" << std::endl;
        std::cout << "3. Keluar" << std::endl;
        std::cout << "Masukkan pilihan: ";

        int pilihan;
        std::cin >> pilihan;

        if (pilihan == 1) {
            std::cout << "Masukkan jumlah uang top-up: ";
            double topUp;
            std::cin >> topUp;
            saldo += topUp;
            std::cout << "Top-up berhasil. Saldo saat ini: Rp " << saldo << std::endl;
        } else if (pilihan == 2) {
            std::cout << "Pilih produk yang ingin dibeli (masukkan nomor produk): ";
            int nomorProduk;
            std::cin >> nomorProduk;

            if (products.find(nomorProduk) != products.end()) {
                if (saldo >= products[nomorProduk].price) {
                    saldo -= products[nomorProduk].price;
                    std::cout << "Pembelian " << products[nomorProduk].name << " berhasil. Saldo saat ini: Rp " << saldo << std::endl;
                } else {
                    std::cout << "Saldo tidak mencukupi untuk membeli produk tersebut." << std::endl;
                }
            } else {
                std::cout << "Produk tidak ditemukan. Silakan pilih produk yang valid." << std::endl;
            }
        } else if (pilihan == 3) {
            std::cout << "Terima kasih telah menggunakan program kasir kami." << std::endl;
            break;
        } else {
            std::cout << "Pilihan tidak valid. Silakan masukkan pilihan yang benar." << std::endl;
        }

        std::cout << std::endl;
    }

    return 0;
}
