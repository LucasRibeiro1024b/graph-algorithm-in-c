#include <stdlib.h>
#include "GRAPHlist.h"

struct node { 
   vertex w; 
   link next; 
};

struct graph {
   int V; 
   int A; 
   link *adj; 
};

static link NEWnode( vertex w, link next) { 
   link a = malloc( sizeof (struct node));
   a->w = w; 
   a->next = next;     
   return a;                         
}

Graph GRAPHinit( int V) { 
   Graph G = malloc( sizeof *G);
   G->V = V; 
   G->A = 0;
   G->adj = malloc( V * sizeof (link));
   for (vertex v = 0; v < V; ++v) 
      G->adj[v] = NULL;
   return G;
}

void GRAPHinsertArc( Graph G, vertex v, vertex w) { 
   for (link a = G->adj[v]; a != NULL; a = a->next) 
      if (a->w == w) return;
   G->adj[v] = NEWnode( w, G->adj[v]);
   G->A++;
}