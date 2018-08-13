//
// Test.cpp
//
// This is a direct port of the C version of the RTree test program.
//

#include <iostream>
#include "RTree.h"

using namespace std;

typedef double ValueType;

ValueType pmin[2];
ValueType pmax[2];
ValueType smin[2];
ValueType smax[2];

bool MySearchCallback(ValueType id)

{
  return true; // keep going
}

int main()
{
  typedef RTree<ValueType, ValueType, 2, float> MyTree;
  MyTree tree;
  /////////Punto insertado///////////////////
  pmin[0]=6.1;
  pmin[1]=6.1;
  pmax[0]=8.1;
  pmax[1]=8.1;
  ///////////////////ID elemento/////////////////
  int i=0;
  tree.Updatetree(pmin,pmax, i);
  /////////////////Rectangulo de busqueda///////////
  smin[0]=4.0;
  smin[1]=0.1;
  smax[0]=10.1;
  smax[1]=10.1;

  /////////////////Numero de elemetos encontrados//////////////
  int nhits;
  nhits = tree.Search(smin, smax, MySearchCallback);


  return 0;

}
