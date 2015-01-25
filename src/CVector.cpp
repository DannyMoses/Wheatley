/*
 * CVector.cpp
 *
 *  Created on: Jan 23, 2015
 *      Author: dmoses
 */

#include "CVector.h"

namespace Wheatley {

CVector::CVector() {
	// TODO Auto-generated constructor stub
	CreateVector();
}

CVector::~CVector() {
	// TODO Auto-generated destructor stub
}

CVector CVector::operator+ (const CVector& param) {
  CVector temp;
  temp.XComponent = XComponent + param.XComponent;
  temp.YComponent = YComponent + param.YComponent;
  return temp;
}

CVector CVector::operator- (const CVector& param) {
	CVector temp;
	temp.XComponent = XComponent - param.XComponent;
	temp.YComponent = YComponent - param.YComponent;
	return temp;
}

CVector CVector::operator = (const CVector& param) {
	XComponent = param.XComponent;
	YComponent = param.YComponent;
	return *this;
}

void CVector::CalcComponents () {

	this->XComponent = this->Magnitude * cos(toRadian(this->Theta));
	this->YComponent = this->Magnitude * sin(toRadian(this->Theta));

}

void CVector::CalcMagnitude() {

	this->Magnitude = hypot(this->XComponent, this->YComponent);
}

void CVector::CalcTheta() {

	this->Theta = toDegree(atan2(this->YComponent, this->XComponent));
}

void CVector::CreateVector() {
	char input = '0';
	std::cout << "Length Form (magnitude @ angle) or coordinate form (x,y)?";
	std::cin >> input;
	if (input == 'l') {
		std::cout << "What is the magnitude of the vector?";
		std::cin >> this->Magnitude;
		std::cout << "What is the angle it makes with the x-axis?";
		std::cin >> this->Theta;
		CalcComponents();
	}
	else if (input == 'c') {
		std::cout << "What is the x component of the vector(x coordinate)?";
		std::cin >> this->XComponent;
		std::cout << "What is the y component of the vector(y coordinate)?";
		std::cin >> this->YComponent;
		CalcMagnitude();
		CalcTheta();
	}
	else {
		std::cout << "Invalid input try again.";
		delete this;
	}
}


} /* namespace Wheatley */


