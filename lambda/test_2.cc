#include "graph.h"
#include <stdio.h>

void test_graph_2() {
  Graph graph;

  graph.Add(new Node(1));
  graph.Add(new Node(2));

  graph.List([](Node& node) {
    printf("%d\n", node.GetId());
    return HIAI_OK;    
  });
}