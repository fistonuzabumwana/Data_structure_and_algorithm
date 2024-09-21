#include <stdio.h>
int main() {
    int n,p, b=0;

    printf("Enter size of an array : \n");
    scanf("%d", &n);

    float LA[n];

    printf("Enter element of an array of %d size: \n", n);

    for (int i=0;i<n;i++) {
        scanf("%f", &LA[i]);
    }

    printf("Element of an array before insertion:\n");
    for (int i=0;i<n;i++) {
        printf("LA[%d] = %.2f \n",i, LA[i]);
    }

    printf("select array position to insert:");
    scanf("%d",&p);

    for (int i=0;i<n;i++) {
        if (p==i) {
            b++;
        }
    }

    if(b!=0) {
        printf("Insert an element to array LA[%d]: ",p);
        scanf("%f", &LA[p]);
    }
    else {
        printf("Invalid position!!!");
        goto g;
    }

    printf("Element of an  array after insertion:\n");
    for (int i=0;i<n;i++) {
        printf("LA[%d] = %.2f \n",i, LA[i]);
    }



    g:
return 0;
}