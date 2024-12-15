#pragma once
#include <string>
#include <memory>

namespace vsite::oop::v5 
{
	
	class tire {
	public:
		tire(double d) : tireDiameter(d) {};
		double diameter();

	private:
		double tireDiameter;
	};

	class vehicle {
	public:
		vehicle(unsigned m) : manYear(m) {};		
		int year();

	private:
		unsigned manYear;
	};

	class product {
	public:
		product(double val) :value(val) {};
		double price();

	private:
		double value;
	};

	class car : public vehicle, public product {
	public:
		car(int m, double val, double d) : vehicle(m), product(val), T(d) {};
		double tire_diameter();

	private:
		tire T;
	};
		
	double operator"" _inch(unsigned long  long n);

	double operator"" _eur(unsigned long  long x);
}