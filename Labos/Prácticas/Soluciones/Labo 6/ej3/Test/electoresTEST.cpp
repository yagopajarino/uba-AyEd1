#include "../electores.h"
#include "gtest/gtest.h"

TEST(electores, YagoEdad) {
    int res = validarVotante(1997,8,11);
    EXPECT_EQ(res, 2);
}

TEST(electores, noVota) {
int res = validarVotante(2021,1,25);
EXPECT_EQ(res, 0);
}

TEST(electores, opcionalMenor) {
    int res = validarVotante(2005,1,13);
    EXPECT_EQ(res, 1);
}

TEST(electores, obligado) {
    int res = validarVotante(1970,12,25);
    EXPECT_EQ(res, 2);
}

TEST(electores, opcionalMayor) {
    int res = validarVotante(1940,2,4);
    EXPECT_EQ(res, 3);
}

TEST(electores, fechaInvalidaAño) {
    int res = validarVotante(2150,2,4);
    EXPECT_EQ(res, 4);
}

TEST(electores, fechaInvalidaMes) {
    int res = validarVotante(1980,13,4);
    EXPECT_EQ(res, 4);
}

TEST(electores, fechaInvalidaDia) {
    int res = validarVotante(1980,13,33);
    EXPECT_EQ(res, 4);
}