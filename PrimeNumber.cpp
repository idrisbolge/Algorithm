
//#include <iostream>
using namespace std;

//kullanıcının girdiği değeri sayi parametresiyle asal sayıları bulup asal dizisine atadık
void asalsayilar(int asal[],int sayi)
{
	int kontrol=0,sayac=0,syc=0;
	//for döngüsü 2'den sayiya kadar saydırıp diğer for ile bölünebilirliği test ettik
	for (int i = 2; i < sayi; i++)
	{
		
		kontrol=0;
		for (int j = 2; j < i; j++)
		{
			//eğer modu sıfır ise kontrol değişkenini 1' e eşitledik
			if (i%j==0)
				kontrol=1;
		}
		//eğer yukarda kontrol değişkeni hiç bire eşit olmamış ise asal sayı olacağı için bu if'de diziye atadık
		if (kontrol==0)
		{
			//burdaki sayacın amacı dizinin indisini 0'dan başlatıp asal sayı buldukça sayacı artırıp eşitledik
			//yani asal[0]=2 yi bulduk ondan sonraki için sayacı bir artırdık
			//asal[1]=3 olacak ve böylece indis tek tek artacak.
			asal[sayac]=i;
			sayac++;
		}
	}
}

void main()
{
	//Kullanıcının bir değer girmesini istiyoruz
	int sayi=0;
	cout<<"Lutfen bir tam sayi giriniz :  ";
	cin>>sayi;
	//bir asal sayi dizisi oluşturduk yukarıdaki fonkisyondan asal sayıları burda tutmayı amaçladık
	int asalsayi[100];
	asalsayilar(asalsayi,sayi);

	//sayi1 değişkeni toplamda olan ilk asal sayıyı temsil ediyor
	//sayi2 değişkeni toplamda olan ikinci asal sayıyı temsil ediyor
	//sayi3 değişkeni toplamda olan üçüncü asal sayıyı temsil ediyor
	//toplam ise sayi1,sayi2,sayi3 değişkenlerinin toplamını tutacak 
	int sayi1=0,sayi2=0,sayi3=0,toplam=0;


	/*  
	aşağıdaki işlemlerde ise ilk for döngüsünde toplam değişkenini 0 olarak eşitliyoruz nedeni ise sıfırlama yapmadığımız takdirde
	toplam değişkeni git gide artacak ve genellikle sonucu bulamayacaktır . Ardından sayi1 değişkenimize asalsayi dizimizin ilk indisini
	alıyoruz.
	ardından 2. for döngümüzde ise i+1 indisten başlatıp sayi2 değişkenini eşitliyoruz aynısını 3.for için kullanacağız
	Sonrasında ise toplam değişkenini hesaplıyoruz eğer toplam değişkeni kullanıcının girdiği sayıya eşit ekrana yazdırılıyor
	Eğer toplam değişkeni girilen değere eşit değilse döngü tek tek döndürülüyor. Böylece tek tek asal sayilar kontrol ediliyor.
	*/
	for (int i = 0; i < sayi; i++)
	{
		toplam=0;
		sayi1=asalsayi[i];
		for (int j = i+1; j < sayi; j++)
		{
			sayi2=asalsayi[j];
			for (int k = j+1; k < sayi; k++)
			{
				sayi3=asalsayi[k];

				toplam=sayi1+sayi2+sayi3;
				if (toplam==sayi)
				{
					cout<<toplam<<"="<<sayi1<<"+"<<sayi2<<"+"<<sayi3<<endl;			
				}
			}
		}
	}
system(	"pause");
}