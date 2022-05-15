#include "../puntaje.h"
#include "gtest/gtest.h"

// Escribir tests aca:
TEST(puntajeTest, menorA10MultiploDe3) {
    int x = 9;
    int result = puntaje(x);
    EXPECT_EQ(result, 28);
}

TEST(puntajeTest, menorA10NOMultiploDe3) {
    int x = 8;
    int result = puntaje(x);
    EXPECT_EQ(result, 6);
}

TEST(puntajeTest, mayorA10MultiploDe3) {
    int x = 12;
    int result = puntaje(x);
    EXPECT_EQ(result, 22);
}

TEST(puntajeTest, mayorA10NOMultiploDe3) {
    int x = 13;
    int result = puntaje(x);
    EXPECT_EQ(result, 3);
}