#include <stdio.h>

int main(){
    // Write Part
    // We will write the first six Fibonacci numbers in 3 lines (1 1 2 3 5 8)
    // All the previous data will be erased of data.txt
    // If data.txt doesn't exist, it will be created

    FILE *fp = fopen("data.txt", "w");

    int x,y;
    for (int i = 0; i < 3; i++){
        scanf("%d %d", &x, &y);

        // txt File writing syntax : fprintf()
        fprintf(fp, "%d %d\n\n", x, y);
    }
    fclose(fp);

    fp = fopen("data.txt", "r");
    printf("The file contains: \n");


    // Usually, scanf(), printf(), fscanf(), fprintf() return the number of arguments they have pursed.
    // As long as fscanf() purse two integers in a single line, in other words, it reaches until the end of file - the loop will run
    while (fscanf(fp, "%d %d", &x, &y) == 2){
        printf("%d %d\n", x, y);
    }
    fclose(fp);


return 0;
}

