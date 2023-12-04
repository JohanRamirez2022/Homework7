#include "graph.h"

template <class ItemType, class LabelType>
ArrayGraph<ItemType, LabelType>::ArrayGraph()
{
    edgeCount = 0;
    vertexCount = 0;
    
    for (int i = 0; i < MAX_VERTICES; ++i) 
    {
            for (int j = 0; j < MAX_VERTICES; ++j) 
            {
                adjacencyMatrix[i][j] = INT_MAX;
            }
    }
}

template <class ItemType, class LabelType>
int ArrayGraph<ItemType,LabelType>:: getNumVertices() const
{
    return vertexCount;
}

template <class ItemType, class LabelType>
int ArrayGraph<ItemType, LabelType>:: getNumEdges() const
{
    return edgeCount;
}

template <class ItemType, class LabelType>
bool ArrayGraph<ItemType,LabelType>:: add(LabelType start, LabelType end, int edgeWeight)
{
    int startingPos = -1;
    int endingPos = -1;
    for (int i = 0; i< vertexCount; ++i)
    {
        if ((vertices[i] == start) || (vertices[i] == end))
        {
            startingPos = i;
        }
    }

    if (startingPos == -1)
    {
        if (vertexCount < MAX_VERTICES)
        {
            startingPos = vertexCount;
            vertices[vertexCount++] = start;
        }
    }
        else
        {
            return false;
        }
    if (adjacencyMatrix[startingPos][endingPos] == INT_MAX)
    {
        adjacencyMatrix[startingPos][endingPos] == edgeWeight;
        edgeCount++;
        return true;
    }
    return false;
}

template <class ItemType, class LabelType>
bool ArrayGraph<ItemType,LabelType>:: remove(LabelType start, LabelType end)
{
    adjacencyMatrix[start][end] = INT_MAX;
    edgeCount--;
    return true;
}

template <class ItemType, class LabelType>
int ArrayGraph<ItemType,LabelType>:: getEdgeWeight(LabelType start, LabelType end) const
{
    if (adjacencyMatrix[start][end] != INT_MAX)
    {
        return adjacencyMatrix[start][end];
    }
}

template <class ItemType, class LabelType>
void ArrayGraph<ItemType,LabelType>:: depthFirstTraversal(LabelType start, void visit(LabelType&))
{

}

template <class ItemType, class LabelType>
void ArrayGraph<ItemType,LabelType>:: breadthFirstTraversal(LabelType start, void visit(LabelType&))
{

}