#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int k, N;
	double S;

	cout << "k = "; cin >> k;
	cout << "N = "; cin >> N;

	S = 0;
	k = 1;

	while (k <= N)
	{
		S += (1 + sqrt(1 + k * k) / (k * k));
		k++;
	}
	cout << S << endl;

	S = 0;
	k = 1;

	do {
		S += (1 + sqrt(1 + k * k) / (k * k));
		k++;
	} while (k <= N);

	cout << S << endl;

	S = 0;

	for (k=1; k <= N; k++)
	{
		S += (1 + sqrt(1 + k * k) / (k * k));
	}
	cout << S << endl;

	S = 0;

	for (k=1;k >= N; k--)
	{
		S += (1 + sqrt(1 + k * k) / (k * k));
	}
	cout << S << endl;

	return 0;

}