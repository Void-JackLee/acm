#include<iostream>

using namespace std;

int main()
{
	cout << 5000 << " " << 100 << endl;
	int k = -1000;
	for (int i = 0;i < 2500;i ++)
	{
		cout << k << " ";
		if (i % 4 == 0 || i % 5 == 0) k ++;
	}
	for (int i = 0;i < 2500;i ++)
	{
		cout << k << " ";
		if (i % 4 == 0 || i % 5 == 0) k ++;
	}
	cout << endl;
	return 0;
}
