#include <iostream>
#include <fstream>

#include "linkedStack.h"
#include "arrayGraph.h"

using namespace std;

int main()
{
    ArrayGraph<int, string> traversalMap;
    traversalMap.add("reno","seattle", 500);
    cout << traversalMap.getEdgeWeight("reno","seattle") << endl;
}