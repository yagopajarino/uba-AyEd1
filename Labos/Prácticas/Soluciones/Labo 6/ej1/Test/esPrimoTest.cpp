#include "gtest/gtest.h"
#include "../esPrimo.h"

TEST(EsPrimoTest, NumeroPrimo) {
    // setup
    int n = 7;
    //exercise
    bool result = esPrimo(n);
    // check
    EXPECT_TRUE(result);
}

TEST(EsPrimoTest, NumeroCompuesto) {
    // setup
    int n = 6;
    //exercise
    bool result = esPrimo(n);
    // check
    EXPECT_FALSE(result);
}

TEST(EsPrimoTest, CasoBorde) {
    // setup
    int n = 0;
    //exercise
    bool result = esPrimo(n);
    // check
    EXPECT_FALSE(result);
}
