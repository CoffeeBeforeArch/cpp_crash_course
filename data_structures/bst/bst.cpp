// A simply binary search tree implementation
// By: Nick from CoffeeBeforeArch

#include <algorithm>
#include <memory>
#include <vector>

// BST will contain nodes
struct Node {
  // Constructor
  Node(int p) : payload(p) {}

  // Data at the node
  const int payload;

  // Pointers to the sub-nodes
  std::shared_ptr<Node> left = nullptr;
  std::shared_ptr<Node> right = nullptr;
};

// Our binary search tree of nodes
class BST {
 public:
  // Constructors/Destructors
  BST(std::vector<int>& v);
  ~BST() = default;

  // Public methods
  void insert_node(int val, std::shared_ptr<Node> &current);
  void remove_node(int val);

 private:
  // Data members
  int size = 0;
  std::shared_ptr<Node> root = nullptr;
};

// Constructor
// Inserts a new node for each vector entry
BST::BST(std::vector<int>& v) {
  for (auto p : v) {
    insert_node(p, root);
  }
}

// Insert node
// Recursive function for finding the correct spot for a new node
void BST::insert_node(int val, std::shared_ptr<Node> &current) {
  // Base case where we find the insertion point
  if (!current) {
    size++;
    current = std::make_shared<Node>(val);
  } else {
    // Check if this node should go down the left or right path
    if (val <= current->payload) {
      insert_node(val, current->left);
    } else {
      insert_node(val, current->right);
    }
  }
}

int main() {
  // Generate 10 random numbers
  unsigned N = 10;
  std::vector<int> v(N);
  std::generate(begin(v), end(v), []() { return rand() % 100; });

  // Create a binary search tree from the vector
  BST binary_search_tree(v);
}
