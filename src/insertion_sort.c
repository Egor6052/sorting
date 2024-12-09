#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void insertion_sort(char *items, int count);

int main(){
    char s[255];
    printf("Enter string: ");
    scanf("%s", s);
    insertion_sort(s, strlen(s));
    printf("Sorted string: %s\n", s);

    return 0;
}

void insertion_sort(char *items, int count) {
   int a, b;
   char t;
   for (a = 1; a < count; ++a){
    t = items[a];
        for (b = a-1; (b >= 0) && (t < items[b]); b--){
            items[b+1] = items[b];
        }
    items[b+1] = t;
   }
}
