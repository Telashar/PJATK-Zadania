#include <iostream>
using namespace std;
  
	int main() 
{
		int n;
		cout << "Slawomir Rudnicki" << endl;
		cout << "s32193" << endl;
		cout << "PJATK" << endl;
		cout << "Podaj liczbe n:  " << endl;
		cin >> n;
		
		if (n>0 && n%2==0)
		{
		cout << "Liczba parzysta, dodatnia" << endl;
		}
		
		if (n < 0 && n%2 == 0)
		{
		cout << "Liczba parzysta, ujemna" << endl;
		}
		
		if (n == 0)
		{
		cout << "Zero" << endl;
		}
		
		if (n<0 && n%2 != 0)
		{
		cout << "Liczba nieparzysta, ujemna" << endl;
		}
		
		if (n>0 && n%2 != 0)
		{
		cout << "Liczba nieparzysta, dodatnia" << endl;
		}

		int x, y, z;

		cout << "Podaj liczbe 1, x: " << endl;
		cin >> x;
		
		cout << "Podaj liczbe 2, y: " << endl;
		cin >> y;
		
		cout << "Podaj liczbe 3, z: " << endl;
		cin >> z;
		
		if (x>y&&x>z)
		{
			cout << "X=";
			cout << x;
			cout << " jest najwieksza liczba wsrod podanych" << endl;
		}
		if (y > x && y > z)
		{
			cout << "y=";
			cout << y;
			cout << " jest najwieksza liczba wsrod podanych" << endl;
		}

		if (z > y && z > x)
		{
			cout << "z=";
			cout << z;
			cout << " jest najwieksza liczba wsrod podanych" << endl;
		}
		
		return 0;
		
};

