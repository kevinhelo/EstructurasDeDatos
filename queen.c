#include <stdio.h>

int main() {
    int x1, x2, y1, y2;
    int continuar = 1; 
    while (continuar!=0) {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

        if (x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0) {
            
            continuar = 0;
        }
        int mov = 0;
        if (x1 == x2 && y1 == y2) {
            mov = 0;
        } else if (x1 == x2 || y1 == y2 || (x1 - x2 == y1 - y2) || (x1 - x2 == y2 - y1)) {
            mov = 1;
        } else {
            mov = 2;
        }
        printf("%d\n", mov); 
    }

    return 0;
}
