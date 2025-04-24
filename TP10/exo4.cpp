#include <iostream>
#include <array>

using namespace std;

template <typename T, int M, int N>
class Matrix;

template <typename T, int M, int N, int M1, int N1>
class MatrixAdder;

template <typename T, int M, int N>
class Matrix {
private:
    array<array<T, N>, M> matrix;
public:
    void set(int row, int col, T value) {
        matrix[row][col] = value;
    }

    T get(int row, int col) const {
        return matrix[row][col];
    }

    void print() const {
        for (int i = 0; i < M; ++i) {
            for (int j = 0; j < N; ++j) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }

    template <int M1, int N1>
    auto add(const Matrix<T, M1, N1>& other) const {
        return MatrixAdder<T, M, N, M1, N1>::add(*this, other);
    }
};

template <typename T, int M, int N, int M1, int N1>
class MatrixAdder {
public:
    static Matrix<T, M, N> add(const Matrix<T, M, N>& actual, const Matrix<T, M1, N1>& other) {
        Matrix<T, M, N> result;
        if constexpr (M == M1 && N == N1) {

            for (int i = 0; i < M; i++) {
                for (int j = 0; j < N; j++) {
                    result.set(i, j, actual.get(i, j) + other.get(i, j));
                }
            }
            return result;
        } else {
            cerr << "Erreur d'addition : pas les mêmes dimensions ("
                 << M << "x" << N << " vs " << M1 << "x" << N1 << ")" << endl;


            return result;
        }
    }
};

int main() {
    Matrix<int, 2, 2> m1;
    m1.set(0, 0, 1); m1.set(0, 1, 2);
    m1.set(1, 0, 3); m1.set(1, 1, 4);

    Matrix<int, 2, 2> m2;
    m2.set(0, 0, 5); m2.set(0, 1, 6);
    m2.set(1, 0, 7); m2.set(1, 1, 8);

    auto m3 = m1.add(m2);
    m3.print();

    Matrix<int, 2, 3> m4;
    auto m5 = m1.add(m4);

    return 0;
}
