#include "graph.h"
#include <stdio.h>

void test_graph_1() {
  Graph graph;

  graph.Add(new Node(1));
  graph.Add(new Node(2));

  int num = 0;

  graph.List([&num](Node& node) {
    num++;
    return HIAI_OK;
  });

  printf("%d\n", num);
}