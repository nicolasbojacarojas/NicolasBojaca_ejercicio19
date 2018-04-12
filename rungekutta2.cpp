#include <iostream>
using std::cout;
using std::endl;
float f(float x, float y);
float fz(float x, float y, float z);
int main()
{
	float h = 0.1;
	float y = 1;
	float x = 0;
	int N = 10/h;
	float k1;
	float k2;
	float k3;
	float k4;
	float k1z;
	float k2z;
	float k3z;
	float k4z;
	float z = 0;
	float z1;
	float y1;
	for (int i = 0; i < N; i++)
	{
		k1 = h*f(x+h, y);
		k2 = h*f(x + h/2, y+(h/2*k1));
		k3 = h*f(x + h/2, y+(h/2*k2));
		k4 = h*f(x + h, y+(h*k3));
		y = y + (h*(k1 + 2*k2 + 2*k3 + k4)/6);
		x = x + h;
		y1 = y;
		k1z = h*fz(x+h, y1, z);
		k2z = h*fz(x+h/2, y1, z+(h/2*k1));
		k3z = h*fz(x+h/2, y1, z+(h/2*k2));
		k4z = h*fz(x+h, y1, z+(h*k3));
		z = z + (h*(k1z + 2*k2z + 2*k3z + k4z)/6);
		cout << z << " " << x << endl;
	}
}
float fz(float x, float y, float z)
{
	return -y;
}
float f(float x, float y)
{
	return -y;
}	
