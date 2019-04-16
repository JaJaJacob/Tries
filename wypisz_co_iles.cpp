#include <iostream>
using namespace std;
int main(){
	int tab[10];
	for(int i=0; i<10; i++)
	{
		cin>>tab[i];
	}
	int j;
	printf("Podaj liczbe co ile elementow ma sie wypisywac: ");
	scanf("%d", &j);
	cout<<"Tablica co iles litery: ";
	for(int i=0; i<10; i+=j){
		cout<<tab[i];
	}
}
