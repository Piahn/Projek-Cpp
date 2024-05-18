#include <iostream>
#include <string>
#include <vector>
#include <cstdlib> // Untuk menggunakan fungsi rand() untuk menmabahkan angka acak

using namespace std;
int ayamgoreng = 10'000;
int nasi = 4'000;
int nasigoreng = 12'000;
int mieayampangsit = 15'000;
int estehmanis = 6'000;
int esjeruk = 7'000;
int airmineral = 5'000;
int total;

// Struktur data untuk menyimpan nama dan saldo pelanggan
struct Customer {
    string name;
    int balance;
    int jumlah;
    int pilih;
 // int totalsemua;
 //char lanjut;
    int uangUser;
    int bayar;
    int kembalian;
    int randomNumber = rand() % (28 % 40);
};

// Vector untuk menyimpan data pelanggan
vector<Customer> customers;

// Function untuk menambahkan pelanggan
void addCustomer() {
    Customer customer;
    cout << "Masukkan Nama Pelanggan: ";
    cin >> customer.name;
    cout << "Masukkan Saldo Pelanggan: ";
    cin >> customer.balance;
    customers.push_back(customer);
}

// Function untuk menampilkan daftar pelanggan
void displayCustomers() {
    cout << "\nDaftar Pelanggan:\n";
    cout << "-----------------\n";
    for (const auto& customer : customers) {
        cout << "Nama: " << customer.name << ", Saldo: " << customer.balance << endl;
    }
    cout << "-----------------\n\n";
}

