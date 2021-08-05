#include <stdio.h>

int main(){
    // Append Part
    // We will write the first six multiples of 10 in 3 lines (10, 20, 30 40, 50, 60)
    // new data will be appended at the end of the file
    // Previous data will not be erased of data.txt
    // If data.txt doesn't exist, it will be created

    FILE *fp = fopen("data.txt", "a");

    int x,y;
    int z;
    for (int i = 0; i < 3; i++){
        scanf("%d %d", &x, &y);
        fprintf(fp, "%d %d\n", x, y);
    }
    fclose(fp);

    fp = fopen("data.txt", "r");
    printf("The file contains: \n");

    // Every file has a marker named End of File (EOF). It is essentially an integer.
    // A file can be read unless the EOF is encountered.
    while (fscanf(fp, "%d %d", &x, &y) != EOF) {
        printf("%d %d\n", x, y);
    }

//    while (fscanf( fp, "%d %d %d", &x, &y, &z) != EOF){
//
////         printf("%d ", x);
//         printf("%d %d %d\n", x,y,z);
//
////
////         fscanf( fp, "%d", &y);
////         printf(" %d ", y);
////         printf("\n");
//    }

    fclose(fp);


return 0;
}


