#pragma once
#include <iostream>
#include <string>

bool IsKPeriodic(const std::string& str, int K)
{
	//проверка на кратность (multiplicity check)
	if ((str.size() % K) != 0)
	{
		std::cout << "String is not a multiple of: " << K << std::endl;
		return false;
	}
	//запись первых К символов из строки (writing the first K characters from a string)
	std::string pat = str.substr(0, K);
	
	int j = 0;
	//сверка оставшиеся символов по К едениц (checking the remaining symbols by K units)
	for (int  i = K; i < str.size(); ++i)
	{
		if (pat[j] == str[i])
		{
			j++;
			if (j == K)
				j = 0;
		}
		else
		{
			std::cout << "String is not a multiple of: " << K << std::endl;
			return false;
		}
	}
	std::cout << "String is a multiple of: " << K << std::endl;
	return true;
}

