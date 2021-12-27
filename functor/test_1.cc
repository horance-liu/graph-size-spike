#include "graph.h"
#include <stdio.h>

namespace {
  struct NodeVisitorImpl : NodeVisitor {
    NodeVisitorImpl(int num) : num(num) {
    }  
  
  private:
    Status Visit(Node& node) override {
      num++;
      return HIAI_OK;
    }

  private:
    int num;
  };
}

void test_graph_1() {
  Graph graph;

  graph.Add(new Node(1));
  graph.Add(new Node(2));

  int num = 0;

  NodeVisitorImpl visitor(num);
  graph.List(visitor);

  printf("%d\n", num);
}
