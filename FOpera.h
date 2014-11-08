#ifndef FOPERA_H_INCLUDED
#define FOPERA_H_INCLUDED

#include "DataStruct.h"

//The four operations of fractions
int gcd(int m,int n);

//The four operations of fractions
fraction operator +(fraction &a, fraction &b);
fraction operator -(fraction &a, fraction &b);
fraction operator *(fraction &a, fraction &b);
fraction operator /(fraction &a, fraction &b);

#endif // FOPERA_H_INCLUDED
