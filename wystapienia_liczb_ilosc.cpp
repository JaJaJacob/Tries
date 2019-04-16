#include <iostream>
using namespace std;
int main(){
	int tab[100];
	printf("ilosc elementow: ");
	int pod;
	scanf("%d", &pod);
	for(int i=0; i<pod; i++)
	{
		cin>>tab[i];
	}
	int wynik;
	wynik = 0;
	printf("szukana wartosc: ");
	int f;
	scanf("%d", &f);
	for(int i=0; i<pod; i++)
		if(tab[i]==f)
			wynik++;
	cout<<"wystepuje tyle razy:";
	cout<<wynik;
}
