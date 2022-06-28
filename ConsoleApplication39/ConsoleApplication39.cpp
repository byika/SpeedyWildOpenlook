#include <iostream>
using namespace std;

int main()
{

	int height = 0; // высота треугольника
	int step = 0;

	cout << "BblCOTA: ";
	cin >> height;
	cout << "KOLBO YAPYCOB: ";
	cin >> step;
	for (int k = 0; k < step; k++) {
		for (int i = 0; i < height; i++)
		{
			for (int j = 1; j < height - i; j++)
			{
				cout << "  ";
			}
			for (int j = k ; j <= height; j++)
			{
				cout << "  ";
			}
			for (int j = (height - 2 * i) - (2 * k); j <= height; j++)
			{
				cout << "<>";
			}
			cout << "\n";
		}
	}

	for (int i = 0; i < height / 2; i++) {
		for (i = 0; i < height + step ; i++) {
			cout << "  ";
		}
		for (int j = 1; j  < step ; j++) {
			cout << "<>";
		}
		cout << "\n";
	}

}