#ifndef ARRAY_GRAPH
#define ARRAY_GRAPH

#include "graph.h"
#include "arraylist.h"

template<class ItemType, class LabelType>
class ArrayGraph : public GraphInterface<ItemType>
{
    static const int MAX_VERTICES = 20;
    int edgeCount;
    int vertexCount;
    ItemType adjacencyMatrix[MAX_VERTICES][MAX_VERTICES];
    LabelType vertices[MAX_VERTICES];

    public:
        ArrayGraph() ;
        int getNumVertices() const;
        int getNumEdges() const;
        bool add(LabelType start, LabelType end, int edgeWeight);
        bool remove(LabelType start, LabelType end);
        int getEdgeWeight(LabelType start, LabelType end) const;
        void depthFirstTraversal(LabelType start, void visit(LabelType&));
        void breadthFirstTraversal(LabelType start, void visit(LabelType&));
};

#include "arrayGraph.cpp"
#endif