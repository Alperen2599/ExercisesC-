/*
 * BIL122 - HW02 
 * Ilk Sinif Calismasi
 */


 /*
	 !!!!!!!!!!!!!!!! BU DOSYADA DEGISIKLIK YAPMAYINIZ !!!!!!!!!!!!!!!!!!!!!!
 */

#include <iostream>
#include <sstream>
#include <string>
#include"rectangularPrism.h"

using namespace std;

// Disaridan arguman alan main fonksiyon
int main(int argc, char *argv[])
{
	// arguman kontrolleri
	if (argc <= 1 || argc > 4)
	{
		cout << "KULLANIM: app.exe width height length" << endl;
		cout << "Ornek: app.exe 3 45 67" << endl;
		return 0;
	}

	double w, h, l; // en, boy ve yukseklik icin degiskenler

	stringstream ss;
	
	ss << argv[1];
	if (!(ss >> w))
	{
		cout << "Hatali arguman:w" << endl;
		return -1;
	}

	ss.clear();
	ss << argv[2];
	if (!(ss >> h))
	{
		cout << "Hatali arguman:h" << endl;
		return -1;
	}

	ss.clear();
	ss << argv[3];
	if (!(ss >> l))
	{
		cout << "Hatali arguman:l" << endl;
		return -1;
	}

	//Degisken nesne icin test
	RectangularPrism p1(w, h, l); // eger w, h, l degerlerinden biri sifir veya kucukse "Boyutlar 0\'dan buyuk olmalidir." yazar ve cikar
	cout << "W: " << p1.getWidth() << " H: " << p1.getHeight() << " L: " << p1.getLength() << endl; //prizmanin boyutlari ekrana yazdiriliyor
	cout << "A: " << p1.surfaceArea() << endl; //dikdortgen prizmanin yuzey alani
	cout << "V: " << p1.volume() << endl; // prizmanin hacmi
	cout << "# # # # # # # # # # # #" << endl;
	p1.setDimensions(w * 2, l * 2, h * 2); // boyut degerlerini kontrol eder, hatali deger varsa false yoksa true degeri doner
	cout << "W: " << p1.getWidth() << " H: " << p1.getHeight() << " L: " << p1.getLength() << endl;
	cout << "A: " << p1.surfaceArea() << endl;
	cout << "V: " << p1.volume() << endl;
	cout << "# # # # # # # # # # # #" << endl;

	RectangularPrism p2(w, h); // eger w, h, l degerlerinden biri sifir veya kucukse "Boyutlar 0\'dan buyuk olmalidir." yazar ve cikar. l degeri varsayilan 1'dir.
	cout << "W: " << p2.getWidth() << " H: " << p2.getHeight() << " L: " << p2.getLength() << endl; //prizmanin boyutlari ekrana yazdiriliyor
	cout << "A: " << p2.surfaceArea() << endl; //dikdortgen prizmanin yuzey alani
	cout << "V: " << p2.volume() << endl; // prizmanin hacmi
	cout << "# # # # # # # # # # # #" << endl;
	p2.setDimensions(w * 2, l * 2, h * 2); // boyut degerlerini kontrol eder, hatali deger varsa false yoksa true degeri doner
	cout << "W: " << p2.getWidth() << " H: " << p2.getHeight() << " L: " << p2.getLength() << endl;
	cout << "A: " << p2.surfaceArea() << endl;
	cout << "V: " << p2.volume() << endl;
	cout << "# # # # # # # # # # # #" << endl;

	RectangularPrism p3(w); // eger w, h, l degerlerinden biri sifir veya kucukse "Boyutlar 0\'dan buyuk olmalidir." yazar ve cikar.  l ve h degerleri varsayilan 1'dir.
	cout << "W: " << p3.getWidth() << " H: " << p3.getHeight() << " L: " << p3.getLength() << endl; //prizmanin boyutlari ekrana yazdiriliyor
	cout << "A: " << p3.surfaceArea() << endl; //dikdortgen prizmanin yuzey alani
	cout << "V: " << p3.volume() << endl; // prizmanin hacmi
	cout << "# # # # # # # # # # # #" << endl;
	p3.setDimensions(w * 2, l * 2, h * 2); // boyut degerlerini kontrol eder, hatali deger varsa false yoksa true degeri doner
	cout << "W: " << p3.getWidth() << " H: " << p3.getHeight() << " L: " << p3.getLength() << endl;
	cout << "A: " << p3.surfaceArea() << endl;
	cout << "V: " << p3.volume() << endl;
	cout << "# # # # # # # # # # # #" << endl;

	p3 = RectangularPrism(); // eger w, h, l degerlerinden biri sifir veya kucukse "Boyutlar 0\'dan buyuk olmalidir." yazar ve cikar. w, l ve h degerleri varsayilan 1'dir.
	cout << "W: " << p3.getWidth() << " H: " << p3.getHeight() << " L: " << p3.getLength() << endl; //prizmanin boyutlari ekrana yazdiriliyor
	cout << "A: " << p3.surfaceArea() << endl; //dikdortgen prizmanin yuzey alani
	cout << "V: " << p3.volume() << endl; // prizmanin hacmi
	cout << "# # # # # # # # # # # #" << endl;
	p3.setDimensions(w * 2, l * 2, h * 2); // boyut degerlerini kontrol eder, hatali deger varsa false yoksa true degeri doner
	cout << "W: " << p3.getWidth() << " H: " << p3.getHeight() << " L: " << p3.getLength() << endl;
	cout << "A: " << p3.surfaceArea() << endl;
	cout << "V: " << p3.volume() << endl;
	cout << "# # # # # # # # # # # #" << endl;
	
	p1.setWidth(w * 2);		//eger deger sifir veya kucukse mevcut deger degismez. Siniftaki ilgili veri uyesinin mevcut degerini donderir
	p1.setHeight(h * 2);	//eger deger sifir veya kucukse mevcut deger degismez. Siniftaki ilgili veri uyesinin mevcut degerini donderir
	p1.setLength(l * 2);	//eger deger sifir veya kucukse mevcut deger degismez. Siniftaki ilgili veri uyesinin mevcut degerini donderir
	cout << "W: " << p1.getWidth() << " H: " << p1.getHeight() << " L: " << p1.getLength() << endl;
	cout << "A: " << p1.surfaceArea() << endl;
	cout << "V: " << p1.volume() << endl;
	cout << "# # # # # # # # # # # #" << endl;

	//Sabit nesne icin test
	const RectangularPrism p4(w, h, l);
	cout << "W: " << p4.getWidth() << " H: " << p4.getHeight() << " L: " << p4.getLength() << endl;
	cout << "A: " << p4.surfaceArea() << endl;
	cout << "V: " << p4.volume() << endl;
	cout << "# # # # # # # # # # # #" << endl;

	return 0;
}
