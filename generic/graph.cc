#include "graph.h"

Graph::~Graph() {
  for (auto node : nodes) {
    delete node;
  }
}

void Graph::Add(Node* node) {
  nodes.push_back(node);
}