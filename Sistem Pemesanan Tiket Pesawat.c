#include <stdio.h>
#include <windows.h>
#include <string.h>


int Harga();
int Nama(); 
int Umur();
int Input();
int Destinasi(); 
int Berangkat();
int Pulang();
int Perjalanan();
int Tiket();
int Tipe_Tiket_1(); 
int Tipe_Tiket_2();
int C_Tipe_Tiket_1(); 
int C_Tipe_Tiket_2();
int C_Tiket();
int Hitung();
int Validasi1();
int Penerbangan(); 
int Kelas_Kabin();
int C_Penerbangan(); 
int C_Kelas_Kabin();
int Area_Kota();
int H_Penjemputan();
int Penjemputan();
int C_Penjemputan();
int Validasi2();
int Pembayaran();
int Proses();
int E_Tiket();
int Thanx();

char nama[300][300], valid1, valid2, jemput; 
int maskapai, subtotal1, kabin, subtotal2, total, bayar, kembali,
	umur, asal, tujuan, tipe, pilih, biayajemput, tjemput, cjemput;
int mp1, mp2, mp3, mp4, mp5,
	tanggal1, bulan1, tahun1, 
	tanggal2, bulan2, tahun2,
	kelas1, kelas2, kelas3;
int H[20];
float mpa, mpb, mpc, mpd, mpe;

char Asal[50],Tujuan[50], Bulan1[50], Bulan2[50], Maskapai[50], Kabin[50], Jemput[50], TIKET[50];

char k1[]={"Jakarta"};
char k2[]={"Medan"};
char k3[]={"Ternate"};
char k4[]={"Balikpapan"};
char k5[]={"Denpasar"};
		
char k11[]={"Kemayoran"};
char k12[]={"Tanjung Priok"};
char k13[]={"Duren Sawit"};
char k14[]={"Kebayoran"};
char k15[]={"Cengkareng"};
		
char k21[]={"Padangsidempuan"};
char k22[]={"Mandailing Natal"};
char k23[]={"Tapanuli"};
char k24[]={"Deli Serdang"};
char k25[]={"Binjai"};
		
char k31[]={"Halmahera"};
char k32[]={"Tidore"};
char k33[]={"Sula"};
char k34[]={"Morotai"};
char k35[]={"Taliabu"};
		
char k41[]={"Berau"};
char k42[]={"Kutai"};
char k43[]={"Mahakam"};
char k44[]={"Bontang"};
char k45[]={"Samarinda"};

char k51[]={"Kuta "};
char k52[]={"Gianyar"};
char k53[]={"Buleleng"};
char k54[]={"Karangasem"};
char k55[]={"Bangli"};
		
char Tiket1[]={"Satu Kali Perjalanan"};
char Tiket2[]={"Pulang Pergi"};
		
char b1[]={"Januari"};
char b2[]={"Februari"};
char b3[]={"Maret"};
char b4[]={"April"};
char b5[]={"Mei"};
char b6[]={"Juni"};
char b7[]={"Juli"};
char b8[]={"Agustus"};
char b9[]={"September"};
char b10[]={"Oktober"};
char b11[]={"November"};
char b12[]={"Desember"};
		
char m1[]={"Air Asia"};
char m2[]={"Sriwijaya Air"};
char m3[]={"Citilink"};
char m4[]={"Garuda Indonesia"};
char m5[]={"Lion Air"};
		
char kk1[]={"First Class"};
char kk2[]={"Business Class"};
char kk3[]={"Economy Class"};

int Harga(){
	H[0]=1200000;	//Jakarta	 -	Medan
	H[1]=1220000;	//Medan		 - 	Jakarta
	
	H[2]=1320000;	//Jakarta	 - 	Ternante
	H[3]=1300000;	//Ternate	 -	Jakarta
	
	H[4]=1255000;	//Jakarta	 - Balikpapan
	H[5]=1250000;	//Balikpapan - Jakarta
	
	H[6]=1370000;	//Jakarta 	 - Denpasar
	H[7]=1350000;	//Denpasar	 - Jakarta
	
	H[8]=1370000;	//Medan 	 - Ternate
	H[9]=1350000;	//Ternate 	 - Medan
	
	H[10]=1345000;	//Medan 	 - Balikpapan
	H[11]=1325000;	//Balikpapan - Medan
	
	H[12]=1395000;	//Medan 	 - Denpasar
	H[13]=1375000;	//Denpasar	 - Medan

	H[14]=1260000;	//Ternate	 - Balikpapan
	H[15]=1280000;	//Balikpapan - Ternate

	H[16]=1285000;	//Ternate 	 - Denpasar
	H[17]=1295000;	//Denpasar 	 - Ternate

	H[18]=1380000;	//Balikpapan - Denpasar
	H[19]=1360000;	//Denpasar 	 - Balikpapan
	
	mpa=1.0;		//Air Asia
	mpb=1.1;		//Sriwijaya Air
	mpc=1.3;		//Citilink
	mpd=1.4;		//Garuda Indonesia
	mpe=1.2;		//Lion Air
	
	return 0;
}

