#include <iostream>
using namespace std;
// Class Declaration
class Fraction{

private:
	float a, b, c;

public:
	
	void getNumDenom();
	void setNumDenom(float);
	float add(float, float, float);
	float subtract();
	float multiply();
	float divide();
	void printf();


};

// setNumDenom Will Assign A value to the private member Denom 
void Fraction::setNumDenom(float Denom){

	a = Denom;
}

void Fraction::getNumDenom(){

	return a;
}

float Fraction::add(float A,float B,float C){




}

float Fraction::subtract(){




}

float Fraction::multiply(){



}

float Fraction::divide(){




}


void Fraction::printf(){



}





int main(){
	Fraction MyFrac;
	float La = 0, Lb = 0, Lc = 0, LDenom=0;
	cout << "Please input your denominator" << endl;
	cin >> La >> Lb >> Lc >> LDenom;

	MyFrac.setNumDenom(LDenom);




	return 0;
}