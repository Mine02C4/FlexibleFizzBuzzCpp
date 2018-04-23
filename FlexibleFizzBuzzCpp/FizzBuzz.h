#ifndef FLEXIBLEFIZZBUZZCPP_FIZZBUZZ_H_
#define FLEXIBLEFIZZBUZZCPP_FIZZBUZZ_H_

#include <vector>
#include <string>

#include "Rule.h"

class FizzBuzz
{
public:
	~FizzBuzz();
	void AddRule(Rule* rule);
	std::string Apply(int n);
private:
	std::vector<Rule*> rules_;
};

#endif // !FLEXIBLEFIZZBUZZCPP_FIZZBUZZ_H_

