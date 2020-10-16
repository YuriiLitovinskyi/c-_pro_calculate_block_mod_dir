#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int ppkNumber, block, module, direction;

	
	cout<<"Enter Ppk number: ";
	cin>>ppkNumber;
	
	cout<<"\n";
	
	while(cin.fail() || ppkNumber <= 0){
		cout<<"Error. Enter an integer value greater then 0!\n";
		cin.clear();
		cin.ignore(256,'\n');
		cin>>ppkNumber;
	};
	
	block = ceil(ppkNumber / 64) + (ppkNumber % 64 !=0);
	module = (ceil(ppkNumber / 8) + (ppkNumber % 8 !=0)) - ((ceil(ppkNumber / 64) + (ppkNumber % 64 !=0)) * 8 - 8);
	direction = ppkNumber - floor(ppkNumber / 8) * 8;
	
	if(direction == 0){
		direction += 8;
	};
	
	cout<<"Block: \t\t"<<block<<endl;
	cout<<"Module: \t"<<module<<endl;
	cout<<"Direction: \t"<<direction<<endl;
	
	cout<<"\n";	
	
	system("pause");
	return 0;
}
