#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

double calc_cost(double baseCost = 100, double taxRate = 0.06, double shippingCharge = 3.50);

double calc_cost(double baseCost, double taxRate, double shippingCharge){
	return baseCost += (baseCost*taxRate) + shippingCharge;
}

void greeting(string name, string Prefix, string Suffix= " "){

	cout<<"Hello "<<Prefix + " "+name+" "+Suffix<<endl;
}

int main(int argc, char const *argv[])
{
	double cost = 0.00;
	cost = calc_cost(100.0,0.08,4.25);
	cout<<cost<<" this is the value of the cost"<<endl;

	double cost2 = 0.00;
	cost2 = calc_cost(100.0,0.08);
	cout<<cost2<<" this is the value of the cost"<<endl;

	//double cost3 = 0.00;
	double cost3 = calc_cost();
	cout<<cost3<<" this is the value of the cost"<<endl;

	greeting("Glenn","MR.","Juinor");
	greeting("Frank", "Professor");

	return 0;
}