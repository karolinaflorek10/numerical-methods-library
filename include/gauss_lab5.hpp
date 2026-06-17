#ifndef GAUSS_LAB5_HPP
#define GAUSS_LAB5_HPP

#include <vector>
#include <string>

// This function reads the linear system data (matrix size, vector b, and matrix A) from a text file.
// - Arguments:
//   nazwaPliku: path to the input text file
//   n: reference to store the matrix size (dimension)
//   A: reference to store the 2D system matrix coefficients
//   b: reference to store the right-hand side vector
// - Returns: true if data is successfully loaded, false if the file cannot be opened.
bool wczytajDaneGauss(const std::string& nazwaPliku, int& n, std::vector<std::vector<double>>& A, std::vector<double>& b);

// This function prints the augmented matrix [A | b] to the console with clean formatting.
// - Arguments:
//   A: the 2D coefficients matrix
//   b: the right-hand side vector
// - Returns: void
void wypiszMacierzRozszerzona(const std::vector<std::vector<double>>& A, const std::vector<double>& b);

// This function solves the linear system Ax = b using classical Gaussian elimination and back substitution.
// It prints the augmented matrix state after each elimination step.
// - Arguments:
//   A: system matrix (passed by value to protect original data)
//   b: right-hand side vector (passed by value)
//   n: system size
// - Returns: a vector containing the solutions x, or an empty vector if an error occurs.
// - Error case: Prints an error and returns an empty vector if a zero is detected on the diagonal (division by zero).
std::vector<double> metodaGaussa(std::vector<std::vector<double>> A, std::vector<double> b, int n);

// This function coordinates the laboratory example: loads data, runs the Gauss method, and verifies the result.
// - Returns: void
void run_example_lab5();

#endif
