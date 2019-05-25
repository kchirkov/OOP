#include "pch.h"
#include "complex.h"
#include <cmath>

void Complex::add(Complex c)
{
	re += c.re;
	im += c.im;
}
void Complex::min(Complex c)
{
	re -= c.re;
	im -= c.im;
}
void Complex::umn(Complex c)
{
	double t = re;
	re = re * c.re - im * c.im;
	im = t * c.im + im * c.re;
}
void Complex::del(Complex c)
{
	double t = re;
	re = (re*c.re + im * c.im) / (c.re*c.re + c.im*c.im);
	im = (im*c.re - t * c.im) / (c.re*c.re + c.im*c.im);
}