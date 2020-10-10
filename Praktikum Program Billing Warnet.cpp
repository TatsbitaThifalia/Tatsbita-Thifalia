#include <iostream>
#include <conio.h>
using namespace std;
int main()
 {
	int a,b,c,x,y,z,d,e,f,g,h,i,T;
	cout<<endl;
	cout<<"============================== SELAMAT DATANG DI TATSBITA WARNET ==============================\n";
	cout<<"      ========================== Tatsbita Thifalia 20051397027 ===========================";
	cout<<endl;
	cout<<endl;
	cout<<"                                 # PERIKSA BILLING DISINI # \n";
	cout<<endl;
	cout<<"                                    ~ Mulai bermain pada ~ \n";
	cout<<"     Jam   = ";cin>>a;
	cout<<"     Menit = ";cin>>b;
	cout<<"     Detik = ";cin>>c;
	cout<<endl;
	cout<<"                                   ~ Selesai bermain pada ~ \n";
	cout<<"     Jam   = ";cin>>x;
	cout<<"     Menit = ";cin>>y;
	cout<<"     Detik = ";cin>>z;
	cout<<endl;
	d=x-a;
	e=y-b;
	f=z-c;
	cout<<"                                    ~ Durasi bermain anda ~\n";
	cout<<"     Jam   = "<<d<<endl;
	cout<<"     Menit = "<<e<<endl;
	cout<<"     Detik = "<<f<<endl;
	g = d * 5000;
	h = e * 83;
	i = f * 1;
	T = g + h + i; cout<<"\n                                   $ TOTAL BIAYA = Rp."<<T;
	cout<<endl;
	cout<<endl;
	cout<<"============================== TERIMAKASIH DAN SAMPAI JUMPA LAGI ==============================\n";
	cout<<"               =================================================================";
getch();
}
