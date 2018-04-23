#ifndef FLEXIBLEFIZZBUZZCPP_RULE_H_
#define FLEXIBLEFIZZBUZZCPP_RULE_H_

#include <string>

class Rule
{
public:
	virtual std::string Apply(int n);
protected:
	std::string word_;
private:
};

class MultipleRule : public Rule
{
public:
	MultipleRule(std::string word, int multiple);
	std::string Apply(int n) override;
private:
	int multiple_;
};

class AtleastOneOfDigitRule : public Rule
{
public:
	AtleastOneOfDigitRule(std::string word, int digit);
	std::string Apply(int n) override;
private:
	int digit_;
};

#endif // !FLEXIBLEFIZZBUZZCPP_RULE_H_