int Nama(){
	printf("=====================================================\n");
	printf("Masukan Nama                      : ");
	scanf("%s",&nama);
	
	return 0;
}

int Umur(){
	B:
	printf("Masukan Umur (Maksimal 100 Tahun) : ");
	scanf("%d",&umur);
	
	if (umur<=0){
		printf("Umur tidak Valid !\n");
		goto B;
	}
	else if (umur>100){
		printf("Umur penumpang tidak boleh lebih dari 100 tahun !\n");
		goto B;
	}

	printf("=====================================================\n");	

	return 0;
}

int Input(){
	Nama();
	Umur();
	
	return 0;
}

int Destinasi(){
	printf("\n\n==================================\n");
	printf("=============DESTINASI============\n");
	printf("==================================\n");
	printf("1. %s\n", k1);
	printf("2. %s\n", k2);
	printf("3. %s\n", k3);
	printf("4. %s\n", k4);
	printf("5. %s\n", k5);
	printf("==================================\n");

	return 0;	
}

int Berangkat(){
	C:
	printf("Pilih Asal   : ");
	scanf("%d",&asal);
	
	if (asal==1){
		strcpy(Asal, k1);
	}
	else if (asal==2){
		strcpy(Asal, k2);
	}
	else if (asal==3){
		strcpy(Asal, k3);
	}
	else if (asal==4){
		strcpy(Asal, k4);
	}
	else if (asal==5){
		strcpy(Asal, k5);
	}
	else if ((asal<=0)||(asal>5)){
		printf("Asal Tidak Sesuai !\n\n");
		goto C;
	}
	
	printf("==================================\n");
	
	return 0;
}

int Pulang(){
	D:
	printf("Pilih Tujuan : ");
	scanf("%d",&tujuan);
	
	if (tujuan==1){
		strcpy(Tujuan, k1);
	}
	else if (tujuan==2){
		strcpy(Tujuan, k2);
	}
	else if (tujuan==3){
		strcpy(Tujuan, k3);
	}
	else if (tujuan==4){
		strcpy(Tujuan, k4);
	}
	else if (tujuan==5){
		strcpy(Tujuan, k5);
	}
	else if ((tujuan<=0)||(tujuan>5)){
		printf("Tujuan Tidak Sesuai !\n\n");
		goto D;
	}
	
	return 0;
}

int Perjalanan(){
	Destinasi();
	Berangkat();
	E:
	Pulang();
	if(
		((asal==1)&&(tujuan==1)) ||
		((asal==2)&&(tujuan==2)) ||
		((asal==3)&&(tujuan==3)) ||
		((asal==4)&&(tujuan==4)) ||
		((asal==5)&&(tujuan==5))
	){
		printf("Asal dan Tujuan tidak boleh sama !\n\n");
		goto E;
	}

	printf("==================================\n");

	return 0;
}

int Tiket(){
	printf("\n===========================\n");
	printf("=======PILIHAN TIKET=======\n");
	printf("===========================\n");
	printf("1. %s\n", Tiket1);
	printf("2. %s\n", Tiket2);
	printf("===========================\n");
	F:
	printf("Pilih Tipe Tiket : ");
	scanf("%d",&tipe);
	
	switch (tipe){
		case 1 :
			printf("===========================\n\n\n");
			Tipe_Tiket_1();
			break;
		case 2 :
			printf("===========================\n\n\n");
			Tipe_Tiket_2();
			break;
		default:
			printf("Pilihan Tidak Sesuai !\n\n");
			goto F;
			break;
	}
	
	return 0;
}

