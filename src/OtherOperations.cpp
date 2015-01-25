/*
 * OtherOperations.cpp
 *
 *  Created on: Jan 24, 2015
 *      Author: dmoses
 */

#include "OtherOperations.h"

namespace Wheatley {

double dotProduct(CVector Vector1, CVector Vector2) {

	return (Vector1.XComponent * Vector2.XComponent) + (Vector1.YComponent * Vector2.YComponent);
}


} /* namespace Wheatley */
