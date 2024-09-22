// Copyright A.T. Chamillard. All Rights Reserved.

#include "Name.h"

/**
 * Constructor
 * @param FirstName first name
 * @param MiddleName middle name
 * @param LastName last name
*/
Name::Name(std::string FirstName, std::string MiddleName,
	std::string LastName)
{
	this->FirstName = FirstName;
	this->MiddleName = MiddleName;
	this->LastName = LastName;
}

/**
 * Gets the first name
 * @return first name
*/
std::string Name::GetFirstName()
{
	return FirstName;
}

/**
 * Gets the middle name
 * @return middle name
*/
std::string Name::GetMiddleName()
{
	return MiddleName;
}

/**
 * Gets the last name
 * @return last name
*/
std::string Name::GetLastName()
{
	return LastName;
}