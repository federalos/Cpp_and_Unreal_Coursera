// Copyright A.T. Chamillard. All Rights Reserved.

#include <iostream>

std::string GetValidBirthMonth();
bool IsValidMonth(std::string Month);
int GetValidBirthDay(std::string Month);
bool IsValidDay(int Day, std::string Month);
void PrintReminder(std::string Month, int Day);
int GetPreviousMonthLastDay(std::string Month);
std::string GetPreviousMonth(std::string Month);

/**
 * Exercise 9 solution
 * @return exit status
*/
int main()
{
	// Problem 1 - Birthday Fun
	std::string Month = GetValidBirthMonth();
	int Day = GetValidBirthDay(Month);
	std::cout << '\n';
	std::cout << "You were born on " << Day <<
		" " << Month << '\n';

	// Problem 2 - Reminders
	PrintReminder(Month, Day);
}

/**
 * Gets a valid birth month
 * @return valid birth month
*/
std::string GetValidBirthMonth()
{
	std::string BirthMonth;
	std::cout << "Enter your birth month (Jan, Feb, etc): ";
	std::cin >> BirthMonth;
	while (!IsValidMonth(BirthMonth))
	{
		std::cout << '\n';
		std::cout << "Month must be valid 3-letter abbreviation!\n";
		std::cout << "Enter your birth month (Jan, Feb, etc): ";
		std::cin >> BirthMonth;
	}
	return BirthMonth;
}

/**
 * Tells whether or not the given month is a valid month
 * @param Month month
 * @return true if the givem month is a valid month,
 *     false otherwise
*/
bool IsValidMonth(std::string Month)
{
	return Month == "Jan" ||
		Month == "Feb" ||
		Month == "Mar" ||
		Month == "Apr" ||
		Month == "May" ||
		Month == "Jun" ||
		Month == "Jul" ||
		Month == "Aug" ||
		Month == "Sep" ||
		Month == "Oct" ||
		Month == "Nov" ||
		Month == "Dec";
}

/**
 * Gets a valid birth day for the given month
 * @param Month month
 * @return valid birth day for the given month
*/
int GetValidBirthDay(std::string Month)
{
	int BirthDay;
	std::cout << "Enter your birth day: ";
	std::cin >> BirthDay;
	while (!IsValidDay(BirthDay, Month))
	{
		std::cout << '\n';
		std::cout << "Day must be valid for your birth month!\n";
		std::cout << "Enter your birth day: ";
		std::cin >> BirthDay;
	}
	return BirthDay;
}

/**
 * Tells whether or not the given day is valid for
 * the given month
 * @param Day day
 * @param Month month
 * @return true if the given day is valid for the
 *     given month, false otherwise
*/
bool IsValidDay(int Day, std::string Month)
{
	if (Month == "Jan" ||
		Month == "Mar" ||
		Month == "May" ||
		Month == "Jul" ||
		Month == "Aug" ||
		Month == "Oct" ||
		Month == "Dec")
	{
		return Day >= 1 && Day <= 31;
	}
	else if (Month == "Apr" ||
		Month == "Jun" ||
		Month == "Sep" ||
		Month == "Nov")
	{
		return Day >= 1 && Day <= 30;
	}
	else if (Month == "Feb")
	{
		return Day >= 1 && Day <= 28;
	}
	else
	{
		// should never get here
		return false;
	}
}

/**
 * Prints the day a reminder will be sent for the
 * birthday on the given month and day
 * @param Month month
 * @param Day day
*/
void PrintReminder(std::string Month, int Day)
{
	std::cout << "A reminder will be sent on ";
	if (Day != 1)
	{
		std::cout << (Day - 1);
	}
	else
	{
		std::cout << GetPreviousMonthLastDay(Month);
	}
	std::cout << " " << GetPreviousMonth(Month) << '\n';;
}

/**
 * Gets the last day of the month before the given month
 * @param Month month
 * @return last day of previous month
*/
int GetPreviousMonthLastDay(std::string Month)
{
	if (Month == "May" ||
		Month == "Jul" ||
		Month == "Oct" ||
		Month == "Dec")
	{
		return 30;
	}
	else if (Month == "Jan" ||
		Month == "Feb" ||
		Month == "Apr" ||
		Month == "Jun" ||
		Month == "Aug" ||
		Month == "Sep" ||
		Month == "Nov")
	{
		return 31;
	}
	else if (Month == "Mar")
	{
		return 28;
	}
	else
	{
		// should never get here
		return -1;
	}
}

/**
 * Gets the month previous to the given month
 * @param Month month
 * @return previous month
*/
std::string GetPreviousMonth(std::string Month)
{
	// Becuase I know I'll never add code to any
	// of the clauses below, I've omitted the
	// { and } for each clause to shorten the function
	if (Month == "Jan")
		return "Dec";
	else if (Month == "Feb")
		return "Jan";
	else if (Month == "Mar")
		return "Feb";
	else if (Month == "Apr")
		return "Mar";
	else if (Month == "May")
		return "Apr";
	else if (Month == "Jun")
		return "May";
	else if (Month == "Jul")
		return "Jun";
	else if (Month == "Aug")
		return "Jul";
	else if (Month == "Sep")
		return "Aug";
	else if (Month == "Oct")
		return "Sep";
	else if (Month == "Nov")
		return "Oct";
	else if (Month == "Dec")
		return "Nov";
	else
	{
		// should never get here
		return "Invalid Month";
	}
}
