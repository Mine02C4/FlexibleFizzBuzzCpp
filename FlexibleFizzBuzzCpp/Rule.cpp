#include "Rule.h"

std::string Rule::Apply(int n)
{
	return "";
}

MultipleRule::MultipleRule(std::string word, int multiple)
{
	word_ = word;
	multiple_ = multiple;
}

std::string MultipleRule::Apply(int n)
{
	std::string result = "";
	if (n % multiple_ == 0) {
		result = word_;
	}
	return result;
}
