#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int tspGreedy(vector<vector<int>>& graph, int start) {
    int n = graph.size();
    vector<bool> visited(n, false);
    int cost = 0, current = start;

    visited[current] = true;

    for (int count = 1; count < n; count++) {
        int nextCity = -1, minDist = INT_MAX;

        for (int i = 0; i < n; i++) {
            if (!visited[i] && graph[current][i] < minDist) {
                minDist = graph[current][i];
                nextCity = i;
            }
        }

        visited[nextCity] = true;
        cost += minDist;
        current = nextCity;
    }

    cost += graph[current][start]; // return to starting city
    return cost;
}

int main() {
    vector<vector<int>> graph = {
        {0, 10, 15, 20},
        {10, 0, 35, 25},
        {15, 35, 0, 30},
        {20, 25, 30, 0}
    };

    int start = 0;
    cout << "Approximate minimum tour cost = " 
         << tspGreedy(graph, start) << endl;

    return 0;
}
