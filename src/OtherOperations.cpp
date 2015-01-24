/*
 * OtherOperations.cpp
 *
 *  Created on: Jan 24, 2015
 *      Author: dmoses
 */

#include "OtherOperations.h"

namespace Wheatley {

double dotProduct(CVector Vector1, CVector Vector2) {

	return Vector1.Magnitude * Vector2.Magnitude * (Vector2.Theta - Vector1.Theta);
}


} /* namespace Wheatley */
