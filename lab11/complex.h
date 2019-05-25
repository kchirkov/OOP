#ifndef COMPLEX_H
#define COMPLEX_H
struct Complex {
	double re, im;
	void init(double r, double i) {
		re = r;
		im = i;
	}
	void add(Complex c);
	void min(Complex c);
	void umn(Complex c);
	void del(Complex c);
};
#endif
