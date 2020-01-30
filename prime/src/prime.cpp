#include <iostream>
using namespace std;

int main()
{
		int a = 2;       //start from 2
		long long int b = 1000;     //ends at 1000

		for (int i = a; i <= b; i++)
		{

				for (int j = 2; j <= i; j++)
				{
						if (!(i%j)&&(i!=j))    //Condition for not prime
						{
								break;
						}

						if (j==i)             //condition for Prime Numbers
						{
								cout << i << endl;

						}
				}
		}
}
