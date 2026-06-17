#ifndef LU_LAB4_HPP
#define LU_LAB4_HPP

#include <vector>
#include <string>

// This function reads the matrix size (n), vector b, and matrix A from a text file.
// - Arguments: 
//   nazwaPliku: path to the input file
//   n: reference to store the matrix size
//   A: reference to store the 2D matrix coefficients
//   b: reference to store the right-hand side vector
// - Returns: true if data is successfully loaded, false if file opening fails.
// - Example: wczytajDaneLU("../data/dane.txt", n, A, b);
bool wczytajDaneLU(const std::string& nazwaPliku, int& n, std::vector<std::vector<double>>& A, std::vector<double>& b);

// This function prints a formatted 2D matrix to the console for visualization.
// - Arguments:
//   M: the 2D matrix to print
//   nazwa: name tag/label for the matrix header (e.g. "L" or "U")
// - Returns: void
void wypiszMacierz(const std::vector<std::vector<double>>& M, const std::string& nazwa);

// This function performs LU decomposition (Doolittle algorithm) and solves Ax = b.
// It decomposes A into L and U, prints them, and uses forward and backward substitution.
// - Arguments:
//   A: coefficient matrix (passed by value)
//   b: right-hand side vector (passed by value)
//   n: matrix size
// - Returns: void
// - Error case: Prints an error and stops execution if U[k][k] == 0 (division by zero).
// - Example: metodaLU(A, b, n);
void metodaLU(std::vector<std::vector<double>> A, std::vector<double> b, int n);

// This function coordinates the whole process: loads the data and runs the LU method.
// - Returns: void
void run_example_lab4();

#endif // LU_LAB4_HPP
