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

AtleastOneOfDigitRule::AtleastOneOfDigitRule(std::string word, int digit)
{
	word_ = word;
	digit_ = digit;
}

std::string AtleastOneOfDigitRule::Apply(int n)
{
	std::string result = "";
	if (std::to_string(n).find(std::to_string(digit_)) != std::string::npos) {
		result = word_;
	}
	return result;
}
