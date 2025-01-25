#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Define a hash table for tracking stamped cells
#define MAX_HASH 10000007
typedef struct {
    int x, y;
} Point;

typedef struct {
    Point key;
    bool exists;
} HashEntry;

HashEntry hashTable[MAX_HASH];

// Hash function for a point
int hash(Point p) {
    return ((p.x * 31) + p.y) % MAX_HASH;
}

// Insert a point into the hash table
void insert(Point p) {
    int h = hash(p);
    while (hashTable[h].exists && (hashTable[h].key.x != p.x || hashTable[h].key.y != p.y)) {
        h = (h + 1) % MAX_HASH;
    }
    hashTable[h].key = p;
    hashTable[h].exists = true;
}

// Check if a point exists in the hash table
bool exists(Point p) {
    int h = hash(p);
    while (hashTable[h].exists) {
        if (hashTable[h].key.x == p.x && hashTable[h].key.y == p.y) {
            return true;
        }
        h = (h + 1) % MAX_HASH;
    }
    return false;
}

// Clear the hash table for the next test case
void clearHashTable() {
    for (int i = 0; i < MAX_HASH; i++) {
        hashTable[i].exists = false;
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, m;
        scanf("%d %d", &n, &m);

        clearHashTable();

        int x, y;
        for (int i = 0; i < n; i++) {
            scanf("%d %d", &x, &y);
            for (int dx = 0; dx < m; dx++) {
                for (int dy = 0; dy < m; dy++) {
                    Point p = {x + dx, y + dy};
                    insert(p);
                }
            }
        }

        // Calculate perimeter
        int perimeter = 0;
        int dx[] = {1, -1, 0, 0};
        int dy[] = {0, 0, 1, -1};
        for (int i = 0; i < MAX_HASH; i++) {
            if (hashTable[i].exists) {
                Point p = hashTable[i].key;
                for (int d = 0; d < 4; d++) {
                    Point neighbor = {p.x + dx[d], p.y + dy[d]};
                    if (!exists(neighbor)) {
                        perimeter++;
                    }
                }
            }
        }

        printf("%d\n", perimeter);
    }

    return 0;
}


