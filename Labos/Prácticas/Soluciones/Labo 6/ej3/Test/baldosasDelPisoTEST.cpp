#include "../baldosasDelPiso.h"
#include "gtest/gtest.h"

// Escribir tests aca:
TEST(baldosasDelPiso, BDivMN){
    int result = baldosasDelPiso(4, 8, 2);
    EXPECT_EQ(result, 8);
}

TEST(baldosasDelPiso, BDivM){
    int result = baldosasDelPiso(6, 11, 2);
    EXPECT_EQ(result, 18);
}

TEST(baldosasDelPiso, BDivN){
    int result = baldosasDelPiso(5, 15, 3);
    EXPECT_EQ(result, 10);
}

TEST(baldosasDelPiso, BDivNull){
    int result = baldosasDelPiso(7, 9, 5);
    EXPECT_EQ(result, 4);
}

// Punto 3/4, test de caja blanca, el último del anterior cubre todas las sentencias y las ramas.
TEST(baldosasDelPisoCajaBlanca, unicoTest){
    int result = baldosasDelPiso(7, 9, 5);
    EXPECT_EQ(result, 4);
}
