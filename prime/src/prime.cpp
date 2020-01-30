#include <iostream>
using namespace std;

int main()  {
	int a = 2;
	long long int b = 1000;

	for (int i = a; i <= b; i++) {
		for (int j = 2; j <= i; j++) {
			if (!(i%j)&&(i!=j))  {
				break;
			}
			if (j==i) {
				cout << i << endl;
			}
   		}
	}
}
