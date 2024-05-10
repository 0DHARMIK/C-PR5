#include <iostream>

using namespace std;
main()
{
	int a;
	
	cout<<"Enter age =";
	cin>>a;
	
	try{
		if(a>18)
		{
			cout<<"you are eligible to vote ="<<endl;
		}
		else
		{
			throw 18;
		}
	}
	catch(int a)
	{
		cout<<"you are not eligble to vote"<<endl;
	}
}