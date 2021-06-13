#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <math.h>
#include <Windows.h>

void tach_byte(int x)
{
	uint8_t high = x / 256;
	uint8_t low = x % 256;
	printf("0x%x 0x%x", high, low);
}

class quadratic_equation {
private:
	float a, b, c, d, D,x1,x2;
public:
	void set_values(float A, float B, float C);
	float findD();
	void check(float D);
};
void quadratic_equation::set_values(float A, float B, float C)
{
	a = A;
	b = B;
	c = C;
}
float quadratic_equation::findD()
{
	float D;
	D = sqrt((b*b) - (4 * a*c));
	return D;
}


void quadratic_equation::check(float D)
{
	if (D > 0)
	{
		x1 = ((-b / (2 * a)) + (D / (2 * a)));
		x2 = ((-b / (2 * a)) - (D / (2 * a)));
		printf("x1 = %f\r\n", x1);
		printf("x2 = %f\r\n", x2);
	}
	else if (D == 0)
	{
		x1 = (-b) / (2 * a);
		printf("x1=x2 = %f", x1);
	}
	else
	{
		printf("phuong trinh vo nghiem");
	}
}




int main()
{
	// tach bit
	/*int x = 0x1234;
	tach_byte(x);*/

	//giai pt bac 2
	quadratic_equation x;
	x.set_values(1, 3, 9);
	float D = x.findD();
	x.check(D);
	
	return 0;
	   
}
