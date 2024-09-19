// Copyright A.T. Chamilklard. All Rights Reserved.

#include <iostream>
#include <vector>

/**
 * Exercise 12
 * @return exit status
*/
int main()
{
	int NumScores;
	std::vector<int> Scores;

	// Problem 1

	// get valid number of scores
	std::cout << "Number of scores to enter: ";
	std::cin >> NumScores;
	while (NumScores <= 0)
	{
		std::cout << "\n";
		std::cout << "You must enter at least one score\n";
		std::cout << "Number of scores to enter: ";
		std::cin >> NumScores;
	}
	std::cout << "\n";

	// read in scores
	for (int i = 0; i < NumScores; i++)
	{
		// prompt for and get valid test score
		int Score = 0;
		std::cout << "Enter score " << i + 1 << " (0-100): ";
		std::cin >> Score;
		while (Score < 0 || Score > 100)
		{
			std::cout << "\n";
			std::cout << "Score must be between 0 and 100\n";
			std::cout << "Enter score " << i + 1 << " (0-100): ";
			std::cin >> Score;
		}
		Scores.push_back(Score);
	}

	// Problem 2

	// find min and max scores
	int Min = Scores[0];
	int Max = Scores[0];
	for (int Score: Scores)
	{
		if (Score < Min)
		{
			Min = Score;
		}
		if (Score > Max)
		{
			Max = Score;
		}
	}

	// print min and max
	std::cout << "\n";
	std::cout << "Min score entered: " << Min << "\n";
	std::cout << "Max score entered: " << Max << "\n";
}
