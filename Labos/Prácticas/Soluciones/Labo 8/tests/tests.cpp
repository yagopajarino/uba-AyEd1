#include "gtest/gtest.h"
#include "../src/ejercicios.h"

/////////////////////////// split ///////////////////////////
TEST(splitTest, vacio){
	vector<string> v = {};
	ASSERT_EQ(v, split("", ' '));
}

TEST(splitTest, frase){
	vector<string> v = {"hola", "mundo", "se", "programar"};
	ASSERT_EQ(v, split("hola mundo se programar", ' '));
}

TEST(splitTest, sinEspacios){
	vector<string> v = {"hola"};
	ASSERT_EQ(v, split("hola", ' '));
}

TEST(splitTest, EspacioAlFinal){
	vector<string> v = {"hola"};
	ASSERT_EQ(v, split("hola ", ' '));
}

TEST(splitTest, EspacioAlPrincipio){
	vector<string> v = {"hola"};
	ASSERT_EQ(v, split(" hola", ' '));
}

TEST(splitTest, variosEspciosEnElMedio){
	vector<string> v = {"Esto", "es", "un", "string", "con", "distintos", "espaciados"};
	ASSERT_EQ(v, split("Esto   es un   string  con distintos   espaciados", ' '));
}

TEST(splitTest, otroDelimitador){
	vector<string> v = {"Toto", " Cholo", " Tom", " Moncho", " Rodolfo", " Otto", " Pololo"};
	ASSERT_EQ(v, split("Toto, Cholo, Tom, Moncho, Rodolfo, Otto, Pololo", ','));
}

/////////////////////////// darVueltaPalabra ///////////////////////////

TEST(darVueltaPalabraTest, unaPalabra){
	ASSERT_EQ("hola", darVueltaPalabra("hola"));
}

TEST(darVueltaPalabraTest, variosPalabras){
	ASSERT_EQ("programar se mundo hola", darVueltaPalabra("hola mundo se programar"));
}

TEST(darVueltaPalabraTest, variosEspacios){
	ASSERT_EQ("programar se mundo hola", darVueltaPalabra("  hola   mundo   se   programar  "));
}

TEST(darVueltaPalabraTest, vacio){
	ASSERT_EQ("", darVueltaPalabra(""));
}

/////////////////////////// subsecuencia ///////////////////////////

TEST(subsecuenciaTest, vacias){
	ASSERT_TRUE(subsecuencia("", ""));
}

TEST(subsecuenciaTest, s1MasGrande){
	ASSERT_FALSE(subsecuencia("asdas", "sd"));
}

TEST(subsecuenciaTest, iguales){
	ASSERT_TRUE(subsecuencia("asds", "asds"));
}

TEST(subsecuenciaTest, substring){
	ASSERT_TRUE(subsecuencia("asd", "juasdop"));
}

TEST(subsecuenciaTest, subsec){
	ASSERT_TRUE(subsecuencia("asd", "laaidsakikdop"));
}

TEST(subsecuenciaTest, desordendos){
	ASSERT_FALSE(subsecuencia("aiksd", "lllaaiiissskikdop"));
}

TEST(subsecuenciaTest, s1Repes){
	ASSERT_FALSE(subsecuencia("asdasdds", "aadasdasds"));
	ASSERT_TRUE(subsecuencia("asdasdds", "laaiskjhsdsmamksmdsds"));
}

/////////////////////////// agruparAnagramas ///////////////////////////

TEST(agruparAnagramas, unElemento) {
	vector<string> in = {"hola"};
	vector<vector<string> > out = {{"hola"}};
	ASSERT_EQ(out, agruparAnagramas(in));
}

TEST(agruparAnagramas, unoDeCada) {
	vector<string> in = {"hola","solo","uno","otro"};
	vector<vector<string> > out = {{"hola"},{"solo"},{"uno"},{"otro"}};
	ASSERT_EQ(out, agruparAnagramas(in));
}

TEST(agruparAnagramas, sinRepes) {
	vector<string> in = {"hola","aloh","laoh","solo","uno", "onu","otro", "varios", "rioasv", "saovir", "irvaos"};
	vector<vector<string> > out = {{"hola","aloh","laoh"},{"solo"},{"uno", "onu"},{"otro"}, {"varios", "rioasv", "saovir", "irvaos"}};
	ASSERT_EQ(out, agruparAnagramas(in));
}

