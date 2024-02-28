//#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <list>
#include <algorithm>
#include <queue>
#include <vector>
#include <random>

using namespace std;

class Graph
{
	int numVertices;
	list<int>* adjLists;
	bool* visited;

public:
	Graph(int V);
	void addEdge(int src, int dest);
	void DFS(int vertex);
	void task();
};

// Graph initialization
Graph::Graph(int vertices)
{
	numVertices = vertices;
	adjLists = new list<int>[vertices];
	visited = new bool[vertices];
}

// Adding edges
void Graph::addEdge(int src, int dest)
{
	adjLists[src].push_front(dest);
}

// Algorithm
void Graph::DFS(int vertex)
{
	visited[vertex] = true;
	list<int> adjList = adjLists[vertex];
	cout << vertex << " ";
	list<int>::iterator i;
	for (i = adjList.begin(); i != adjList.end(); ++i)
		if (!visited[*i])
			DFS(*i);
}

// Creating random values for each edge and find the highest value
void Graph::task() {
	int value = 0;
	int maxValue = 0;
	int maxVertex = 0;
	random_device rd2;
	uniform_int_distribution<> ud2(0, 100);
	for (int vertex = 0; vertex < numVertices; vertex++) {
		value = ud2(rd2);
		cout << "Edge no. " << vertex << " has value: " << value << endl;
		if (value > maxValue) {
			maxVertex = vertex;
			maxValue = value;
		}
	}
	cout << "Max value : " << maxValue << " edge no. " << maxVertex << endl;
}

int main()
{
	random_device rd;
	uniform_int_distribution<> ud(0, 3);
	Graph g(4);
	g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(1, 2);
	g.addEdge(2, 3);
	g.DFS(0);
	cout << endl;
	g.task();


	system("pause");
	return 0;
}