#include<iostream>
using namespace std;

class fibonacci
{
	long inp,sum,a,b;

	public: fibonacci()
	{
		
		inp = 0;
		sum = 1;
		a=0;
		b=1;
	}

	void input()
	{
		cout<<"Enter the number of terms you wanna' print upto"<<endl;
		cin>>inp;
	}
	
	void display()
	{
		if(inp==1)
		{
			cout<<"0";
		}
		else if(inp==2)
		{
			cout<<"0 1";
		}
		else
		{
			cout<<a<<" "<<b;
			for (long i=0;i<inp;i++)
			{
				sum = a+b;
				if((i%10)==0)
					cout<<" "<<sum<<endl;
					else cout<<" "<<sum;
				a=b;
				b=sum;
			}
			cout<<endl;
		}
	}
};

int main()
{
	fibonacci ob;
	ob.input();
	ob.display();
}