TEST(agruparAnagramas, conRepes) {
	vector<string> in = {"hola","aloh","laoh","solo","hola", "solo", "uno", "onu","otro", "varios", "rioasv", "saovir", "irvaos"};
	vector<vector<string> > out = {{"hola","aloh","laoh","hola"},{"solo", "solo"},{"uno", "onu"},{"otro"}, {"varios", "rioasv", "saovir", "irvaos"}};
	ASSERT_EQ(out, agruparAnagramas(in));
}

TEST(agruparAnagramas, enOrden) {
	vector<string> in = {"hola","rioasv", "laoh","solo","uno", "otro", "onu", "varios", "aloh", "saovir", "irvaos"};
	vector<vector<string> > out = {{"hola","laoh","aloh"}, {"rioasv","varios", "saovir", "irvaos"}, {"solo"}, {"uno", "onu"},{"otro"}};
	ASSERT_EQ(out, agruparAnagramas(in));
}

/////////////////////////// esPalindromo ///////////////////////////

TEST(esPalindromoTest, impar){
	ASSERT_TRUE(esPalindromo("menem"));
}

TEST(esPalindromoTest, par){
	ASSERT_TRUE(esPalindromo("roor"));
	ASSERT_FALSE(esPalindromo("pkjiejkp"));
}

TEST(esPalindromoTest, unaLetra){
	ASSERT_TRUE(esPalindromo("l"));
}

TEST(esPalindromoTest, dosLetras){
	ASSERT_TRUE(esPalindromo("ll"));
	ASSERT_FALSE(esPalindromo("lk"));
}


/////////////////////////// tieneRepetidos ///////////////////////////

TEST(tieneRepetidosTest, vacio) {
	ASSERT_FALSE(tieneRepetidos(""));
}

TEST(tieneRepetidosTest, unElemento) {
	ASSERT_FALSE(tieneRepetidos("e"));
}

TEST(tieneRepetidosTest, unRepe) {
	ASSERT_TRUE(tieneRepetidos("casa"));
}

TEST(tieneRepetidosTest, sinRepes) {
	ASSERT_FALSE(tieneRepetidos("mouse"));
}

/////////////////////////// rotar ///////////////////////////

TEST(rotarTest, sinRotar){
	ASSERT_EQ("igual", rotar("igual", 0));
}

TEST(rotarTest, rotarI){
	ASSERT_EQ("aligu", rotar("igual", 2));
}

TEST(rotarTest, rotarN){
	ASSERT_EQ("igual", rotar("igual", 5));
}

TEST(rotarTest, rotarMasDeN){
	ASSERT_EQ("ualig", rotar("igual", 8));
}

/////////////////////////// darVueltaK ///////////////////////////

TEST(darVueltaKTest, todoElString){
	ASSERT_EQ("aloh", darVueltaK("hola", 4));
}

TEST(darVueltaKTest, justo){
	ASSERT_EQ("libros", darVueltaK("ilrbso", 2));
}

TEST(darVueltaKTest, tePasaste){
	ASSERT_EQ("moctupodaar", darVueltaK("computadora", 3));
}

TEST(darVueltaKTest, noDarVuelta){
	ASSERT_EQ("computadora", darVueltaK("computadora", 1));
}

////////////////////// Abuelo Laino ///////////////////

TEST(abueloLaino, test1){
    ASSERT_EQ("N", abueloLaino("camisa"));
}

TEST(abueloLaino, test2){
    ASSERT_EQ("S", abueloLaino("remera"));
}

TEST(abueloLaino, test3){
    ASSERT_EQ("S", abueloLaino("buey"));
}

TEST(abueloLaino, test4){
    ASSERT_EQ("N", abueloLaino("i"));
}

TEST(abueloLaino, test5){
    ASSERT_EQ("S", abueloLaino("abuelo"));
}

TEST(abueloLaino, test6){
    ASSERT_EQ("N", abueloLaino("iiiiin"));
}

TEST(abueloLaino, test7){
    ASSERT_EQ("N", abueloLaino("nnnnni"));
}

