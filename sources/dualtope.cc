//
// FILE: polytope.cc -- Instantiation of gPolytope class
//
// @(#)polytope.cc	1.27 06/13/97
//

#include "dualtope.imp"
#include "rational.h"

#ifdef __GNUG__
#define TEMPLATE template
#elif defined __BORLANDC__
#define TEMPLATE
#pragma option -Jgd
#endif   // __GNUG__, __BORLANDC__

#include "glist.imp"
TEMPLATE class gList<ind_pair*>;
TEMPLATE class gNode<ind_pair*>;
TEMPLATE class gList<gVector<int> >;
TEMPLATE class gNode<gVector<int> >;
//TEMPLATE class gList<gVector<gRational> >;
//TEMPLATE class gNode<gVector<gRational> >;

TEMPLATE class gPolytope<int>;
TEMPLATE gOutput &operator<<(gOutput &f, const gPolytope<int> &y);

TEMPLATE class gPolytope<gRational>;
TEMPLATE gOutput &operator<<(gOutput &f, const gPolytope<gRational> &y);




