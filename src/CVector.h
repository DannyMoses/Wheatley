/*
 * CVector.h
 *
 *  Created on: Jan 23, 2015
 *      Author: dmoses
 */
#include <cmath>
#include <iostream>
#include <string>

#pragma once

#define PI 3.14159265 /** The value of PI for this library, set to 8 decimal places */
#define FIRST_QUADRANT 1
#define SECOND_QUADRANT 2
#define THIRD_QUADRANT 3
#define FOURTH_QUADRANT 4
#define EAST 0
#define NORTH 90
#define WEST 180
#define SOUTH 270

/** The namespace for all the items in this library
 *
 */
namespace Wheatley {

class CVector {


public:
	/** The X component of the vector */
	double XComponent;
	/** The angle of between the X and Y components */
	double XTheta;
	/** The Y component of the vector */
	double YComponent;
	/** The angle between the Y component and the magnitude */
	double YTheta;
	/** the magnitude of the vector */
	double Magnitude;
	/** The angle the vector makes with the with the x-axis */
	double Theta;

	/** Default constructor for initializing a two dimensional cartesian vector
	 */
	CVector();
	/** Constructor for initializng a two dimensional cartesian vector with magnitude and direction
	 * @param magnitude the magnitude of the vector
	 * @param theta the direction of the vector
	 */

	/** Default destructor for deleting a two dimensional cartesian vector
	 */
	virtual ~CVector();

	/** returns the magnitude of the vector
	 * @return The magnitude of the vector */
	double getMagnitude() const {
		return Magnitude;
	}

	/** sets the magnitude of the vector
	 * @param magnitude the magnitude of the vector*/
	void setMagnitude(double magnitude) {
		Magnitude = magnitude;
	}

	/** gets the the angle the vector makes with the x-axis
	 * @return the angle the vector makes with the x-axis*/
	double getTheta() const {
		return Theta;
	}

	/** sets the angle made with the x-axis
	 * @param theta the angle the vector makes with the x-axis
	 */
	void setTheta(double theta) {
		Theta = theta;
	}

	/** gets the X component of the vector
	 * @return the X  component of the vector
	 */
	double getXComponent() const {
		return XComponent;
	}

	/** sets the X component of the vector
	 * @param component the X component of the vector
	 */
	void setXComponent(double component) {
		XComponent = component;
	}

	/** gets the angle between the X and Y components of the vector
	 * @return the angle between the X and Y components of the vector
	 */
	double getXTheta() const {
		return XTheta;
	}

	/** sets the angle between the X and Y components of the vector
	 *  @param theta the angle between the X and Y components of the vector
	 */
	void setXTheta(double theta) {
		XTheta = theta;
	}

	/** gets the Y component of the vector
	 * @return the Y component of the vector
	 */
	double getYComponent() const {
		return YComponent;
	}

	/** sets the Y component of the vector
	 * @param component the Y component of the vector
	 */
	void setYComponent(double component) {
		YComponent = component;
	}

	/** gets the angle between the Y component and the magnitude
	 * @return the angle between the Y component and the magnitude
	 */
	double getYTheta() const {
		return YTheta;
	}

	/** sets the angle between the Y component and the magnitude
	 * @param theta the angle between the Y component and the magnitude
	 */
	void setYTheta(double theta) {
		YTheta = theta;
	}

	/** converts an angle from degrees to radians
	 * @param angle the angle, in degrees, to be converted
	 * @return the angle in radians
	 */
	double toRadian(double angle) {
		return angle * PI / 180.0;
	}

	/** converts an angle from radians to degrees
	 * @param angle the angle, in radians, to be converted
	 * @return thhe angle in degrees
	 */
	double toDegree(double angle) {
		return angle * 180.0/PI;
	}

	/** adds the X and Y components of two vectors
	 *
	 */
	CVector operator + (const CVector&);

	/** subrtacts the X and Y components of two vectors
	 *
	 */
	CVector operator - (const CVector&);

	/** sets one vector equal to another
	 *
	 */
	CVector operator = (const CVector&);

	/** takes the magnitude and angle a vector makes with the x-axis and splits it into its X and Y components
	 *
	 */
	void CalcComponents();

	/** takes the x and y components and calculates the magnitude of the vector
	 *
	 */
	void CalcMagnitude();

	/** calculates the Theta value based on the x and y components of the vector by getting the arctan value
	 * from them
	 */
	void CalcTheta();

	/** creates the vector based on user input
	 *
	 */
	void CreateVector();

};

} /* namespace Wheatley */