int Tipe_Tiket_1(){
	printf("==================================================================\n");
	printf("========================TANGGAL KEBERANGKATAN=====================\n");
	printf("==================================================================\n");
	G:
	printf("Contoh : 07 (spasi) 06 (spasi) 2019 : ");
	scanf(" %d %d %d", &tanggal1, &bulan1, &tahun1);
	
	if (
		(tanggal1<=0)||(tanggal1>31) ||
		(bulan1<=0)  ||(bulan1>12)	 ||
		(tahun1<=0)  ||(tahun1>9999) ||
		
		((bulan1==1)  && (tanggal1>31)) ||
		((bulan1==2)  && (tanggal1>28)) ||
		((bulan1==3)  && (tanggal1>31)) ||
		((bulan1==4)  && (tanggal1>30)) ||
		((bulan1==5)  && (tanggal1>31)) ||
		((bulan1==6)  && (tanggal1>30)) ||
		((bulan1==7)  && (tanggal1>31)) ||
		((bulan1==8)  && (tanggal1>31)) ||
		((bulan1==9)  && (tanggal1>30)) ||
		((bulan1==10) && (tanggal1>31)) ||
		((bulan1==11) && (tanggal1>30)) ||
		((bulan1==12) && (tanggal1>31))
	){
		printf("Tanggal Tidak Sesuai !\n\n");
		goto G;
	}
	
	printf("==================================================================\n");
	
	return 0;
}

int Tipe_Tiket_2(){
	Tipe_Tiket_1();
	
	
	printf("\n==================================================================\n");
	printf("========================TANGGAL KEPULANGAN========================\n");
	printf("==================================================================\n");
	H:
	printf("Contoh : 08 (spasi) 07 (spasi) 2020 : ");
	scanf(" %d %d %d",&tanggal2, &bulan2, &tahun2);
	
	if (
		(tanggal2<=0)||(tanggal2>31) ||
		(bulan2<=0)  ||(bulan2>12)	 ||
		(tahun2<=0)  ||(tahun2>9999)
	){
		printf("Tanggal Tidak Sesuai !\n\n");
		goto H;
	}
	else if (tahun1>tahun2){
		printf("Tanggal Kepulangan tidak boleh kurang dari tanggal keberangkatan !\n\n");
		goto H;
	}
	else if	((tahun1>tahun2)&&(bulan1>bulan2)){
		printf("Tanggal Kepulangan tidak boleh kurang dari tanggal keberangkatan !\n\n");
		goto H;
	} 
	else if ((tahun1>tahun2)&&(bulan1>bulan2)&&(tanggal1>tanggal2)){
		printf("Tanggal Kepulangan tidak boleh kurang dari tanggal keberangkatan !\n\n");
		goto H;
	}
	else if ((tahun1==tahun2)&&(bulan1>bulan2)&&(tanggal1==tanggal2)){
		printf("Tanggal Kepulangan tidak boleh kurang dari tanggal keberangkatan !\n\n");
		goto H;
	}
	else if ((tahun1==tahun2)&&(bulan1==bulan2)&&(tanggal1>tanggal2)){
		printf("Tanggal Kepulangan tidak boleh kurang dari tanggal keberangkatan !\n\n");
		goto H;
	}
	else if ((tahun1==tahun2)&&(bulan1>bulan2)&&(tanggal1>tanggal2)){
		printf("Tanggal Kepulangan tidak boleh kurang dari tanggal keberangkatan !\n\n");
		goto H;
	}
	else if(
		((bulan2==1)  && (tanggal2>31)) ||
		((bulan2==2)  && (tanggal2>28)) ||
		((bulan2==3)  && (tanggal2>31)) ||
		((bulan2==4)  && (tanggal2>30)) ||
		((bulan2==5)  && (tanggal2>31)) ||
		((bulan2==6)  && (tanggal2>30)) ||
		((bulan2==7)  && (tanggal2>31)) ||
		((bulan2==8)  && (tanggal2>31)) ||
		((bulan2==9)  && (tanggal2>30)) ||
		((bulan2==10) && (tanggal2>31)) ||
		((bulan2==11) && (tanggal2>30)) ||
		((bulan2==12) && (tanggal2>31))
	){
		printf("Tanggal Tidak Sesuai !\n\n");
		goto H;
	}
	
	printf("==================================================================\n");
	
	return 0;	
}

