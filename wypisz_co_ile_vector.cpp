#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector <int> mine;
	printf("How many values in vector?");
	int ins;
	scanf("%d", &ins);
	printf("Insert values into a vector: \n");
	int val;
	for(int i=0; i<ins; i++){
		cin>>val;
		mine.push_back(val);
	}
	printf("Spacing between them: (intiger value)");
	int space;
	scanf("%d", &space);
	printf("Result: \n");
	for(int i=0; i<mine.size(); i+=space)
	{
		cout<<mine[i];
	}
	return 0;
}
