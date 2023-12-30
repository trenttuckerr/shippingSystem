// Program Name: TwoDayPackage.cpp
// Author: Trent Tucker
// Date: November 20, 2020

#include <iostream>
#include <iomanip>
#include <string>
#include "TwoDayPackage.h"
using namespace std;

TwoDayPackage::TwoDayPackage(const string & sname, const string & saddress, const string & scity,
                              const string & sstate, const string & szip, const string & rname,
                              const string & raddress, const string & rcity, const string & rstate,
                              const string & rzip,
                              double w, double c, double f) {
	senderName = sname;
	senderAddress = saddress;
	senderCity = scity;
	senderState = sstate;
	senderZip = szip;
	recipientName = rname;
	recipientAddress = raddress;
	recipientCity = rcity;
	recipientState = rstate;
	recipientZip = rzip;
	weight = w;
	costPerOunce = c;
	flatFee = f;
}

void TwoDayPackage::setFlatFee(double f) {
	if(f > 0) {
	   flatFee = f;
	}
	else {
		throw invalid_arugment("flat fee must be positive.");
	}
}

double TwoDayPackage::getFlatFee() {
	return flatFee;
}

double TwoDayPackage::calculateCost() {
	return weight * costPerOunce + flatFee;
}
