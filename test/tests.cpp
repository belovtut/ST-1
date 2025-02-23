#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(checkPrimeTest, HandlesZeroAndOne) {
	EXPECT_FALSE(checkPrime(0));
	EXPECT_FALSE(checkPrime(1));
}

TEST(checkPrimeTest, HandlesSmallPrimes) {
	EXPECT_TRUE(checkPrime(2));
	EXPECT_TRUE(checkPrime(3));
	EXPECT_TRUE(checkPrime(5));
	EXPECT_TRUE(checkPrime(7));
}

TEST(checkPrimeTest, HandlesNonPrimes) {
	EXPECT_FALSE(checkPrime(4));
	EXPECT_FALSE(checkPrime(6));
	EXPECT_FALSE(checkPrime(8));
	EXPECT_FALSE(checkPrime(9));
	EXPECT_FALSE(checkPrime(65536));
}

TEST(checkPrimeTest, HandlesLargePrimes) {
	EXPECT_TRUE(checkPrime(104729));
	EXPECT_FALSE(checkPrime(104730));
}

TEST(nPrimeTest, HandlesFirstPrimes) {
	EXPECT_EQ(nPrime(1), 2);
	EXPECT_EQ(nPrime(2), 3);
	EXPECT_EQ(nPrime(3), 5);
	EXPECT_EQ(nPrime(4), 7);
}

TEST(nPrimeTest, HandlesLargeN) {
	EXPECT_EQ(nPrime(10), 29);
	EXPECT_EQ(nPrime(50), 229);
}

TEST(nPrimeTest, HandlesVeryLargeN) {
	EXPECT_EQ(nPrime(100), 541);
	EXPECT_EQ(nPrime(1000), 7919);
}

TEST(nextPrimeTest, HandlesSmallNumbers) {
	EXPECT_EQ(nextPrime(4), 5);
	EXPECT_EQ(nextPrime(10), 11);
	EXPECT_EQ(nextPrime(11), 13);
	EXPECT_EQ(nextPrime(29), 31);
}

TEST(nextPrimeTest, HandlesLargeNumbers) {
	EXPECT_EQ(nextPrime(7919), 7927);
	EXPECT_EQ(nextPrime(1000003), 1000033);
}

TEST(nextPrimeTest, HandlesEdgeCases) {
	EXPECT_EQ(nextPrime(0), 2);
	EXPECT_EQ(nextPrime(1), 2);
}

TEST(sumPrimeTest, HandlesSmallBounds) {
	EXPECT_EQ(sumPrime(10), 17);
	EXPECT_EQ(sumPrime(20), 77);
}

TEST(sumPrimeTest, HandlesLargeBounds) {
	EXPECT_EQ(sumPrime(50), 328);
	EXPECT_EQ(sumPrime(100), 1060);
}

TEST(sumPrimeTest, HandlesVeryLargeBounds) {
	EXPECT_EQ(sumPrime(1000), 76127);
	EXPECT_EQ(sumPrime(10000), 5736396);
}

TEST(sumPrimeTest, HandlesEdgeCases) {
	EXPECT_EQ(sumPrime(2), 0);
	EXPECT_EQ(sumPrime(3), 2);
}


TEST(st1, sumPrime1) {
	uint64_t res = sumPrime(2000000);
	uint64_t expected = 142913828922;
	EXPECT_EQ(expected, res);
}
TEST(st1, sumPrime2) {
	uint64_t res = sumPrime(10);
	uint64_t expected = 17;
	EXPECT_EQ(expected, res);
}
