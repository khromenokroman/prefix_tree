//
// Created by roma on 22.10.24.
//
#pragma once
#include <memory>
#include <string>
#include <vector>
namespace tree::CONSTANTS {
static constexpr int MAX_SIZE = 26;
}

namespace tree {
struct Node {
    Node();
    Node* m_node_next = nullptr;
    std::vector<std::unique_ptr<Node>> m_data;
    bool m_is_key{false};
};

class Prefix_tree {
   private:
    std::unique_ptr<Node> m_node_root;

   public:
    Prefix_tree();
    bool insert(std::string const& word);
    bool search(std::string const& word);
    bool starts_with(std::string const& word);
};
} // namespace tree