int C_Tipe_Tiket_1(){
	printf("Tanggal Keberangkatan : ");
	printf("%d ",tanggal1);
	
	switch (bulan1){
		case 1:
			strcpy(Bulan1,b1);
			printf("%s",Bulan1);
			break;
		case 2:
			strcpy(Bulan1,b2);
			printf("%s",Bulan1);
			break;
		case 3:
			strcpy(Bulan1,b3);
			printf("%s",Bulan1);
			break;
		case 4:
			strcpy(Bulan1,b4);
			printf("%s",Bulan1);
			break;
		case 5:
			strcpy(Bulan1,b5);
			printf("%s",Bulan1);
			break;
		case 6:
			strcpy(Bulan1,b6);
			printf("%s",Bulan1);
			break;
		case 7:
			strcpy(Bulan1,b7);
			printf("%s",Bulan1);
			break;
		case 8:
			strcpy(Bulan1,b8);
			printf("%s",Bulan1);
			break;
		case 9:
			strcpy(Bulan1,b9);
			printf("%s",Bulan1);
			break;
		case 10:
			strcpy(Bulan1,b10);
			printf("%s",Bulan1);
			break;
		case 11:
			strcpy(Bulan1,b11);
			printf("%s",Bulan1);
			break;
		case 12:
			strcpy(Bulan1,b12);
			printf("%s",Bulan1);
			break;
	}
	
	printf(" %d\n",tahun1);
	
	return 0;	
}

int C_Tipe_Tiket_2(){
	printf("Tanggal Kepulangan    : ");
	printf("%d ",tanggal2);
	
	switch (bulan2){
		case 1:
			strcpy(Bulan2,b1);
			printf("%s",Bulan2);
			break;
		case 2:
			strcpy(Bulan2,b2);
			printf("%s",Bulan2);
			break;
		case 3:
			strcpy(Bulan2,b3);
			printf("%s",Bulan2);
			break;
		case 4:
			strcpy(Bulan2,b4);
			printf("%s",Bulan2);
			break;
		case 5:
			strcpy(Bulan2,b5);
			printf("%s",Bulan2);
			break;
		case 6:
			strcpy(Bulan2,b6);
			printf("%s",Bulan2);
			break;
		case 7:
			strcpy(Bulan2,b7);
			printf("%s",Bulan2);
			break;
		case 8:
			strcpy(Bulan2,b8);
			printf("%s",Bulan2);
			break;
		case 9:
			strcpy(Bulan2,b9);
			printf("%s",Bulan2);
			break;
		case 10:
			strcpy(Bulan2,b10);
			printf("%s",Bulan2);
			break;
		case 11:
			strcpy(Bulan2,b11);
			printf("%s",Bulan2);
			break;
		case 12:
			strcpy(Bulan2,b12);
			printf("%s",Bulan2);
			break;
	}
	
	printf(" %d\n",tahun2);
	
	return 0;	
}

int C_Tiket(){
	printf("Tipe Tiket            : ");
	switch (tipe){
		case 1 :
			printf("%s\n",Tiket1);
			strcpy(TIKET,Tiket1);
			C_Tipe_Tiket_1();
			break;
		case 2 :        
			printf("%s\n",Tiket2);
			strcpy(TIKET,Tiket2);
			C_Tipe_Tiket_1();
			C_Tipe_Tiket_2();
			break;
	}       
	return 0;
}

int Hitung(){
	if 		((asal==1) && (tujuan==2)){subtotal1=H[0];}
	else if ((asal==2) && (tujuan==1)){subtotal1=H[1];}
	
	else if ((asal==1) && (tujuan==3)){subtotal1=H[2];}
	else if ((asal==3) && (tujuan==1)){subtotal1=H[3];}
	
	else if ((asal==1) && (tujuan==4)){subtotal1=H[4];}
	else if ((asal==4) && (tujuan==1)){subtotal1=H[5];}
	
	else if ((asal==1) && (tujuan==5)){subtotal1=H[6];}
	else if ((asal==5) && (tujuan==1)){subtotal1=H[7];}
	
	else if ((asal==2) && (tujuan==3)){subtotal1=H[8];}
	else if ((asal==3) && (tujuan==2)){subtotal1=H[9];}
	
	else if ((asal==2) && (tujuan==4)){subtotal1=H[10];}
	else if ((asal==4) && (tujuan==2)){subtotal1=H[11];}
	
	else if ((asal==2) && (tujuan==5)){subtotal1=H[12];}
	else if ((asal==5) && (tujuan==2)){subtotal1=H[13];}
	
	else if ((asal==3) && (tujuan==4)){subtotal1=H[14];}
	else if ((asal==4) && (tujuan==3)){subtotal1=H[15];}
	
	else if ((asal==3) && (tujuan==5)){subtotal1=H[16];}
	else if ((asal==5) && (tujuan==3)){subtotal1=H[17];}
	
	else if ((asal==4) && (tujuan==5)){subtotal1=H[18];}
	else if ((asal==5) && (tujuan==4)){subtotal1=H[19];}
	
	if (tipe==1){
		mp1=subtotal1*mpa;
		mp2=subtotal1*mpb;
		mp3=subtotal1*mpc+1;
		mp4=subtotal1*mpd+1;
		mp5=subtotal1*mpe;
	}
	else if (tipe==2){
		mp1=subtotal1*mpa*2;
		mp2=subtotal1*mpb*2;
		mp3=subtotal1*mpc*2+1;
		mp4=subtotal1*mpd*2+1;
		mp5=subtotal1*mpe*2;
	}
	
	return 0;
}

