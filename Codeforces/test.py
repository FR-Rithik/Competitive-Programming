def dfs(graph, start, visited=None):
    if visited is None:
        visited = set()  # Use a set to track visited nodes

    # Mark the current node as visited
    visited.add(start)
    print(start)  # Process the current node (here we simply print it)

    # Recursively visit all the adjacent nodes that haven't been visited yet
    for neighbor in graph[start]:
        if neighbor not in visited:
            dfs(graph, neighbor, visited)

    return visited

# Example graph represented as an adjacency list
graph = {
    'A': ['B', 'C'],
    'B': ['D', 'E'],
    'C': ['F'],
    'D': [],
    'E': ['F'],
    'F': []
}

# Start the DFS traversal from node 'A'
dfs(graph, 'A')
