#include <iostream>



int main()
{
/*int adet; //�nceden b�yle yapm��t�k ayn� neticeyi ��kt� ekran�nda alm��t�k
std::cout<<"Kac eleman gireceksiniz"<<std::endl; 
std::cin>>adet;
int dizi[adet];

for(int i=0;i<adet;i++){
	std::cin>>dizi[i];
}
for(int i=0;i<adet;i++){
	std::cout<<dizi[i]<<std::endl;
}*/

int adet =0;
std::cout<<"Kac eleman gireceksiniz ";
std::cin>>adet;
int* dizi=new int[adet];//int dizii i�in bellekte yer ay�rd�k o y�zden k��eli parantez kulland�k

for(int i=0;i<adet;i++){
	std::
	cin>>dizi[i];
}	
for(int i=0;i<adet;i++){
std::cout<<dizi[i]<<std::endl;
}
std::cout<<dizi[0]<<std::endl;  // daha delete etmeden buraya kadar yazar bunu da yaza 
delete[] dizi;  // diziyi delete ettik 
std::cout<<dizi[0]; // bunu yazamaz delete ettik diziyi bellekte yok art�k
	
	
  return 0;
}

