#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    
    int arr[N];
    int change_count[N];
    
    for (int i = 0; i < N; i++) {
        arr[i] = 0;
        change_count[i] = 0;
    }
    
    for (int i = 0; i < M; i++) {
        int type;
        scanf("%d", &type);
        
        if (type == 1) {
            int x, y;
            scanf("%d %d", &x, &y);
            arr[x] = y;
            change_count[x]++;
        } else if (type == 2) {
            int x, y;
            scanf("%d %d", &x, &y);
            printf("%d\n", arr[x]);
        } else if (type == 3) {
            int x;
            scanf("%d", &x);
            printf("%d\n", change_count[x]);
        }
    }
    
    return 0;
}
