#define vertex int
typedef struct graph *Graph;

Graph GRAPHinit(int V);
void GRAPHinsertArc( Graph G, vertex v, vertex w);
void GRAPHremoveArc( Graph G, vertex v, vertex w);
void GRAPHshow( Graph G);
int GRAPHoutdeg(Graph G, vertex v);
int GRAPHindeg(Graph G, vertex v);
int GRAPHisSink(Graph G, vertex v);
int GRAPHisSpurce(Graph G, vertex v);