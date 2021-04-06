#define vertex int
typedef struct graph *Graph;

Graph GRAPHinit(int V);
static int **MATRIXint( int r, int c, int val);
void GRAPHinsertArc( Graph G, vertex v, vertex w);
void GRAPHremoveArc( Graph G, vertex v, vertex w);
void GRAPHshow( Graph G);