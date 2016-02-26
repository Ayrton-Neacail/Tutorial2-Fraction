#include <iostream>


using namespace std;

// Class Declaration Defined

class Fraction{

private:
	double a, b, c;

public:
	int AnsAdd, AnsSubtract, AnsMultiply, AnsDivide;
	double  getNumDenom();
	void setNumDenom(double, double);
	Fraction add(Fraction, Fraction);
	Fraction subtract(Fraction, Fraction);
	Fraction  multiply(Fraction, Fraction);
	Fraction  divide(Fraction, Fraction);
	void print();


};

// setNumDenom Will Assign A value to the private member Denom 
void Fraction::setNumDenom(double num, double denom){

	a = num;
	b = denom;
	if (b = 0){

		cout << "you entered an invalid value as the denominator" << endl;

	}
}

double Fraction::getNumDenom(void){
	cout << "the fractions are being generated" << endl;
	return a, b;
}

Fraction  Fraction::add(Fraction  F1, Fraction F2){


	AnsAdd = (F1 + F2);
	return AnsAdd;


}

Fraction Fraction::subtract(Fraction F1, Fraction F2){
	AnsSubtract = (F1 - F2);

	return AnsSubtract;



}

Fraction Fraction::multiply(Fraction F1, Fraction F2){
	AnsMultiply = ((F1*F2))




}

Fraction Fraction::divide(Fraction F1, Fraction F2){

	AnsDivide = ((A / B) / (C / B));

	return AnsDivide;



}


void Fraction::print(){


	cout << "the sum of" << A << "/" << B << "is" endl;
	cout << << endl;
	cout << << endl;
	cout << << endl;
}





int main(){
	double A, B, C;


	Fraction MyFrac;
	Fraction F1, F2;
	Fraction AnsAdd, AnsSubtract, AnsMultiply, AnsDivide;

	cout << "Please input your Numerator";

	cin >> A;

	cout << "Please input the Denominator" << endl;

	cin >> B;

	cout << "Please input the numerator for the second fraction" << endl;

	cin >> C;

	F1.setNumDenom(A, B);
	F2.setNumDenom(C, B);

	AnsAdd = MyFrac.add(F1, F2);

	AnsSubtract = MyFrac.subtract(F1, F2);

	AnsMultiply = MyFrac.multiply(F1, F2);

	AnsDivide = MyFrac.divide(F1, F2);

	MyFrac.print();




	return 0;
