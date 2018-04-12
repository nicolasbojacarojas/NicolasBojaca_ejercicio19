#include <iostream>
using std::cout;
using std::endl;
float f(float x, float y);
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
	for (int i = 0; i < N; i++)
	{
		k1 = h*f(x + h, y);
		k2 = h*f(x + h/2, y+(h/2*k1));
		k3 = h*f(x + h/2, y+(h/2*k2));
		k4 = h*f(x + h, y+(h*k3));
		y = y + (h*(k1 + 2*k2 + 2*k3 + k4)/6);
		x = x + h;
		cout << x << " "<< y << endl; 
	}
}
float f(float x, float y)
{
	return -y;
}	
