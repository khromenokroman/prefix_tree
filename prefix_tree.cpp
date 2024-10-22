//
// Created by roma on 22.10.24.
//

#include "prefix_tree.hpp"
tree::Prefix_tree::Prefix_tree() : m_node_root{std::make_unique<Node>()} {};
bool tree::Prefix_tree::insert(std::string const& word) {
    if (!word.empty()) {
        Node* node = m_node_root.get();
        for (auto const& symbol : word) {
            auto index = symbol - 'a';
            if (!node->m_data[index]) {
                node->m_data[index] = std::make_unique<Node>();
                node = node->m_data[index].get();
            } else {
                node = node->m_data[index].get();
            }
        }
        node->m_is_key = true;
        return true;
    } else {
        return false;
    }
}
bool tree::Prefix_tree::search(std::string const& word) {
    if (!word.empty()) {
        Node* node = m_node_root.get();
        for (auto const& symbol : word) {
            auto index = symbol - 'a';
            if (!node->m_data[index]) {
                return false;
            } else {
                node = node->m_data[index].get();
            }
        }
        if (node->m_is_key) {
            return true;
        } else {
            return false;
        }

    } else {
        return false;
    }
}
bool tree::Prefix_tree::starts_with(const std::string& word) {
    if (!word.empty()) {
        Node* node = m_node_root.get();
        for (auto const& symbol : word) {
            auto index = symbol - 'a';
            if (!node->m_data[index]) {
                return false;
            } else {
                node = node->m_data[index].get();
            }
        }
        return true;

    } else {
        return false;
    }
};

tree::Node::Node() { m_data = std::vector<std::unique_ptr<Node>>(CONSTANTS::MAX_SIZE); };