// Function tampilan menu
void displayMenu() {
    // Isi dari tampilan menu Anda
    Customer customer;
    cout<<"Selamat Datang Di RestoPadang" << endl;
        cout<<"Perum Serdang S12.22 Kab.Tanggerang "<<endl;
        cout<<"Silakan Pilih Makanan Yg kami hidangkan "<<endl;
        cout<<"---------------[ List Menu RestoPadang ]-------------" << endl;
        cout<<"Menu Makanan\t\t\t\tHarga"<<endl;
        cout<<'\n'<<"1.PAKET AYAM + NASI + AIR MINERAL    =   Rp  19.000" << endl;
        cout<<"2.PAKET NASI GORENG + ES TEH MANIS   =   Rp. 1.000"<<endl;
        cout<<"3.PAKET MIE AYAM PANGSIT + ES JERUK  =   Rp. 2.000"<<endl;
        // cout<<"4.PAKET PECEL AYAM + ES JERUK        =   Rp. 1.000"<<endl;
        cout<<"4.AYAM GORENG                        =   Rp. 10.000"<<endl;
        cout<<"5.NASI GORENG                        =   Rp. 12.000"<<endl;
        cout<<"6.MIE AYAM PANGSIT                   =   Rp. 15.000"<<endl;
        // cout<<"8.PECEL AYAM                         =   Rp. 12.000"<<endl;
        cout<<"7.ES TEH MANIS                       =   Rp. 6.000"<<endl;
        cout<<"8.ES JERUK                           =   Rp. 7.000"<<endl;
        cout<<"9.AIR MINERAL                        =   Rp. 5.000"<<endl;
        cout << "-----------------------------------------------------" << endl;
       // cout<<'\n'<<"MASUKAN PILIHAN ANDA";
    // for (const auto& customer : customers) {
         cout << "\nPilih Daftar produk pada menu" << endl;
         cout << "Pilih Barang : "; 
        //  int pilihBarang;
         cin >> customer.pilih;
         if (customer.pilih < 1 || customer.pilih > 9) {
           cout << "Undefined Data Tidak Di Temukan Node-System_main.cpp1:" << customer.randomNumber << endl;
             cout << "Data yang Anda masukan tidak ditemukan, silahkan input ulang : "; 
              cin >> customer.pilih;
           // cout << "Pilih Barang : "; 
}
    
// function data case
int selectedChoice = customer.pilih;
    switch (selectedChoice) {
    case 1: // paket lengkap 1
      cout << "\nBarang Yang Anda Pilih : 1.PAKET AYAM + NASI + AIR MINERAL";
      cout << "\nJumlah Barang : "; cin >> customer.jumlah;
      customer.bayar = ayamgoreng + nasi + airmineral * customer.jumlah;
      cout << "\nTotal Pembayaran : RP." << customer.bayar << endl;
      cout << "Harga per Makanan : Rp.19000" << endl;
      cout << "-------------------------" << endl;

      //Pembayaran ketika uang kurang dan berhasil 
      cout << "Masukan Uang Anda : "; cin >> customer.uangUser;

      //Semua Kondisi ketika uangUser kurang dari bayar belum selesai.
      if (customer.uangUser < customer.bayar) {
          cout << "\nUang Anda Kurang! Tidak Dapat Melanjutkan Transaksi!" << endl;
          cout << "Terima kasih telah berbelanja di RestoPadang";

      }else if (customer.uangUser > customer.bayar) {
          customer.kembalian = customer.uangUser - customer.bayar;
          cout << "Kembalian : " << customer.kembalian;
          cout << "\n\nTransaksi Anda Berhasil!" << endl;
          cout << "Terima kasih telah berbelanja di RestoPadang";

      }else if (customer.uangUser == customer.bayar) {
          cout << "\nTransaksi Anda Berhasil!" << endl;
          cout << "Terima kasih telah berbelanja di RestoPadang";

      }else
          (cout << "Invalid!");
      break;

    case 2: // paket lengkap 2
      cout << "\nBarang Yang Anda Pilih : 2.PAKET NASI GORENG + ES TEH MANIS";
      cout << "\nJumlah Barang : "; cin >> customer.jumlah;
      customer.bayar = nasigoreng + estehmanis * customer.jumlah;
      cout << "\nTotal Pembayaran : RP." << customer.bayar << endl;
      cout << "Harga per Makanan : Rp.18000" << endl;
      cout << "-------------------------" << endl;

      //Pembayaran ketika uang kurang dan berhasil 
      cout << "Masukan Uang Anda : "; cin >> customer.uangUser;

      //Semua Kondisi ketika uangUser kurang dari customer.bayar belum selesai.
      if (customer.uangUser < customer.bayar) {
          cout << "\nUang Anda Kurang! Tidak Dapat Melanjutkan Transaksi!" << endl;
          cout << "Terima kasih telah berbelanja di RestoPadang";

      }else if (customer.uangUser > customer.bayar) {
          customer.kembalian = customer.uangUser - customer.bayar;
          cout << "Kembalian : " << customer.kembalian;
          cout << "\n\nTransaksi Anda Berhasil!" << endl;
          cout << "Terima kasih telah berbelanja di RestoPadang";

      }else if (customer.uangUser == customer.bayar) {
          cout << "\nTransaksi Anda Berhasil!" << endl;
          cout << "Terima kasih telah berbelanja di RestoPadang";

      }else
          (cout << "Invalid!");
      break;

      case 3: // ayam goreng 
        cout << "\nBarang Yang Anda Pilih : 3.PAKET MIE AYAM PANGSIT + ES JERUK";
        cout << "\nJumlah Barang : "; cin >> customer.jumlah;
        customer.bayar = mieayampangsit + esjeruk * customer.jumlah;
        cout << "\nTotal Pembayaran : RP." << customer.bayar << endl;
        cout << "Harga per Makanan : Rp.22000" << endl;
        cout << "-------------------------" << endl;

        //Pembayaran ketika uang kurang dan berhasil 
        cout << "Masukan Uang Anda : "; cin >> customer.uangUser;

        //Semua Kondisi ketika uangUser kurang dari customer.bayar belum selesai.
        if (customer.uangUser < customer.bayar) {
            cout << "\nUang Anda Kurang! Tidak Dapat Melanjutkan Transaksi!" << endl;
            cout << "Terima kasih telah berbelanja di RestoPadang";

        }else if (customer.uangUser > customer.bayar) {
            customer.kembalian = customer.uangUser - customer.bayar;
            cout << "Kembalian : " << customer.kembalian;
            cout << "\nTransaksi Anda Berhasil!" << endl;
            cout << "Terima kasih telah berbelanja di RestoPadang";

        }else if (customer.uangUser == customer.bayar) {
            cout << "\nTransaksi Anda Berhasil!" << endl;
            cout << "Terima kasih telah berbelanja di RestoPadang";

        }else
            (cout << "Invalid!");
        break;

        case 4: // ayam goreng 
            cout << "\nBarang Yang Anda Pilih : 4.AYAM GORENG";
            cout << "\nJumlah Barang : "; cin >> customer.jumlah;
            customer.bayar = ayamgoreng * customer.jumlah;
            cout << "\nTotal Pembayaran : RP." << customer.bayar << endl;
            cout << "Harga per Makanan : Rp.10000" << endl;
            cout << "-------------------------" << endl;

            //Pembayaran ketika uang kurang dan berhasil 
            cout << "Masukan Uang Anda : "; cin >> customer.uangUser;

            //Semua Kondisi ketika uangUser kurang dari customer.bayar belum selesai.
            if (customer.uangUser < customer.bayar) {
                cout << "\nUang Anda Kurang! Tidak Dapat Melanjutkan Transaksi!" << endl;
                cout << "Terima kasih telah berbelanja di RestoPadang";

            }else if (customer.uangUser > customer.bayar) {
                customer.kembalian = customer.uangUser - customer.bayar;
                cout << "Kembalian : " << customer.kembalian;
                cout << "\n\nTransaksi Anda Berhasil!" << endl;
                cout << "Terima kasih telah berbelanja di RestoPadang";

            }else if (customer.uangUser == customer.bayar) {
                cout << "\nTransaksi Anda Berhasil!" << endl;
                cout << "Terima kasih telah berbelanja di RestoPadang";

            }else
                (cout << "Invalid!");
            break;

        case 5: // Nasgor
            cout << "\nBarang Yang Anda Pilih : 5.NASI GORENG ";
            cout << "\nJumlah Barang : "; cin >> customer.jumlah;
            customer.bayar = nasigoreng * customer.jumlah;
            cout << "\nTotal Pembayaran : RP." << customer.bayar << endl;
            cout << "Harga per Makanan : Rp.12000" << endl;
            cout << "-------------------------" << endl;


            //Pembayaran
            cout << "Masukan Uang Anda : "; cin >> customer.uangUser;

            if (customer.uangUser < customer.bayar) {
                cout << "\nUang Anda Kurang! Tidak Dapat Melanjutkan Transaksi!" << endl;
                cout << "Terima kasih telah berbelanja di RestoPadang";

            }else if (customer.uangUser > customer.bayar) {
                customer.kembalian = customer.uangUser - customer.bayar;
                cout << "Kembalian : " << customer.kembalian;
                cout << "\n\nTransaksi Anda Berhasil!" << endl;
                cout << "Terima kasih telah berbelanja di RestoPadang";

            }else if (customer.uangUser == customer.bayar) {
                cout << "\nTransaksi Anda Berhasil!" << endl;
                cout << "Terima kasih telah berbelanja di RestoPadang";

            }else
                (cout << "Invalid!");
            break;

        case 6: // mie ayam pangsit
            cout << "\nBarang Yang Anda Pilih : 6.MIE AYAM PANGSIT ";
            cout << "\nJumlah Barang : "; cin >> customer.jumlah;
            customer.bayar = mieayampangsit * customer.jumlah;
            cout << "\nTotal Pembayaran : RP." << customer.bayar << endl;
            cout << "Harga per Makanan : Rp.15000" << endl;
            cout << "-------------------------" << endl;

            //Pembayaran
            cout << "Masukan Uang Anda : "; cin >> customer.uangUser;

            if (customer.uangUser < customer.bayar) {
                cout << "\nUang Anda Kurang! Tidak Dapat Melanjutkan Transaksi!" << endl;
                cout << "Terima kasih telah berbelanja di RestoPadang";

            }else if (customer.uangUser > customer.bayar) {
                customer.kembalian = customer.uangUser - customer.bayar;
                cout << "Kembalian : " << customer.kembalian;
                cout << "\n\nTransaksi Anda Berhasil!" << endl;
                cout << "Terima kasih telah berbelanja di RestoPadang";

            }else if (customer.uangUser == customer.bayar) {
                cout << "\nTransaksi Anda Berhasil!" << endl;
                cout << "Terima kasih telah berbelanja di RestoPadang";

            }else
                (cout << "Invalid!");
            break;

        case 7: // es teh manis kyk kamu 
            cout << "\nBarang Yang Anda Pilih : 7.ES TEH MANIS";
            cout << "\nJumlah Barang : "; cin >> customer.jumlah;
            customer.bayar = estehmanis * customer.jumlah;
            cout << "\nTotal Pembayaran : RP." << customer.bayar << endl;
            cout << "Harga per Makanan : Rp.6.000" << endl;
            cout << "-------------------------" << endl;

            //Pembayaran
            cout << "Masukan Uang Anda : "; cin >> customer.uangUser;

            if (customer.uangUser < customer.bayar) {
                cout << "\nUang Anda Kurang! Tidak Dapat Melanjutkan Transaksi!" << endl;
                cout << "Terima kasih telah berbelanja di RestoPadang";

            }else if (customer.uangUser > customer.bayar) {
                customer.kembalian = customer.uangUser - customer.bayar;
                cout << "Kembalian : " << customer.kembalian;
                cout << "\n\nTransaksi Anda Berhasil!" << endl;
                cout << "Terima kasih telah berbelanja di RestoPadang";

            }else if (customer.uangUser == customer.bayar) {
                cout << "\nTransaksi Anda Berhasil!" << endl;
                cout << "Terima kasih telah berbelanja di RestoPadang";

            }else
                (cout << "Invalid!");
            break;

        case 8: // es jeruk
            cout << "\nBarang Yang Anda Pilih : 8.ES JERUK";
            cout << "\nJumlah Barang : "; cin >> customer.jumlah;
            customer.bayar = esjeruk  * customer.jumlah;
            cout << "\nTotal Pembayaran : RP." << customer.bayar << endl;
            cout << "Harga per Makanan : Rp.7.000" << endl;
            cout << "-------------------------" << endl;

            //Pembayaran
            cout << "Masukan Uang Anda : "; cin >> customer.uangUser;

            if (customer.uangUser < customer.bayar) {
                cout << "\nUang Anda Kurang! Tidak Dapat Melanjutkan Transaksi!" << endl;
                cout << "Terima kasih telah berbelanja di RestoPadang";

            }else if (customer.uangUser > customer.bayar) {
                customer.kembalian = customer.uangUser - customer.bayar;
                cout << "Kembalian : " << customer.kembalian;
                cout << "\n\nTransaksi Anda Berhasil!" << endl;
                cout << "Terima kasih telah berbelanja di RestoPadang";

            }else if (customer.uangUser == customer.bayar) {
                cout << "\nTransaksi Anda Berhasil!" << endl;
                cout << "Terima kasih telah berbelanja di RestoPadang";

            }else
                (cout << "Invalid!");
            break;

        case 9:
            cout << "\nBarang Yang Anda Pilih : 9.AIR MINERAL";
            cout << "\nJumlah Barang : "; cin >> customer.jumlah;
            customer.bayar = airmineral * customer.jumlah;
            cout << "\nTotal Pembayaran : RP." << customer.bayar << endl;
            cout << "Harga per Makanan : Rp.5.000" << endl;
            cout << "-------------------------" << endl;

            //Pembayaran
            cout << "Masukan Uang Anda : "; cin >> customer.uangUser;

            if (customer.uangUser < customer.bayar) {
                cout << "\nUang Anda Kurang! Tidak Dapat Melanjutkan Transaksi!" << endl;
                cout << "Terima kasih telah berbelanja di RestoPadang";

            }else if (customer.uangUser > customer.bayar) {
                customer.kembalian = customer.uangUser - customer.bayar;
                cout << "Kembalian : " << customer.kembalian;
                cout << "\n\nTransaksi Anda Berhasil!" << endl;
                cout << "Terima kasih telah berbelanja di RestoPadang";

            }else if (customer.uangUser == customer.bayar) {
                cout << "\nTransaksi Anda Berhasil!" << endl;
                cout << "Terima kasih telah berbelanja di RestoPadang";

            }else
                (cout << "Invalid!");
            break;

        // default:
        //       cout << "Data yang Anda masukan tidak ditemukan, silahkan input ulang : "; 
        //       cin >> customer.pilih;
              // tampilan();
    }
}