int Validasi1(){
	printf("\n\n==================================================\n");
	printf("=====================VALIDASI=====================\n");
	printf("==================================================\n");
	printf("Nama                  : %s\n", nama);
	printf("Umur                  : %d Tahun\n", umur);
	printf("Asal                  : %s\n", Asal);
	printf("Tujuan                : %s\n", Tujuan);
	C_Tiket();
	printf("==================================================\n");
	
	return 0;
}

int Penerbangan(){
	printf("\n=====================================\n");
	printf("=========MASKAPAI PENERBANGAN========\n");
	printf("=====================================\n");
	printf("1. %s        	: Rp. %d\n",m1,mp1);
	printf("2. %s   	: Rp. %d\n",m2,mp2);
	printf("3. %s      	: Rp. %d\n",m3,mp3);
	printf("4. %s	: Rp. %d\n",m4,mp4);
	printf("5. %s     	: Rp. %d\n",m5,mp5);
	printf("=====================================\n");
	K:
	printf("Pilih Maskapai Penerbangan	: ");
	scanf("%d", &maskapai);
	
	if (maskapai==1){
		kelas1=mp1*1.5;
		kelas2=mp1*1.2+1;
		kelas3=mp1;
	}
	else if (maskapai==2){
		kelas1=mp2*1.5;
		kelas2=mp2*1.2+1;
		kelas3=mp2;
	}
	else if (maskapai==3){
		kelas1=mp3*1.5;
		kelas2=mp3*1.2+1;
		kelas3=mp3;
	}
	else if (maskapai==4){
		kelas1=mp4*1.5;
		kelas2=mp4*1.2+1;
		kelas3=mp4;
	}
	else if (maskapai==5){
		kelas1=mp5*1.5;
		kelas2=mp5*1.2+1;
		kelas3=mp5;
	}
	else{
		printf("\nInput Tidak Sesuai !\n");
		goto K;
	}
	
	printf("=====================================\n");
	
	return 0;
}

int C_Penerbangan(){
	printf("Maskapai Penerbangan : ");
	
	if (maskapai==1){
		strcpy(Maskapai,m1);
		printf("%s\n",m1);
	}
	else if (maskapai==2){
		strcpy(Maskapai,m2);
		printf("%s\n",m2);
	}
	else if (maskapai==3){
		strcpy(Maskapai,m3);
		printf("%s\n",m3);
	}
	else if (maskapai==4){
		strcpy(Maskapai,m4);
		printf("%s\n",m4);
	}
	else if (maskapai==5){
		strcpy(Maskapai,m5);
		printf("%s\n",m5);
	}
	
	return 0;
}

int Kelas_Kabin(){
	printf("\n=================================\n");
	printf("===========KELAS KABIN===========\n");
	printf("=================================\n");
	printf("1. %s      : Rp. %d\n",kk1, kelas1);
	printf("2. %s   : Rp. %d\n",kk2, kelas2);
	printf("3. %s    : Rp. %d\n",kk3, kelas3);
	printf("=================================\n");
	
	P:
	printf("Pilih Kelas Kabin   : ");
	scanf("%d",&kabin);
	
	switch (kabin){
		case 1:
			subtotal2=kelas1;
			break;
		case 2:
			subtotal2=kelas2;
			break;
		case 3:
			subtotal2=kelas3;
			break;
		default :
			printf("\nPilihan Tidak Sesuai !\n");
			goto P;
			break;
	}
	
	printf("=================================\n");
	
	return 0;	
}

int C_Kelas_Kabin(){
	printf("Kelas Kabin          : ");
	
	switch (kabin){
		case 1:
			strcpy(Kabin,kk1);
			printf("%s\n",kk1);
			break;
		case 2:
			strcpy(Kabin,kk2);
			printf("%s\n",kk2);
			break;
		case 3:
			strcpy(Kabin,kk3);
			printf("%s\n",kk3);
			break;
	}
	return 0;
}

