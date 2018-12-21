#include <iostream>

#define MAX_FIBO 4000000

using namespace std;

int main()
{

	int i = 1;
	int prepre = 1, pre = 2;
	int actualValue = 2;
	
	long long acum = 2;
	while (actualValue <= MAX_FIBO) {
	
		actualValue = pre + prepre;
		prepre = pre;
		pre = actualValue;
		if (actualValue % 2 == 0) {
			acum += actualValue;
		}
	}
	cout << "La suma de los valores pares es: " << acum << endl;

	cin >> acum;

	return 0;
}