// Function transaksi
// int totalTransaction(int menuIndex, int quantity) {
//     if (quantity < 0) {
//         throw std::invalid_argument("quantity must be non-negative");
//     }
//     int total = 0;
//     switch (menuIndex) {
//         case 1:
//             total = ayamgoreng * quantity;
//             break;
//         case 2:
//             total = esjeruk * quantity;
//             break;
//         case 3:
//             total = mieayampangsit * quantity;
//             break;
//         case 4:
//             total = ayamgoreng * quantity;
//             break;
//         case 5:
//             total = nasi * quantity;
//             break;
//         case 6:
//             total = mieayampangsit * quantity;
//             break;
//         case 7:
//             total = estehmanis * quantity;
//             break;
//         case 8:
//             total = esjeruk * quantity;
//             break;
//         case 9:
//             total = airmineral * quantity;
//             break;
//         default:
//             throw std::invalid_argument("menuIndex must be between 1 and 9");
//     }
//     return total;
// }


// void transaction(int menuIndex, int quantity) {
//     Customer customer;
//     int total = totalTransaction(menuIndex, quantity);
//     cout << "\nTotal Pembayaran : Rp." << total << endl;
//     cout << "-------------------------" << endl;

//     //Pembayaran
//     cout << "Masukan Uang Anda : "; cin >> customer.uangUser;

