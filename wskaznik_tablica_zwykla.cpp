#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;
int main(){
	int *wsk;
	int tab[10]={5,4,3,7,8,9,4,2,1,3};
	wsk = &tab[0];
    for(wsk=wsk; *wsk<10; wsk++)
    {
    	cout<<*wsk<<endl;		
	}
	
	
	
}
