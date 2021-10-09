#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double S, s;
	int k, n;

	S = 0;
	k = 1;
	while (k <= 10)
	{
		s = 0;
		n = 1;
		while (n <= k)
		{
			s += sin(k * n);
			n++;
		}
		S += s * 1.0 / k;
		k++;
	}
	cout << S << endl;

	S = 0;
	k = 1;
	do
	{
		s = 0;
		n = 1;
		do {
			s += sin(k * n);
			n++;
		} while (n <= k);
		S += s * 1.0 / k;
		k++;
	} while (k <= 10);
	cout << S << endl;

	S = 0;
	for (k = 1; k <= 10; k++)
	{
		s = 0;
		for (n = 1; n <= k; n++)
		{
			s += sin(k * n);
		}
		S += s * 1.0 / k;
	}
	cout << S << endl;

	S = 0;
	for (k = 10; k >= 1; k--)
	{
		s = 0;
		for (n = k; n >= 1; n--)
		{
			s += sin(k * n);
		}
		S += s * 1.0 / k;
	}
	cout << S << endl;
	
	return 0;
}