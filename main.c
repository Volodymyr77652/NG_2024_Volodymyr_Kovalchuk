#include <stdio.h>

void otrisovka (int probel, int zvezdochka){
    int i ;

    for(i = 0; i < probel; i++)
        printf(" ");
    for(i = 0; i < zvezdochka; i++)
        printf("*");
    printf("\n");
}

    int main() {
    int visota;
        printf("Enter the height of the tree: ");
    scanf ("%d",&visota);

        printf("\n");
    int i;

    for(i=1; i <= visota; i++)
        otrisovka(visota - i,i*2 -  1);
    for (i = 0; i< visota / 2;i++)
        {
        otrisovka(visota -1,1);
        }
    return 0;
    }
