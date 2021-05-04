typedef struct graph *Graph;
typedef struct node *link;

#define vertex int

Graph GRAPHinit( int V);
void GRAPHinsertArc( Graph G, vertex v, vertex w);