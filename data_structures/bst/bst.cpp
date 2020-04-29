// A simply binary search tree implementation
// By: Nick from CoffeeBeforeArch

#include <algorithm>
#include <vector>

// BST will contain nodes
struct Node {
  // Constructor
  Node(int p) : payload(p) {}

  // Data at the node
  const int payload;

  // Pointers to the sub-nodes
  Node* left = nullptr;
  Node* right = nullptr;
};

class BST {
 public:
  // Constructors/Destructors
  BST(std::vector<int> v);
  ~BST() = default;

  // Public methods
  void insert_node(int val);
  void remove_node(int val);

 private:
  // Data members
  int depth = 0;
  int size = 0;
  Node* root = nullptr;
};

int main() {
  // Generate 10 random numbers
  unsigned N = 10;
  std::vector<int> v(N);
  std::generate(begin(v), end(v), []() { return rand() % 100; });
}
