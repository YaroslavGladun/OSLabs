#include <iostream>
#include <cmath>
using namespace std;

#define EPS 10e-12

typedef long double ld;
typedef long long ll;


int main()
{
	ld A = 11, B = 21;
	ld c = (B - A) / 100000;
	for (ld x = A; x < B; x += c)
	{
		ld temp = 0, func_x = 0;
		ll k = 1;
		do
		{
			temp = (1 / (2 * (ld)k + 1)) * pow((x - 1) / (x + 1), 2 * (ld)k + 1);
			func_x += temp;
			k += 1;
		} while (abs(temp) > EPS);
		cout << "func(" << x << ") = " << 20 * func_x << endl;
	}

	return 0;
}