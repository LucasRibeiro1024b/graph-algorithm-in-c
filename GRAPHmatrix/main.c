#include <stdio.h>
#include "GRAPHmatrix.h"

void showSinkInfo(Graph, vertex);
void showSourceInfo(Graph, vertex);

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

  showSinkInfo(G, 1);
  showSinkInfo(G, 5);
  showSinkInfo(G, 6);

  showSourceInfo(G, 1);
  showSourceInfo(G, 5);
  showSourceInfo(G, 6);
  
  return 0;
}

void showSinkInfo(Graph G, vertex v) {
  if (GRAPHisSink(G, v))
    printf("Vertex %d is sink.\n", v);
  else 
    printf("Vertex %d is not a sink.\n", v);
}

void showSourceInfo(Graph G, vertex v) {
  if (GRAPHisSource(G, v))
    printf("Vertex %d is source.\n", v);
  else 
    printf("Vertex %d is not a source.\n", v);
}