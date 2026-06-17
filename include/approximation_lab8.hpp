#pragma once

const int max_degree_lab8 = 10;
const int simpson_n_lab8 = 10000;

// Evaluates the target mathematical function used in the lab assignment.
// - Arguments: x: input variable
// - Returns: value of f(x) = x^2 * sin^2(x) - x^2 + x
double function_lab8(double x);

// Computes the analytical integral of x raised to a given power over the interval [5, 11].
// - Arguments: power: the exponent value
// - Returns: integral value, or 0.0 if the power is negative (error case).
double power_integral_lab8(int power);

// Computes the integral of f(x) * x^power over the interval [5, 11] using Simpson's rule.
// - Arguments: power: the exponent value for x
// - Returns: approximated integral value, or 0.0 if the power is negative (error case).
double function_times_power_integral_lab8(int power);

// Evaluates a polynomial at a given point x using the Horner's method.
// - Arguments: coeff: array of coefficients, degree: polynomial degree, x: evaluation point
// - Returns: value of the polynomial at point x, or 0.0 if the degree is invalid.
double polynomial_value_lab8(double coeff[], int degree, double x);

// Constructs the normal equations matrix and right-hand side vector for the least squares approximation.
// - Arguments: matrix: target 2D array, rhs: target vector array, degree: chosen polynomial degree
// - Error case: Prints an error if the degree is out of bounds (less than 1 or greater than max).
void create_system_lab8(double matrix[max_degree_lab8 + 1][max_degree_lab8 + 1], double rhs[max_degree_lab8 + 1], int degree);

// Prints the coefficients matrix A to the console.
// - Arguments: matrix: the 2D array, degree: size reference
void print_matrix_lab8(double matrix[max_degree_lab8 + 1][max_degree_lab8 + 1], int degree);

// Prints the right-hand side vector b to the console.
// - Arguments: rhs: the vector array, degree: size reference
void print_vector_lab8(double rhs[max_degree_lab8 + 1], int degree);

// Prints the augmented matrix [A | b] used in Gaussian elimination to the console.
// - Arguments: matrix: the 2D array including the extra column, size: matrix dimensions
void print_augmented_matrix_lab8(double matrix[max_degree_lab8 + 1][max_degree_lab8 + 2], int size);

// Saves the constructed system matrix A and vector b into a text file ("matrix_a_b_lab8.txt").
// - Error case: Prints an error message if the file cannot be created.
void save_system_to_file_lab8(double matrix[max_degree_lab8 + 1][max_degree_lab8 + 1], double rhs[max_degree_lab8 + 1], int degree);

// Solves the linear system using Gaussian elimination with partial pivoting and prints intermediate steps.
// - Arguments: matrix: coefficients, rhs: vector b, result: array to store polynomial coefficients, degree: system size
// - Returns: true if successfully solved, false if a pivot element is close to zero (error case).
bool gaussian_elimination_lab8(double matrix[max_degree_lab8 + 1][max_degree_lab8 + 1], double rhs[max_degree_lab8 + 1], double result[max_degree_lab8 + 1], int degree);

// Solves the linear system using Gaussian elimination with partial pivoting without printing steps to the console.
// - Returns: true if successfully solved, false if a pivot element is close to zero (error case).
bool gaussian_elimination_silent_lab8(double matrix[max_degree_lab8 + 1][max_degree_lab8 + 1], double rhs[max_degree_lab8 + 1], double result[max_degree_lab8 + 1], int degree);

// Calculates the mean square approximation error using Simpson's integration rule.
// - Arguments: coeff: polynomial coefficients, degree: polynomial degree
// - Returns: calculated mean square error value.
double mean_square_error_lab8(double coeff[max_degree_lab8 + 1], int degree);

// Computes and saves function values, approximation values, and absolute errors for plotting into "results_lab8.csv".
// - Error case: Prints an error message if the CSV file cannot be created.
void save_plot_data_lab8(double coeff[max_degree_lab8 + 1], int degree);

// Performs error analysis for all degrees from 1 up to max_degree and saves results to "degree_analysis_lab8.csv".
// - Error case: Returns early if the max_degree parameter is out of valid bounds.
void save_degree_analysis_lab8(int max_degree);

// Runs the full orchestration of the lab 8 example (asks user for degree, solves, prints, and saves data).
// - Example: run_example_lab8();
void run_example_lab8();
