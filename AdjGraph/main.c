#include <stdio.h>
#include <stdlib.h>
#include "AdjGraph.h"

int main (){
  Graph G = GRAPHinit(10);

  GRAPHshow(G);
  GRAPHinsertArc(G, 2, 1);
  GRAPHinsertArc(G, 2, 3);
  GRAPHinsertArc(G, 2, 5);
  GRAPHinsertArc(G, 3, 4);
  GRAPHinsertArc(G, 4, 5);
  GRAPHinsertArc(G, 4, 2);
  GRAPHinsertArc(G, 6, 2);
  GRAPHshow(G);

  return 0;
}