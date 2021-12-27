#ifndef FF20F129_C66F_4005_A58C_34B83181C9C9
#define FF20F129_C66F_4005_A58C_34B83181C9C9

#include "node.h"
#include "status.h"

#include <functional>
#include <vector>

using NodeVisitor = std::function<Status(Node&)>;

struct Graph {
  ~Graph();
  void Add(Node* node);

  Status List(NodeVisitor visitor);

private:
  std::vector<Node*> nodes;
};


#endif /* FF20F129_C66F_4005_A58C_34B83181C9C9 */
