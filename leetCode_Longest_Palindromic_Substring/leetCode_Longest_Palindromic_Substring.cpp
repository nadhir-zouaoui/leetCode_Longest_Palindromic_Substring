// leetCode_Longest_Palindromic_Substring.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <unordered_map>
#include <string>


std::string longestPalindrome(std::string s) {
	int sLength = s.size();
	int max=0;
	int length = 0;
	std::string res;
	for (int i = 0; i < sLength && length< sLength-i ; i++)
	{
		for (int j = sLength-1; j >= i; j--)
		{
			 length = j - i+1;
			int v = 1;
			for (size_t z = i; z <= (i + j) / 2; z++)
			{
				if (s[z] != s[j - z+i]) {
					v = 0;
					break;
				}
			}
			if (v== 1 && length > max)
			{
				res = s.substr(i,j-i+1);
				max = length;
			}
		}
	}
	return res;
}
int main()
{
	std::cout<< longestPalindrome("cbbd");
}


