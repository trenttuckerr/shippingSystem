// Program Name: TwoDayPackage.h
// Author: Trent Tucker
// Date: November 18, 2020

#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H
#include <iostream>
#include <iomanip>
#include "Package.h"
#include <string>
using namespace std;

class TwoDayPackage:public Package {
	private:
		double flatFee;
	public:
		TwoDayPackage(const string & sname, const string & saddress, const string & scity,
			      const string & sstate, const string & szip, const string & rname,
			      const string & raddress, const string & rcity, const string & rstate,
			      const string & rzip,
			      double w, double c, double f);
		void setFlatFee(double f);
		double getFlatFee() const;
		virtual double calculateCost() const;	
};
#endif
