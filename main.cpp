#include <iostream>

#include "prefix_tree.hpp"

int main() {
    tree::Prefix_tree tree;
    std::cout << "insert apple: " << tree.insert("apple") << std::endl;
    std::cout << "search apple: " << tree.search("apple") << std::endl;
    std::cout << "search app: " << tree.search("app") << std::endl;
    std::cout << "starts_with app: " << tree.starts_with("app") << std::endl;
    std::cout << "insert app: " << tree.insert("app") << std::endl;
    std::cout << "search app: " << tree.search("app") << std::endl;
    return 0;
}