int Area_Kota(){
				printf("\n\n=============================\n");
	switch (asal){
			case 1:
				printf("===========JAKARTA===========\n");
				printf("=============================\n");
				printf("1. %s\n",k11);
				printf("2. %s\n",k12);
				printf("3. %s\n",k13);
				printf("4. %s\n",k14);
				printf("5. %s\n",k15);
				break;
			case 2:
				printf("============MEDAN============\n");
				printf("=============================\n");
				printf("1. %s\n",k21);
				printf("2. %s\n",k22);
				printf("3. %s\n",k23);
				printf("4. %s\n",k24);
				printf("5. %s\n",k25);
				break;
			case 3:
				printf("===========TERNATE===========\n");
				printf("=============================\n");
				printf("1. %s\n",k31);
				printf("2. %s\n",k32);
				printf("3. %s\n",k33);
				printf("4. %s\n",k34);
				printf("5. %s\n",k35);
				break;
			case 4:
				printf("==========BALIKPAPAN=========\n");
				printf("=============================\n");
				printf("1. %s\n",k41);
				printf("2. %s\n",k42);
				printf("3. %s\n",k43);
				printf("4. %s\n",k44);
				printf("5. %s\n",k45);
				break;
			case 5:
				printf("===========DENPASAR==========\n");
				printf("=============================\n");
				printf("1. %s\n",k51);
				printf("2. %s\n",k52);
				printf("3. %s\n",k53);
				printf("4. %s\n",k54);
				printf("5. %s\n",k55);
				break;
		}
				printf("=============================\n");
	
	O:
	printf("Pilih Tempat Penjemputan : ");
	scanf("%d",&tjemput);
	
	if((tjemput<=0)||(tjemput>5)){
		printf("Pilihan Tidak Sesuai !\n\n");
		goto O;
	}
	
	printf("=============================\n");
	
	return 0;
}

int H_Penjemputan(){
	int J[30]={
		65000,75000,60000,55000,80000,		//JAKARTA
		95000,90000,80000,85000,70000,		//MEDAN
		50000,55000,65000,75000,60000,		//TERNATE
		65000,70000,60000,50000,75000,		//BALIKPAPAN
		95000,80000,90000,85000,75000		//DENPASAR
		};
	
	if 		((asal==1)&&(tjemput==1)){biayajemput=J[0]; cjemput=1;}
	else if ((asal==1)&&(tjemput==2)){biayajemput=J[1]; cjemput=2;}
	else if ((asal==1)&&(tjemput==3)){biayajemput=J[2]; cjemput=3;}
	else if ((asal==1)&&(tjemput==4)){biayajemput=J[3]; cjemput=4;}
	else if ((asal==1)&&(tjemput==5)){biayajemput=J[4]; cjemput=5;}

	else if ((asal==2)&&(tjemput==1)){biayajemput=J[5]; cjemput=6;}
	else if ((asal==2)&&(tjemput==2)){biayajemput=J[6]; cjemput=7;}
	else if ((asal==2)&&(tjemput==3)){biayajemput=J[7]; cjemput=8;}
	else if ((asal==2)&&(tjemput==4)){biayajemput=J[8]; cjemput=9;}
	else if ((asal==2)&&(tjemput==5)){biayajemput=J[9]; cjemput=10;}
	
	else if ((asal==3)&&(tjemput==1)){biayajemput=J[10]; cjemput=11;}
	else if ((asal==3)&&(tjemput==2)){biayajemput=J[11]; cjemput=12;}
	else if ((asal==3)&&(tjemput==3)){biayajemput=J[12]; cjemput=13;}
	else if ((asal==3)&&(tjemput==4)){biayajemput=J[13]; cjemput=14;}
	else if ((asal==3)&&(tjemput==5)){biayajemput=J[14]; cjemput=15;}
	
	else if ((asal==4)&&(tjemput==1)){biayajemput=J[15]; cjemput=16;}
	else if ((asal==4)&&(tjemput==2)){biayajemput=J[16]; cjemput=17;}
	else if ((asal==4)&&(tjemput==3)){biayajemput=J[17]; cjemput=18;}
	else if ((asal==4)&&(tjemput==4)){biayajemput=J[18]; cjemput=19;}
	else if ((asal==4)&&(tjemput==5)){biayajemput=J[19]; cjemput=20;}
	
	else if ((asal==5)&&(tjemput==1)){biayajemput=J[20]; cjemput=21;}
	else if ((asal==5)&&(tjemput==2)){biayajemput=J[21]; cjemput=22;}
	else if ((asal==5)&&(tjemput==3)){biayajemput=J[22]; cjemput=23;}
	else if ((asal==5)&&(tjemput==4)){biayajemput=J[23]; cjemput=24;}
	else if ((asal==5)&&(tjemput==5)){biayajemput=J[24]; cjemput=25;}
	
	return 0;
}

