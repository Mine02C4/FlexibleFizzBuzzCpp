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

AllDigitsSameRule::AllDigitsSameRule(std::string word)
{
	word_ = word;
}

std::string AllDigitsSameRule::Apply(int n)
{
	std::string result = "";
	auto num_str = std::to_string(n);
	auto c = num_str[0];
	for (int i = 1; i < num_str.length(); i++) {
		if (num_str[1] != c) {
			break;
		}
		if (i == num_str.length() - 1) {
			result += word_;
		}
	}
	return result;
}
