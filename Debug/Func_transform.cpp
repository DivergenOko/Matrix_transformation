int Func_transform(int N, int M, int** A, int** B, int s, int s0) {

    // Заполнение новой матрицы - В
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (A[i][j] > 0) B[i][j] = 1;
            else  B[i][j] = 0;
        }
    }

    // Рассчет суммы элементов матрицы А
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            s0 = s0 + A[i][j];
        }
    }

    // Рассчет суммы элементов матрицы В
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            s = s + B[i][j];
        }
    }

    // Сравнение и вывод булевого значения
    if (s0 < 2 * s) return true;
    else return false;

}