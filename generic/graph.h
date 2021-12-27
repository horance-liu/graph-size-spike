#ifndef FF20F129_C66F_4005_A58C_34B83181C9C9
#define FF20F129_C66F_4005_A58C_34B83181C9C9

#include "node.h"
#include "status.h"

#include <vector>

struct Graph {
  ~Graph();

  void Add(Node* node);

  template <typename NodeVisitor>
  Status List(NodeVisitor visitor) {
    for (auto node : nodes) {
      HIAI_ASSERT_EXEC(visitor(*node));
    }
    return HIAI_OK;
  }

private:
  std::vector<Node*> nodes;
};


#endif /* FF20F129_C66F_4005_A58C_34B83181C9C9 */
