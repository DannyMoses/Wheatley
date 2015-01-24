/*
 * CVector.h
 *
 *  Created on: Jan 23, 2015
 *      Author: dmoses
 */
#include <cmath>

#pragma once

#define PI 3.14159265

namespace Wheatley {

class CVector {


public:
	double XComponent;
	double XTheta;
	double YComponent;
	double YTheta;
	double Magnitude;
	double Theta;

	CVector();
	virtual ~CVector();

	double getMagnitude() const {
		return Magnitude;
	}

	void setMagnitude(double magnitude) {
		Magnitude = magnitude;
	}

	double getTheta() const {
		return Theta;
	}

	void setTheta(double theta) {
		Theta = theta;
	}

	double getXComponent() const {
		return XComponent;
	}

	void setXComponent(double component) {
		XComponent = component;
	}

	double getXTheta() const {
		return XTheta;
	}

	void setXTheta(double theta) {
		XTheta = theta;
	}

	double getYComponent() const {
		return YComponent;
	}

	void setYComponent(double component) {
		YComponent = component;
	}

	double getYTheta() const {
		return YTheta;
	}

	void setYTheta(double theta) {
		YTheta = theta;
	}

	double toRadian(double angle) {
		return angle * PI / 180.0;
	}

	CVector operator + (const CVector&);

	CVector operator - (const CVector&);

	CVector operator = (const CVector&);

	void GetComponents();

};

} /* namespace MVector */

