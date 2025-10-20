int main(void) {

    int A;
    int i, j = 0;
    char star = '*';
    char space = ' ';

    scanf("%d", &A);

    for(i = 0; i < A; i++) {

        for(j = 1; j < A - i; ++j) {
            printf("%c", space);
        }
        
        for(j = 0; j < i + 1 ; j++)  {
            printf("%c", star);
        }            
        printf("\n");
        }
    
    return 0;

}