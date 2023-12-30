// Program Name: Package.cpp
// Author: Trent Tucker
// Date: November 18, 2020

#include <iostream>
#include <iomanip>
#include "Package.h"
using namespace std;

        Package::Package(const string & sname, const string & saddress, const string & scity, const string & sstate, const string & szip,
                         const string & rname, const string & raddress, const string & rcity, const string & rstate, const string & rzip,
                         double w, double c) {
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
	}

	string Package::getSenderName() const {
		return senderName;
	}
        void Package::setSenderName(const string & sn) {
		senderName = sn;
	}

        string Package::getSenderAddress() const {
		return senderAddress;
	}
        void Package::setSenderAddress(const string & sa) {
		senderAddress = sa;
	}

        string Package::getSenderCity() const {
		return senderCity;
	}
        void Package::setSenderCity(const string & sc) {
		senderCity = sc;
	}

        string Package::getSenderState() const {
		return senderState;
	}
        void Package::setSenderState(const string & ss) {
		senderState = ss;
	}

        string Package::getRecipientName() const {
		return recipientName;
	}
        void Package::setRecipientName(const string & rn) {
		recipientName = rn;
	}

        string Package::getRecipientAddress() const {
		return recipientAddress;
	}
        void Package::setRecipientAddress(const string & ra) {
		recipientAddress = ra;
	}

        string Package::getRecipientCity() const {
		return recipientCity;
	}
        void Package::setRecipientCity(const string & rc) {
		recipientCity = rc;
	}

        string Package::getRecipientState() const {
		return recipientState;
	}
        void Package::setRecipientState(const string & rs) {
		recipientState = rs;
	}

        string Package::getRecipientZip() const {
		return recipientZip;
	}
        void Package::setRecipientZip(const string & rz) {
		recipientZip = rz;
	}

	double Package::getWeight() const {
		return weight;
	}
	void Package::setWeight(const double & wt) {
		if(wt > 0) {
			weight = wt;
		}
		else {
			throw invalid_argument("weight must be positive");
		}
	}

	double Package::getCostPerOunce() const {
		return costPerOunce;
	}
	
	void Package::setCostPerOunce(const double & cpo) {
		if(cpo > 0) {
			costPerOunce = cpo;
		}
		else {
			throw invalid_argument("cost per ounce must be positive.");
		}
	}

        double Package::calculateCost() const {
		return weight * costPerOunce;
	}

