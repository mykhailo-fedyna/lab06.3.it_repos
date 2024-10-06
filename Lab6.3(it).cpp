// lab6.3(it).cpp
#include <iostream>
#include <iomanip>
using namespace std;
void Input(int* k, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "k[" << i << "] = ";
		cin >> k[i];
	}
	cout << endl;
}
void Print(int* k, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << k[i];
	cout << endl;
}
int main()
{
	const int n = 6;
	int k[n];
	Input(k, n);
	Print(k, n);
	return 0;
}
