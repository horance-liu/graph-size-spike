#ifndef FF20F129_C66F_4005_A58C_34B83181C9C9
#define FF20F129_C66F_4005_A58C_34B83181C9C9

#include "status.h"
#include "node.h"

#include <vector>

struct NodeVisitor {
  virtual Status Visit(Node&) = 0;
  virtual ~NodeVisitor() = default;
};

struct Graph {
  ~Graph();

  void Add(Node* node);

  Status List(NodeVisitor&);

private:
  std::vector<Node*> nodes;
};


#endif /* FF20F129_C66F_4005_A58C_34B83181C9C9 */
