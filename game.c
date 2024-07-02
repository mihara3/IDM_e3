#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(){
    int i, heads = 0, tails = 0, a;
    char str[100];
    printf("Who are you?\n");
    printf("> ");
    scanf("%s", str);
    printf("Hello, %s!\n", str);
    printf("Tossing a coin...\n");
    for(i = 0; i < 3; i++){
        printf("Round %d: ", i+1);
        srand((unsigned int)time(NULL)); // create rand based on time
        a = rand();
        if(a%2 == 0){
            printf("Heads\n");
            heads++;
        }
        else{
            printf("Tails\n");
            tails++;
        }
        if(i < 2) sleep(1); // wait 1 second
    }
    printf("Heads: %d, Tails: %d\n", heads, tails);
    if(heads > tails) printf("%s won!\n", str);
    else printf("%s lost\n", str);
    return 0;
}