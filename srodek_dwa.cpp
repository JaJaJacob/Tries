	#include <iostream>
	#include <vector>
	#include <string>
	#include <fstream>
	using namespace std;
	int main(){
		int f;
		cin>>f;
		int tab[f];
	    for(int i=0; i<f; i++)
	    {
	    	cin>>tab[i];
		}
		printf("Central number/ or two central numbers if " "f" " is even: \n");
		int reszta = f%2;
		int niep = f/2;
		if(reszta == 0){
	    cout<<tab[f/2-1];
	    cout<<tab[f/2];
		}else if(f == 1)
		{
			cout<<tab[0];
		}else if(reszta == 1 || reszta == 2)
		{
			cout<<tab[niep];
		}
	}
		
		

