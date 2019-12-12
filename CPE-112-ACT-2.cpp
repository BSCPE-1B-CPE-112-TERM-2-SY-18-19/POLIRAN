
#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	
class andrea{
	public:
		int x,y,z;
		void twovarswapping();
		void threevarswapping();
};

int main() {
	andrea poliran;
	poliran.twovarswapping();
	poliran.threevarswapping();
	return 0;
}

void andrea::twovarswapping()
{
	cout<<"TWO VARIABLE"<<endl<<"X:";
	cin>>x;
	cout<<"Y:";
	cin>>y;
	y=x+y;
	x=y-x;
	y=y-x;
	cout<<"SWAP"<<endl<<"X:"<<x<<endl<<"Y:"<<y<<endl;
}


void andrea::threevarswapping()
{
	cout<<endl<<"THREE VARIABLE"<<endl<<"X:";
	cin>>x;
	cout<<"Y:";
	cin>>y;
	cout<<"Z:";
	cin>>z;
	x=x+y+z;
	y=x-y-z;
	z=x-y-z;
	x=x-(y+z);
	cout<<"SWAP"<<endl<<"X:"<<x<<endl<<"Y:"<<y<<endl<<"Z:"<<z;
}
