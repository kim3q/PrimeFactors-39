#include "pch.h"
#include "..\Project10/prime-factors.cpp"

using namespace std;

TEST(TestCaseName, TestName) {
	PrimeFactor prime_factor;
	vector<int> expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}

TEST(TestCaseName, TestName2) {
	PrimeFactor prime_factor;
	vector<int> expected = {2};
	EXPECT_EQ(expected, prime_factor.of(2));
}