#include "FizzBuzz.h"

FizzBuzz::~FizzBuzz()
{
	for (auto r : rules_) {
		delete r;
	}
}

void FizzBuzz::AddRule(Rule* rule)
{
	rules_.push_back(rule);
}

std::string FizzBuzz::Apply(int n)
{
	std::string result = "";
	for (auto r : rules_) {
		result += r->Apply(n);
	}
	if (result == "") {
		result += std::to_string(n);
	}
	return result;
}
