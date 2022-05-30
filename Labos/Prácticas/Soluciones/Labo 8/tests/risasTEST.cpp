
#include "gtest/gtest.h"
#include <iostream>
#include <string>
#include "../src/risas.h"

using namespace std;

#define test(i,s) TEST(risasTEST, s){stringstream sin; sin << "risas/" << i; string filename = sin.str(); vector<char> vdata = leerDatos(filename); int actual = risaMasLarga(vdata); int expected = leerLargoReal(filename + ".a"); EXPECT_EQ(actual, expected);}

test("01",risas01);
test("02",risas02);
test("03",risas03);
test("04",risas04);
test("10",risas10);
test("11",risas11);
test("12",risas12);
test("13",risas13);
test("14",risas14);
test("20",risas20);
test("21",risas21);
test("22",risas22);
test("23",risas23);
test("24",risas24);
test("30",risas30);
test("31",risas31);
test("32",risas32);
test("33",risas33);
test("34",risas34);
test("40",risas40);
test("41",risas41);
test("42",risas42);
test("43",risas43);
test("44",risas44);
test("50",risas50);
test("51",risas51);
test("52",risas52);
test("53",risas53);
test("54",risas54);

