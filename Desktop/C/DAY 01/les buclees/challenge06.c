//challenge 06 / les bucles / dya 01
#include <stdio.h>

int main() {
    int n, i;
   
   
    printf("Entrez un nombre entier n : ");
    scanf("%d", &n);
    
  
    for (i = 0; i < n; i++) {
        
        printf("%d", 2 * i );
        
        
        if (i < n - 1) {
            printf(", ");
        }
    }
    
    
    printf("\n");
    
    return 0;
}