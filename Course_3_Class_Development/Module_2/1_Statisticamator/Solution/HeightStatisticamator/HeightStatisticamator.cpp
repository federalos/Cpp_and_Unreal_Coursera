// Copyright A.T. Chamillard. All Rights Reserved.

#include <iostream>
#include <vector>

int GetValidInteger(int LowerBound, int UpperBound);
float AverageIntegerVector(const std::vector<int>& Values);
int FindExtremeInIntegerVector(int MinOrMax, const std::vector<int>& Values);

const int Min{ 0 };
const int Max{ 1 };

/**
 * Height Statisticamator solution
 * @return exit status
*/
int main()
{
	std::vector<int> Heights;

	// find out how many heights to read in (1-100)
	int NumScores = GetValidInteger(1, 100);

	// read in that many heights
	for (int i = 0; i < NumScores; i++)
	{
		Heights.push_back(GetValidInteger(1, 96));
	}

	// calculate average and find extremes
	float Average = AverageIntegerVector(Heights);
	int MinValue = FindExtremeInIntegerVector(Min, Heights);
	int MaxValue = FindExtremeInIntegerVector(Max, Heights);

	// print average and extremes
	std::cout << "Average: " << Average << "\n";
	std::cout << "Min Value: " << MinValue << "\n";
	std::cout << "Max Value: " << MaxValue << "\n";
}

/**
 * Gets an integer between lower and upper bounds, inclusive
 * @param LowerBound lower bound
 * @param UpperBound upper bound
 * @return integer between lower and upper bounds
*/
int GetValidInteger(int LowerBound, int UpperBound)
{
	int Value;
	std::cin >> Value;
	while (Value < LowerBound ||
		Value > UpperBound)
	{
		std::cin >> Value;
	}
	return Value;
}

/**
 * Calculates the average of the values in the given vector
 * @param Values vector of values
 * @return average of the values
*/
float AverageIntegerVector(const std::vector<int>& Values)
{
	int Sum = 0;
	for (int Value : Values)
	{
		Sum += Value;
	}
	return (float)Sum / Values.size();
}

/**
 * Finds the min or max value in the given vector
 * @param MinOrMax whether to find min or max
 * @param Values vector of values
 * @return min or max value
*/
int FindExtremeInIntegerVector(int MinOrMax, const std::vector<int>& Values)
{
	// assumes Values isn't empty
	int ExtremeValue = Values[0];
	if (MinOrMax == Min)
	{
		for (int Value : Values)
		{
			if (Value < ExtremeValue)
			{
				ExtremeValue = Value;
			}
		}
	}
	else
	{
		// looking for max
		for (int Value : Values)
		{
			if (Value > ExtremeValue)
			{
				ExtremeValue = Value;
			}
		}
	}
	return ExtremeValue;
}
