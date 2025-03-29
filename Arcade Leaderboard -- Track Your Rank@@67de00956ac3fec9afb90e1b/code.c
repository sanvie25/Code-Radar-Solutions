#include <stdio.h>

void trackPlayerRanks(int ranked[], int n, int player[], int m, int result[]) {
    int uniqueScores[200000], rank[200000], uniqueCount = 0;

    uniqueScores[0] = ranked[0];
    rank[0] = 1;
    uniqueCount = 1;

    for (int i = 1; i < n; i++) {
        if (ranked[i] != ranked[i - 1]) {  
            uniqueScores[uniqueCount] = ranked[i];
            rank[uniqueCount] = uniqueCount + 1;
            uniqueCount++;
        }
    }

    int index = uniqueCount - 1; 
    for (int i = 0; i < m; i++) {
        while (index >= 0 && player[i] >= uniqueScores[index]) {
            index--; 
        }
        result[i] = index + 2; 
    }
}

int main() {
    int n, m;
    scanf("%d", &n);
    int ranked[200000];
    for (int i = 0; i < n; i++) scanf("%d", &ranked[i]);

    scanf("%d", &m);
    int player[200000];
    for (int i = 0; i < m; i++) scanf("%d", &player[i]);

    int result[200000];

    trackPlayerRanks(ranked, n, player, m, result);

    for (int i = 0; i < m; i++) printf("%d\n", result[i]);

    return 0;
}
