#include <stdio.h>

#define MAX_MOBILES 100

struct Mobile {
    char company_name[50];
    char color[20];
    char model[50];
    float price;
};

int main() {
    int N, i;
    struct Mobile mobiles[MAX_MOBILES];


    printf("Enter the number of mobiles: ");
    scanf("%d", &N);

    if (N > MAX_MOBILES) {
        printf("Maximum limit of mobiles is %d.\n", MAX_MOBILES);
        return 1;
    }

    for (i = 0; i < N; i++) {
        printf("\nEnter details for mobile %d:\n", i + 1);
        printf("Company Name: ");
        scanf("%s", mobiles[i].company_name);
        printf("Color: ");
        scanf("%s", mobiles[i].color);
        printf("Model: ");
        scanf("%s", mobiles[i].model);
        printf("Price: ");
        scanf("%f", &mobiles[i].price);
    }

    printf("\nMobile Details:\n");
    for (i = 0; i < N; i++) {
        printf("\nMobile %d:\n", i + 1);
        printf("Company Name: %s\n", mobiles[i].company_name);
        printf("Color: %s\n", mobiles[i].color);
        printf("Model: %s\n", mobiles[i].model);
        printf("Price: %.2f\n", mobiles[i].price);
    }

    return 0;
}