TEST(abueloLaino, test8){
    ASSERT_EQ("N", abueloLaino("nnnnninnnnn"));
}

TEST(abueloLaino, test9){
    ASSERT_EQ("S", abueloLaino("jkl"));
}


////////////////////// Felicitaciones Francisco ///////////////////
TEST(FelicitacionesFrancisco, test1){
    vector<string> v = {"RAMIRO", "AUGUSTO", "JOAQUIN", "JACINTO", "NICOLAS", "ALEJANDRO",
                        "DIJKSTRA", "KAJITA", "MCDONALD", "SCHRODINGER"};
    ASSERT_EQ(4, cantidadDeFelicitaciones(v));
}

TEST(FelicitacionesFrancisco, test2){
    vector<string> v = {"DDD","RRR","DRDR","RDRD"};
    ASSERT_EQ(5, cantidadDeFelicitaciones(v));
}

TEST(FelicitacionesFrancisco, test3){
    vector<string> v = {"MELANIE", "DAMIAN", "RAMIRO", "AUGUSTO", "JOAQUIN", "JACINTO",
                        "NICOLAS", "ALEJANDRO", "DIJKSTRA", "KAJITA", "MCDONALD", "SCHRODINGER"};
    ASSERT_EQ(5, cantidadDeFelicitaciones(v));
}

TEST(FelicitacionesFrancisco, test4){
    vector<string> v = {"ABCEFG", "HIJKLM", "NOPQST", "UVWXYZ"};
    ASSERT_EQ(0, cantidadDeFelicitaciones(v));
}

TEST(FelicitacionesFrancisco, test5){
    vector<string> v = {"DRDRDRDR"};
    ASSERT_EQ(4, cantidadDeFelicitaciones(v));
}

TEST(FelicitacionesFrancisco, test6){
    vector<string> v = {"DR"};
    ASSERT_EQ(1, cantidadDeFelicitaciones(v));
}


TEST(FelicitacionesFrancisco, test7){
    vector<string> v = {"D"};
    ASSERT_EQ(0, cantidadDeFelicitaciones(v));
}

TEST(FelicitacionesFrancisco, test8){
    vector<string> v = {"R"};
    ASSERT_EQ(0, cantidadDeFelicitaciones(v));
}

TEST(FelicitacionesFrancisco, test9){
    vector<string> v = {"DDDDDDDDR"};
    ASSERT_EQ(1, cantidadDeFelicitaciones(v));
}

TEST(FelicitacionesFrancisco, test10){
    vector<string> v = {"J"};
    ASSERT_EQ(0, cantidadDeFelicitaciones(v));
}

TEST(FelicitacionesFrancisco, test11){
    vector<string> v = {"D", "R", "D", "R"};
    ASSERT_EQ(2, cantidadDeFelicitaciones(v));
}

////////////////////// middle Out ///////////////////

TEST(middleOut, test1){
    ASSERT_EQ(2, middleOut("iredppipe", "piedpiper"));
}

TEST(middleOut, test2){
    ASSERT_EQ(1, middleOut("estt", "test"));
}

TEST(middleOut, test3){
    ASSERT_EQ(2, middleOut("tste", "test"));
}

TEST(middleOut, test4){
    ASSERT_EQ(2, middleOut("adhas", "dasha"));
}

TEST(middleOut, test5){
    ASSERT_EQ(2, middleOut("aashd", "dasha"));
}

TEST(middleOut, test6){
    ASSERT_EQ(3, middleOut("aahsd", "dasha"));
}

TEST(middleOut, test7){
    ASSERT_EQ(-1, middleOut("a", "z"));
}

TEST(middleOut, test8){
    ASSERT_EQ(3, middleOut("contest", "ntecost"));
}

TEST(middleOut, test9){
    ASSERT_EQ(4, middleOut("contest", "nstteco"));
}

TEST(middleOut, test10){
    ASSERT_EQ(4, middleOut("contest", "tnsteco"));
}

TEST(middleOut, test11){
    ASSERT_EQ(1, middleOut("contest", "cotestn"));
}

TEST(middleOut, test12){
    ASSERT_EQ(0, middleOut("contest", "contest"));
}

TEST(middleOut, test13){
    ASSERT_EQ(1, middleOut("ontestc", "contest"));
}