int Penjemputan(){
	printf("\n======================================\n");
	printf("Sub Total : %d\n\n",subtotal2);
	N:
	printf("Apakah Anda Ingin Dijemput ? (Y/N) : ");
	scanf(" %c",&jemput);
	
	if((jemput=='Y')||(jemput=='y')){
		printf("======================================\n");
		Area_Kota();
		H_Penjemputan();
	}
	else if((jemput=='N')||(jemput=='n')){
		printf("======================================\n");
		biayajemput=0;
	}
	else {
		printf("Pilihan Tidak Sesuai !\n");
		goto N;
	}
	
	return 0;	
}

int C_Penjemputan(){
	printf("Penjemputan          : ");
	
	if((jemput=='Y')||(jemput=='y')){
		if 		(cjemput==1){printf("%s\n",k11); strcpy(Jemput,k11);}
		else if (cjemput==2){printf("%s\n",k12); strcpy(Jemput,k12);}
		else if (cjemput==3){printf("%s\n",k13); strcpy(Jemput,k13);}
		else if (cjemput==4){printf("%s\n",k14); strcpy(Jemput,k14);}
		else if (cjemput==5){printf("%s\n",k15); strcpy(Jemput,k15);}
		
		else if (cjemput==6){printf("%s\n",k21); strcpy(Jemput,k21);}
		else if (cjemput==7){printf("%s\n",k22); strcpy(Jemput,k21);}
		else if (cjemput==8){printf("%s\n",k23); strcpy(Jemput,k21);}
		else if (cjemput==9){printf("%s\n",k24); strcpy(Jemput,k21);}
		else if (cjemput==10){printf("%s\n",k25); strcpy(Jemput,k25);}
		
		else if (cjemput==11){printf("%s\n",k31); strcpy(Jemput,k31);}
		else if (cjemput==12){printf("%s\n",k32); strcpy(Jemput,k32);}
		else if (cjemput==13){printf("%s\n",k33); strcpy(Jemput,k33);}
		else if (cjemput==14){printf("%s\n",k34); strcpy(Jemput,k34);}
		else if (cjemput==15){printf("%s\n",k35); strcpy(Jemput,k35);}
	
		else if (cjemput==16){printf("%s\n",k41); strcpy(Jemput,k41);}
		else if (cjemput==17){printf("%s\n",k42); strcpy(Jemput,k42);}
		else if (cjemput==18){printf("%s\n",k43); strcpy(Jemput,k43);}
		else if (cjemput==19){printf("%s\n",k44); strcpy(Jemput,k44);}
		else if (cjemput==20){printf("%s\n",k45); strcpy(Jemput,k45);}
		
		else if (cjemput==21){printf("%s\n",k51); strcpy(Jemput,k51);}
		else if (cjemput==22){printf("%s\n",k52); strcpy(Jemput,k52);}
		else if (cjemput==23){printf("%s\n",k53); strcpy(Jemput,k53);}
		else if (cjemput==24){printf("%s\n",k54); strcpy(Jemput,k54);}
		else if (cjemput==25){printf("%s\n",k55); strcpy(Jemput,k55);}
	}
	else if((jemput=='N')||(jemput=='n')){
		printf("Tidak Dijemput\n");
	}
	
	return 0;
}

int Validasi2(){
	printf("\n============================================\n");
	printf("===============VALIDASI AKHIR===============\n");
	printf("============================================\n");
	C_Penerbangan();
	C_Kelas_Kabin();
	C_Penjemputan();
	printf("============================================\n");
	
	return 0;	
}

int Pembayaran(){
	printf("\n\n=========================\n");
	printf("========PEMBAYARAN=======\n");
	printf("=========================\n");
	printf("Sub Total   : Rp. %d\n", subtotal2);
	printf("Penjemputan : Rp.   %d\n", biayajemput);
	total=subtotal2+biayajemput;
	printf("Total       : Rp. %d\n", total);
	printf("=========================\n");
	Q:
	printf("Pembayaran  : Rp. ");
	scanf("%d", &bayar);
	
	if(bayar>=total){
		kembali=bayar-total;
	}
	else {
		printf("Uang Pemabayaran Kurang !\n");
		goto Q;
	}
	
	printf("=========================\n");
	printf("Total       : Rp. %d\n", total);
	printf("Bayar       : Rp. %d\n", bayar);
	printf("Kembali     : Rp. %d\n", kembali);
	printf("=========================\n");
	system("pause");
	system("cls");
	
	return 0;		
}

