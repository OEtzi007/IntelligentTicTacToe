#ifndef NODE_H
#define NODE_H

#include <vector>
class Edge;

using namespace std;

class Node
{
public:
    Node();

    static int counter; //writes id

    int id;
    vector<Edge*> childs;
    vector<Edge*> parents;
};

#endif // NODE_H
