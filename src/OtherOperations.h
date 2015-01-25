/*
 * OtherOperations.h
 *
 *  Created on: Jan 24, 2015
 *      Author: dmoses
 */

#pragma once

#include "CVector.h"
#include <cmath>

namespace Wheatley {

/** returns the dot product of two two dimensional cartesian vectors by adding the products of their respective
 * x and y components
 * @param Vector1 the first vector
 * @param Vector2 the second vector
 * @return the dot product of the two vectors
 *
 */
double dotProduct(CVector Vector1, CVector Vector2);


} /* namespace Wheatley */


