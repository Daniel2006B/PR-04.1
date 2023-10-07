#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double R;
	double x;
	double y;

	cout << "R = ";
	cin >> R;

	cout << "x = ";
	cin >> x;

	cout << "y = ";
	cin >> y;

	if ((x >= 0 && x <= R && y >= 0 && y <= R) ||
		(-R <= x && 0 >= x && -R <= y && 0 >= y) ||
		(y >= 0 && x <= 0 && (x * x + y * y <= R * R)) ||
		(x >= 0 && y <= 0 && (x * x + y * y <= R * R)))
		cout << "Yes" << endl;

	else
		cout << "No" << endl;

	return 0;
}

