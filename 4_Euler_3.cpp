#include <algorithm>
#include <iostream>
#include <stack>
#include <unordered_map>
#include <vector>

std::vector<int> find_euler_cycle(
    const std::unordered_map<int, std::vector<int>>& graph, int start) {
  std::vector<int> cycle;
  std::stack<std::pair<int, std::vector<int>::const_iterator>> stack;
  stack.emplace(start, graph.at(start).cbegin());
  while (!stack.empty()) {
    auto [vertex, edges] = stack.top();
    if (edges == graph.at(vertex).cend()) {
      cycle.push_back(vertex);
      stack.pop();
    } else {
      stack.emplace(*edges, graph.at(*edges).cbegin());
      ++edges;
    }
  }
  std::reverse(cycle.begin(), cycle.end());
  return cycle;
}

int main() {
  std::unordered_map<int, std::vector<int>> graph;
  graph[0] = {1, 2};
  graph[1] = {0};
  graph[2] = {0, 3};
  graph[3] = {2, 0};
  for (int vertex : find_euler_cycle(graph, 0)) {
    std::cout << vertex << ' ';
  }
  std::cout << '\n';
  return 0;
}