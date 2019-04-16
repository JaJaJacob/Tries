#include <iostream>
using namespace std;
int main(){
	int tab[10];
	for(int i=0; i<10; i++)
	{
		cin>>tab[i];
	}
	cout<<"Tablica co dwie litery: ";
	for(int i=0; i<10-1; i++){
		i++;
		cout<<tab[i];
	}
}
