# Graph Algorithms
<h2>Purpose</h2>
<p>
I wrote my own implementations of graph algorithms (BFS and DFS) and performed some tasks on them to better undestand how it work. </br>
Graph abstraction is a powerful problem-solving tool used fordescribing relationships between discrete objects. In this repository I will focus on two algorithms and the differences between them. <br>
</p>
<h2>
BFS - Breadth-First Search
</h2>
<p>
Breadth-First Search (BFS) is one of the main ones algorithms on graphs.
As a result of breadth-first search, a path with the shortest length w is found unweighted graph, i.e. the path containing the fewest number of edges.
The algorithm works in O(n+m) mode, where n is the number of vertices and m is the number edge.
</p>
<h3>How it works?</h3>
<p>
Starting from the root, all the nodes at a particular level are visited first and then the nodes of the next level are traversed till all the nodes are visited. To do this a queue is used. All the adjacent unvisited nodes of the current level are pushed into the queue and the nodes of the current level are marked visited and popped from the queue.
</p>
<h3>BFS step-by-step</h3>
Example in a undirected graph with 5 vertices.
<p align="center">
<b>Step 1:</b> Initially queue and visited arrays are empty
</p>
<p align="center">
<img src="https://cdn.programiz.com/sites/tutorial2program/files/graph-bfs-step-0.png" alt="step1" width="80%">
</p>
<p align="center">
<b>Step 2:</b> Push node 0 into queue and mark it visited and put all its adjacent vertices in the queue
</p>
<p align="center">
<img src="https://cdn.programiz.com/sites/tutorial2program/files/graph-bfs-step-1.png" alt="step2" width="80%">
</p>
<p align="center">
<b>Step 3:</b> Now, delete node 1 from queue and add it to visited. Insert all neighbors of node 1 to queue (if it's not there).
</p>
<p align="center">
<img src="https://cdn.programiz.com/sites/tutorial2program/files/graph-bfs-step-2_2.png" alt="step3" width="80%">
</p>
<p align="center">
<b>Step 4:</b> Visit the next vertex in the queue - vertex 2 (delete it from queue and add to visited) - it has unvisited vertex 4, so add it to the end of the queue and visit 3, that is at the front of the queue.
</p>
<p align="center">
<img src="https://cdn.programiz.com/sites/tutorial2program/files/graph-bfs-step-3.png" alt="step4" width="80%">
</p>
<p align="center">
<b>Step 5:</b> 
elete node 3 from queue and add it into visited. Insert all neighbors of node 3 to queue. Since all the neighbors of node 3 are already present, we will not insert them again.
</p>
<p align="center">D
<img src="https://cdn.programiz.com/sites/tutorial2program/files/graph-bfs-step-4.png" alt="step5" width="80%">
</p>
<p align="center">
<b>Step 6:</b> - Visit the last one node from queue. Delete node 4 from there and add to visited. Since all of its neighbors have already been added, so we will not insert them again. Now, all the nodes are visited.
</p>
<p align="center">
<img src="https://cdn.programiz.com/sites/tutorial2program/files/graph-bfs-step-5.png" alt="step6" width="80%">
</p>
<p align="center">
 Since the queue is empty, we have completed the Breadth First Traversal of the graph.
</p>
<h2>DFS - Depth-First Search</h2>
<p>
The DFS algorithm, which stands for Depth-First Search, is another fundamental graph traversal algorithm used to systematically explore a graph. Unlike BFS, which explores nodes level by level, DFS explores as far as possible along each branch before backtracking.
</p>
<h3>How it works?</h3>
<p>
Depth-first search is an algorithm for traversing or searching tree or graph data structures. The algorithm starts at the root node (selecting some arbitrary node as the root node in the case of a graph) and explores as far as possible along each branch before backtracking.
</p>
<h3>DFS step-by-step</h3>
 Example in a undirected graph with 5 vertices.
<p align="center">
<b>Step 1:</b> Initially stack and visited arrays are empty
</p>
<p align="center">
<img src="https://cdn.programiz.com/sites/tutorial2program/files/graph-dfs-step-0.png" alt="step1" width="80%">
</p>

<p align="center">
<b>Step 2:</b> Put node 0 (starting vertex) to visited list and push all its adjacent vertices in the stack
</p>
<p align="center">
<img src="https://cdn.programiz.com/sites/tutorial2program/files/graph-dfs-step-1.png" alt="step2" width="80%">
</p>

<p align="center">
<b>Step 3:</b> Now, Node 1 at the top of the stack, so visit node 1 and pop it from the stack and put all of its adjacent nodes which are not visited in the stack
</p>
<p align="center">
<img src="https://cdn.programiz.com/sites/tutorial2program/files/graph-dfs-step-2.png" alt="step3" width="80%">
</p>

<p align="center">
<b>Step 4:</b> Here, Node 2 at the top of the stack, so visit node 2 and pop it from the stack and put all of adjacent nodes which are not visited in the stack (i.e, 3,4)
</p>
<p align="center">
<img src="https://cdn.programiz.com/sites/tutorial2program/files/graph-dfs-step-3.png" alt="step4" width="80%">
</p>

<p align="center">
<b>Step 5:</b> Now, Node 4 at the top of the stack, so visit node 4 and pop it from the stack and put all of its adjacent nodes which are not visited in the stack
</p>
<p align="center">
<img src="https://cdn.programiz.com/sites/tutorial2program/files/graph-dfs-step-4.png" alt="step5" width="80%">
</p>

<p align="center">
<b>Step 6:</b> Now, Node 3 at the top of the stack, so visit node 3 and pop it from the stack and put all of its adjacent nodes which are not visited in the stack.
</p>
<p align="center">
<img src="https://cdn.programiz.com/sites/tutorial2program/files/graph-dfs-step-5.png" alt="step6" width="80%">
</p>
<h3>BFS vs DFS</h3>
<h2>References</h2>
<ul>
  <li>Images are taken from <a href="https://www.programiz.com/dsa/graph-bfs">here</a></li>
  <li>GIFs are taken from <a href="https://github.com/kdn251/interviews">here</a></li>
</ul>
