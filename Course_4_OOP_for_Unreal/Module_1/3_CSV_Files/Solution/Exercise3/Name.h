// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include <string>

/**
 * A name
*/
class Name
{
private:
	std::string FirstName;
	std::string MiddleName;
	std::string LastName;

public:
	/**
	 * Constructor
	 * @param FirstName first name
	 * @param MiddleName middle name
	 * @param LastName last name
	*/
	Name(std::string FirstName, std::string MiddleName, 
		std::string LastName);

	/**
	 * Gets the first name
	 * @return first name
	*/
	std::string GetFirstName();

	/**
	 * Gets the middle name
	 * @return middle name
	*/
	std::string GetMiddleName();

	/**
	 * Gets the last name
	 * @return last name
	*/
	std::string GetLastName();
};

