int baldosasDelPiso(int M, int N, int B) {
    int filas = M / B;
    int cols = N / B;
    if (M % B != 0) {
        filas++;
    }
    if (N % B != 0) {
        cols++;
    }
    return filas * cols;
}
