#include <cstdio>

#include <iostream>

#include "FizzBuzz.h"

int main()
{
	using namespace std;
	FizzBuzz fizzBuzz;
	fizzBuzz.AddRule(new MultipleRule("Fizz", 3));
	fizzBuzz.AddRule(new MultipleRule("Buzz", 5));
	fizzBuzz.AddRule(new AtleastOneOfDigitRule("Nine", 9));
	fizzBuzz.AddRule(new AllDigitsSameRule("Same"));

	for (int i = 1; i <= 100; i++) {
		cout << fizzBuzz.Apply(i) << endl;
	}
	getchar(); // 一時停止用
	return 0;
}