//     if (customer.uangUser < total) {
//         cout << "\nUang Anda Kurang! Tidak Dapat Melanjutkan Transaksi!" << endl;
//         cout << "Terima kasih telah berbelanja di RestoPadang";

//     }else if (customer.uangUser > total) {
//         customer.kembalian = customer.uangUser - total;
//         cout << "Kembalian : " << customer.kembalian;
//         cout << "\n\nTransaksi Anda Berhasil!" << endl;
//         cout << "Terima kasih telah berbelanja di RestoPadang";

//     }else if (customer.uangUser == total) {
//         cout << "\nTransaksi Anda Berhasil!" << endl;
//         cout << "Terima kasih telah berbelanja di RestoPadang";

//     }else
//         (cout << "Invalid!");
// }


int main() {
    // Meminta input untuk menambahkan pelanggan
    char addMoreCustomers;
    do {
        addCustomer();
        cout << "\nTambahkan pelanggan lain? (y/t): ";
        cin >> addMoreCustomers;
    } while (addMoreCustomers == 'y');

    // Menampilkan daftar pelanggan
    displayCustomers();

    char pilih;
    // int total = 0;

    displayMenu();
    cout << "\n\nLanjut Belanja? (y/t) : "; cin >> pilih;

    if (pilih == 'y'){
        do {
            displayMenu();
            cout << "\n\nLanjut Belanja? (y/t) : "; cin >> pilih;
        }while (pilih == 'y');

        // cout << "\nTotal Yang Harus Dibayar : " << total;

        if (pilih == 't') {
            cout << "\nKeluar dari RestoPadang";
        }else
            (cout << "Invalid Karakter");

    }else if (pilih == 't') {
        cout << "\nKeluar dari RestoPadang";
    }else
        (cout << "Invalid Karakter");
    return 0;
}
