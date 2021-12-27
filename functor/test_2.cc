#include "graph.h"
#include <stdio.h>

namespace {
  struct NodeVisitorImpl : NodeVisitor {
  private:
    Status Visit(Node& node) override {
      printf("%d\n", node.GetId());
      return HIAI_OK;
    }
  };
}

void test_graph_2() {
  Graph graph;

  graph.Add(new Node(1));
  graph.Add(new Node(2));

  NodeVisitorImpl visitor;
  graph.List(visitor);
}
