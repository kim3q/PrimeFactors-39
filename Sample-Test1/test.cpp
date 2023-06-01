#include "pch.h"
#include "..\Project10/prime-factors.cpp"

using namespace std;

class PrimeFixture : public testing::Test
{
public:
	PrimeFactor prime_factor;
	vector<int> expected;
};

TEST_F(PrimeFixture, TestName) {
	expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}

TEST_F(PrimeFixture, TestName2) {
	expected = { 2 };
	EXPECT_EQ(expected, prime_factor.of(2));
}

TEST_F(PrimeFixture, TestName3) {
	expected = { 3 };
	EXPECT_EQ(expected, prime_factor.of(3));
}

TEST_F(PrimeFixture, TestName4) {
	expected = { 2, 2 };
	EXPECT_EQ(expected, prime_factor.of(4));
}

TEST_F(PrimeFixture, TestName6) {
	expected = { 2, 3 };
	EXPECT_EQ(expected, prime_factor.of(6));
}