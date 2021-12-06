#include <stdio.h>
#include <conio.h>
#include <cstdlib>
#include <iostream>
using namespace std;
class Otomat{
	int Adet,Fiyat;
	public:
		void UrunVer(int F=1,int A=10);
		
};
void Otomat::UrunVer(int F,int A)   // iþlemin gerceklesmesý ýcýn kodlarý yazýyoruz 
{   
	Adet=A;
	Fiyat=F;
	int Sec,Al,Ucret,Ust,Kalan;
	cout<<"1- KEK"<<endl;
	cout<<"2- KOLA"<<endl;
	cout<<"3- SU"<<endl;
	cin>>Sec;
	
	switch (Sec)
{
	 case 1:
	{
    	cout << "Adeti girin:"<<endl;
    	cin>>Al;
    	
    	cout << "ucreti girin:"<<endl;
    	cin>>Ucret;
    	
    	Kalan=Al-Adet;
    	Ust=Al*Fiyat-Ucret;
    	
    	if(Al<=10|| Al>0 && Ust>0)
		{
	    cout<<"Kalan Kek Adeti:"<<Kalan<<endl;
    	cout<<"Para Ustunuz:"<<Ust<<endl;
    	
		}
        else
		{
        	cout<<"otomatta kek mevcut degil..."<<endl;
        }
    	
		break;
	}
	// KOLA 
		 case 2:
		 
    {
    	cout << "Kola Adeti girin:"<<endl;
    	cin>>Al;
    	
    	cout << "ucreti girin:"<<endl;
    	cin>>Ucret;
    	
    	Kalan=Al-Adet;
    	Ust=Al*Fiyat-Ucret;
    	
    	if(Al<=10|| Al>0 && Ust>0)
		{
	    cout<<"Kalan Kola Adeti:"<<Kalan<<endl;
    	cout<<"Para Ustunuz:"<<Ust<<endl;
    	
		}
        else
		{
        	cout<<"otomatta kola mevcut degil..."<<endl;
		}
    	
		break;
	}
	// Su  
		 case 3:{
    	cout << "Su Adeti girin:"<<endl;
    	cin>>Al;
    	
    	cout << "ucreti girin:"<<endl;
    	cin>>Ucret;
    	
    	Kalan=Al-Adet;
    	Ust=Al*Fiyat-Ucret;
    	
    	if(Al<=10|| Al>0 && Ust>0)
		{
	    cout<<"Kalan SU Adeti:"<<Kalan<<endl;
    	cout<<"Para Ustunuz:"<<Ust<<endl;
    	
		}
        else
		{
        	cout<<"otomatta Su mevcut degil..."<<endl;
		}
    	
		break;
	}
	 default:
            cout << "Yanlis secenek girdiniz."<<endl;    
}
system("pause");
}


int main()
{
	Otomat Ot;
	Ot.UrunVer();
	getch();
	
}

