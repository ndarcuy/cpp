#include <stdio.h>


int main() {

char namamu[50];
int gaji, makan, transport, liburan, lain;
int total, sisa;

printf("PROGRAM PENGHITUNG PENGELUARAN BULANAN \n");

// Input nama

printf("Masukkan nama anda (tanpa spasi): ");
scanf("%49s" , namamu);

// input angka

printf("Masukkan gaji bulananmu:");
scanf("%d" , &gaji);

printf("Masukkan biaya makanmu:");
scanf("%d" , &makan);

printf("Masukkan biaya transportasimu:");
scanf("%d" , &transport);

printf("Masukkan biaya liburanmu:");
scanf("%d" , &liburan);

printf("Masukkan pengeluarkan lainnya:");
scanf("%d" , &lain);

// proses perhitungan
 total = makan + transport + liburan + lain;
 sisa = gaji - total; 

// tampilkan semuanya kembali

printf("\n DATA YANG TELAH ANDA MASUKKAN\n");
printf("Namamu          :%s\n" , namamu);
printf("Gaji bulananmu  :%d\n" , gaji);
printf("Makanmu         :%d\n" , makan);
printf("Transportasimu  :%d\n" , transport);
printf("Liburanmu       :%d\n" , liburan);
printf("Lain-lain       :%d\n" , lain);
printf("----------------------------------------\n");
printf("Total pengeluaran kamu   :%d\n" , total);
printf("Sisa uang kamu           :%d\n" , sisa);

//percabangan

if (sisa < 0) {
    printf("PERINGATAN: Pengeluaran anda melebihi gaji!\n");    
} else if (sisa ==0) {
    printf("Catatan: Anda menghabiskan seluruh gaji bulanan ini.\n");
} else {
    printf("Bagus! Anda berhasil menabung bulan ini :3\n");
}



return 0;

}