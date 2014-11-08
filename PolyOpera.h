#ifndef POLYOPERA_H_INCLUDED
#define POLYOPERA_H_INCLUDED

#include "polynomial.h"

polynomial operator +(polynomial&, polynomial&);
polynomial operator -(polynomial&, polynomial&);
polynomial operator *(polynomial&, polynomial&);
polynomial operator /(polynomial&, polynomial&);

#endif // POLYOPERA_H_INCLUDED
