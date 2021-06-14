#pragma once
#include "fact.h"
#include <cmath>

long double sum(double N1, double N2)
{
    if (N1 != 0 && N2 != 0) {
        double result;
        result = N1 + N2;
        return result;
    }
}
long double umnozhenie(double N1, double N2)
{
    double result;
    result = N1 * N2;
    return result;
}
long double vichitanie(double N1, double N2)
{
    double result;
    result = N1 - N2;
    return result;
}
long double delenie(double N1, double N2)
{
    double result;
    result = N1 / N2;
    return result;
}
double stepen(double N1, double N2)
{
    double result;
    result = pow(N1,N2);
    return result;
}
double sqrt(double N1, double N2)
{
    double result;
    result = pow(N1, 1/N2);
    return result;
}