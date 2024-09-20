// Copyright A.T. Chamillard. All Rights Reserved.

#include <iostream>

#include "Matherator.h"

int Matherator::GetNthEvenNumber(const int& N)
{
	return 2 * N;
}

int Matherator::GetTenthEvenNumber()
{
	return GetNthEvenNumber(10);
}

void Matherator::PrintMToN(const int& M, const int& N) const
{
	for (int iter = M; iter <= N; iter++) {
		std::cout << iter << ' ';
	}
	std::cout << '\n';
}

void Matherator::PrintOneToTen() const
{
	PrintMToN(1, 10);
}
