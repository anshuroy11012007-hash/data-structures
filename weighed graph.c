#include <stdio.h>
#include <stdlib.h>

// Structure to represent an edge in a weighted graph
struct Edge {
    int target;       // Destination node
    int weight;       // Weight of the edge
    struct Edge* next; // Link to the next neighbor (Adjacency List)
};

// Structure to represent a vertex
struct Vertex {
    int id;
    struct Edge* neighbors;
};

int main() {
    // 1. Allocation: Create 3 Vertices (Node 0, 1, 2)
    struct Vertex* v0 = (struct Vertex*)malloc(sizeof(struct Vertex));
    struct Vertex* v1 = (struct Vertex*)malloc(sizeof(struct Vertex));
    struct Vertex* v2 = (struct Vertex*)malloc(sizeof(struct Vertex));

    v0->id = 0; v0->neighbors = NULL;
    v1->id = 1; v1->neighbors = NULL;
    v2->id = 2; v2->neighbors = NULL;

    // 2. Allocation: Create 4 Edges
    struct Edge* e1 = (struct Edge*)malloc(sizeof(struct Edge));
    struct Edge* e2 = (struct Edge*)malloc(sizeof(struct Edge));
    struct Edge* e3 = (struct Edge*)malloc(sizeof(struct Edge));
    struct Edge* e4 = (struct Edge*)malloc(sizeof(struct Edge));

    // 3. Building the Structure (Manually linking 4 edges)
    
    // Edge 1: Node 0 -> Node 1 (Weight: 10)
    e1->target = 1; e1->weight = 10; e1->next = NULL;
    v0->neighbors = e1;

    // Edge 2: Node 0 -> Node 2 (Weight: 5)
    e2->target = 2; e2->weight = 5; e2->next = v0->neighbors; 
    v0->neighbors = e2; // Node 0 now points to both 1 and 2

    // Edge 3: Node 1 -> Node 2 (Weight: 2)
    e3->target = 2; e3->weight = 2; e3->next = NULL;
    v1->neighbors = e3;

    // Edge 4: Node 2 -> Node 0 (Weight: 7)
    e4->target = 0; e4->weight = 7; e4->next = NULL;
    v2->neighbors = e4;

    // 4. Printing the graph logic
    struct Vertex* graph[] = {v0, v1, v2};
    for (int i = 0; i < 3; i++) {
        printf("Vertex %d connects to:\n", graph[i]->id);
        struct Edge* temp = graph[i]->neighbors;
        while (temp != NULL) {
            printf("  -> Node %d (Weight: %d)\n", temp->target, temp->weight);
            temp = temp->next;
        }
    }

    return 0;
}