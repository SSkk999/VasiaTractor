using namespace std;
#include <iostream>
//class drob {
//private:
//
//		int numerator;
//		int  denominator;
//
//
//
//
//public:
//	
//	drob():numerator(0), denominator(0) {}
//	drob(int num,int num1) :numerator(num), denominator(num1) {}
//
//
//	void show() {
//		cout << this->numerator << "\n";
//		cout <<"-" << "\n";
//		cout << this->numerator << "\n";
//	}
//
//	drob operator+(const drob& others)const
//	{
//		drob st3;
//		st3.numerator = this->numerator * others.denominator + others.numerator * this->denominator;
//		st3.denominator = this->denominator * others.denominator;
//		return st3;
//
//	}
//	drob operator-(const drob& others)const
//	{
//		drob st3;
//		st3.numerator = this->numerator * others.denominator - others.numerator * this->denominator;
//		st3.denominator = this->denominator * others.denominator;
//		return st3;
//	}
//	drob operator*(const drob& others)const
//	{
//		drob st3;
//		st3.numerator = this->numerator * others.denominator;
//		st3.denominator = this->denominator * others.numerator;
//		return st3;
//	}
//	drob operator/(const drob& others)const
//	{
//		drob st3;
//		st3.numerator = this->numerator * others.numerator;
//		st3.denominator = this->denominator * others.denominator;
//		return st3;
//
//	}
//};

class comple {
private:

	int numerator;
	int  denominator;




public:

	comple() :numerator(0), denominator(0) {}
	comple(int num,int num1) :numerator(num), denominator(num1) {}
	comple operator+(const comple& others)const
	{
		comple st3;
		st3.numerator = this->numerator + others.numerator;
		st3.denominator = this->denominator + others.denominator;
		return st3;

	}
	comple operator-(const comple& others)const
	{
		comple st3;
		st3.numerator = this->numerator - this->numerator;
		st3.denominator = this->denominator - others.denominator;
		return st3;
	}
	comple operator*(const comple& others)const
	{
		comple st3;
		st3.numerator = (this->numerator * others.numerator - this->denominator * others.denominator )  + (this->numerator * others.denominator - this->denominator * others.numerator);
		st3.denominator = this->denominator * others.numerator;
		return st3;
	}
	comple operator/(const comple& others)const
	{
		comple st3;
		st3.numerator = (this->numerator * this->denominator) * (others.numerator - others.denominator);
		st3.denominator = (others.numerator * others.denominator) * (others.numerator - others.denominator);
		return st3;

	}

		void show() {
		cout << this->numerator <<"+" << this->numerator << "\n";

	}




};












int main()
{
	comple sd(23,4);
	comple sd2(23, 10);
	comple sd3 = sd + sd2;
	sd3.show();
}