int Proses(){
	int i;
	
	for(i=1;i<=3;i++){
		system("cls");
		printf("E-Tiket Sedang di Proses\n\n");
		printf("Please Wait.");
		Sleep(750);
		
		system("cls");
		printf("E-Tiket Sedang di Proses\n\n");
		printf("Please Wait..");
		Sleep(750);
		
		system("cls");
		printf("E-Tiket Sedang di Proses\n\n");
		printf("Please Wait...");
		Sleep(750);
		
		system("cls");
		printf("E-Tiket Sedang di Proses\n\n");
		printf("Please Wait....");
		Sleep(750);
	}
	
	return 0;
}

int E_Tiket(){
	system("cls");
	printf("================================================================================");
	printf("Penumpang     : %s (%d Tahun)\n",nama,umur);
	printf("================================================================================");
	printf("Tipe Tiket    : %s\n",TIKET);
	printf("================================================================================");
	switch (tipe){
		case 1:
			printf("Keberangkatan : %d %s %d\n",tanggal1, Bulan1, tahun1);
			break;
		case 2:
			printf("Keberangkatan : %d %s %d\n",tanggal1, Bulan1, tahun1);
			printf("Kepulangan    : %d %s %d\n",tanggal2, Bulan2, tahun2);
			break;
	}
	printf("================================================================================");
	printf("Destinasi     : %s - %s\n",Asal,Tujuan);
	printf("================================================================================");
	printf("%s (%s)",Maskapai,Kabin);
	printf("\t\t\tPenjemputan di %s\n",Jemput);
	printf("================================================================================");
	printf("\t\t\t\t\t\tTotal : Rp. %d\n",total);
	printf("================================================================================\n");
	
	return 0;
}

int Thanx(){
	printf("\n\nTerimakasih Telah Berkunjung\n");
	
	return 0;
}

void main(){
	B:
	Harga();			//Pemberian Harga
	Input();			//input Nama dan Umur
	Perjalanan();		//input Asal dan Tujuan
	Tiket();			//input Jenis Tiket (One Way / Return)
	Hitung();			//hitung Pembiayaan
	Validasi1();
	
	D:
	printf("Apakah Data Anda Sesuai ? (Y/N) : ");
	scanf(" %c",&valid1);
	if		((valid1=='Y')||(valid1=='y')){
		goto A;
		}
	else if ((valid1=='N')||(valid1=='n')){
		printf("============================\n");
		printf("1. Batal\n");
		printf("2. Mengisi Kembali Dari Awal\n");
		printf("============================\n");
		C:
		printf("Silakan Pilih : ");
		scanf("%d", &pilih);
		printf("============================\n");
		
		switch (pilih){
			case 1: 
				goto Z;
				break;
			case 2:
				goto B;
				break;
			default:
				printf("\nPilihan Tidak Sesuai !\n");
				goto C;	
		}
	}
	else	{	
		printf("\nInput Tidak Sesuai !\n");
		goto D;
	}
		
	
	A:
	printf("==================================================\n");
	Penerbangan();		//input Maskapai Penerbangan
	Kelas_Kabin();		//input Kelas Kabin
	Penjemputan();
	Validasi2();
	
	G:
	printf("Apakah Data Anda Sesuai ? (Y/N) : ");
	scanf(" %c",&valid2);
	if		((valid2=='Y')||(valid2=='y')){
		goto E;
		}
	else if ((valid2=='N')||(valid2=='n')){
		printf("==========================================\n");
		printf("1. Batal\n");
		printf("2. Mengisi Kembali Dari Maskapai Penerbagn\n");
		printf("==========================================\n");
		F:
		printf("Silakan Pilih : ");
		scanf("%d", &pilih);
		printf("==========================================\n");
		
		switch (pilih){
			case 1: 
				goto Z;
				break;
			case 2:
				goto A;
				break;
			default:
				printf("\nPilihan Tidak Sesuai !\n");
				goto F;	
		}
	}
	else	{	
		printf("\nInput Tidak Sesuai !\n");
		goto G;
	}
	
	E:
	Pembayaran();
	Proses();
	E_Tiket();
	
	Z:
	Thanx();
	system("pause");
}
