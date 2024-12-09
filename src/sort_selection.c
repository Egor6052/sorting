#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sort_selection(char *items, int count);

int main(){
    char s[255];
    printf("Enter string: ");
    scanf("%s", s);
    sort_selection(s, strlen(s));
    printf("Sorted string: %s\n", s);

    return 0;
}

void sort_selection(char *items, int count) {
    int a, b, c;
    int exchange;
    char t;
    for(a = 0; a < count-1; ++a){
        exchange = 0;
        c = a;
        t = items[a];
        for(b =a+1; b < count; ++b){
            if(items[b] < t){
                c = b;
                t = items[b];
                exchange = 1;
            }
        }
        if (exchange){
            items[c] = items[a];
            items[a] = t;
        } 
    }
}
