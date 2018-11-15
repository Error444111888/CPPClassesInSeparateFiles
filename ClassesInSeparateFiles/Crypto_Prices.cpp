
#include "Crypto_Prices.h"
#include <string>
#include <iostream>

using namespace std;


//Below colons says basically one function is a member of that class//
Crypto_Prices::Crypto_Prices()
{
	double RayLTC = 100.1;
	double SusanLTC = 200.1;
	double ClaudiaLTC = 300.1;

	double Total_LTC = RayLTC + SusanLTC + ClaudiaLTC;

	cout << Total_LTC << endl;
}


Crypto_Prices::~Crypto_Prices()
{
}