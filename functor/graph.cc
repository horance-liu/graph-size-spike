#include "graph.h"

Graph::~Graph() {
  for (auto node : nodes) {
    delete node;
  }
}

void Graph::Add(Node* node) {
  nodes.push_back(node);
}

Status Graph::List(NodeVisitor& visitor) {
    for (auto node : nodes) {
      HIAI_ASSERT_EXEC(visitor.Visit(*node));
    }
    return HIAI_OK;
}

