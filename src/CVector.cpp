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
	Magnitude = 0.0;
	Theta = 0.0;
	XComponent = 0.0;
	XTheta = 0.0;
	YComponent = 0.0;
	YTheta = 0.0;

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

void CVector::GetComponents () {

	this->XComponent = this->Magnitude * cos(toRadian(this->Theta));
	this->YComponent = this->Magnitude * sin(toRadian(this->Theta));

}

} /* namespace MVector */


