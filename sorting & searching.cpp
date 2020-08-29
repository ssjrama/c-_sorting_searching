#include<iostream.>
#include<conio.h>

using namespace std;

main()
{
  int Nilai[10] = {2,1,5,6,8,1,2,3,9,2}; // inisialisasi array
  int i, Bilangan; // i adalah iterasi dan bilangan adalah bilangan yang akan dicari
  
  // tampilkan array
  cout << "\n\Array = ";
  for(i=0; i<10; i++)
  cout << Nilai[i] <<" ";
  
  Bilangan = 6; // inisialisasi bilangan yang ingin dicari
  bool Ketemu = false; // kondisi apabila data telah ditemukan
  
  // proses pencarian
  for(i=0;i<10;i++) {
  	if(Bilangan == Nilai[i]){ // membandingkan isi array dengan bilangan yang dicari
  		Ketemu = true;
  		goto selesai;
	  }
	else{
		Ketemu = false;
	}
  }
  
  // hasil pencarian
  selesai:
  if(Ketemu == true) {
  	cout << "\n\Data Ditemukan";
  }else {
  	cout << "\n\Data Tidak Ditemukan";
  }
  
  // definisi variabel sementara
  int temp;
  
  //Proses Pengurutan
  for (i = 0;i < 10;i++){
  	for (int j = 0;j < 10;j++){
  		if(Nilai[j+1] < Nilai[j]){ // membandingkan nilai dari index saat ini dengan index selanjutnya
  			
  			// proses penukaran nilai
			  
			temp = Nilai[j+1];
			Nilai[j+1] = Nilai[j];
			Nilai[j] = temp;  
		  }
	  }
  }
  
  // menampilkan array setelah diurutkan
  cout << "\n\Array = ";
  for(i=0; i<10; i++)
  cout << Nilai[i] <<" ";
  
  getch();
}

