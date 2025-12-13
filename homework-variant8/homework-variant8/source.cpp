#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

typedef struct {
    char name[50];
    double price;
} Dish;

typedef struct {
    char name[50];
    char address[100];
    Dish* dishes;
    int cnt;
    int capacity;
} Restaurant;

void init_dishes(Restaurant* rt) {
    rt->cnt = 0;
    rt->capacity = 5;
    rt->dishes = (Dish*)malloc(rt->capacity * sizeof(Dish));
}

void add_dishes(Restaurant* rt, const char* dish, double price) {
    if (rt->cnt >= rt->capacity) {
        rt->capacity *= 2;
        rt->dishes = (Dish*)realloc(rt->dishes, rt->capacity * sizeof(Dish));
    }
    strcpy(rt->dishes[rt->cnt].name, dish);
    rt->dishes[rt->cnt].price = price;
    rt->cnt++;
}

Restaurant* create_rest(int n) {
    Restaurant* restaurants = (Restaurant*)malloc(n * sizeof(Restaurant));
    for (int i = 0; i < n; i++) {
        init_dishes(&restaurants[i]);
    }
    return restaurants;
}

Restaurant* most_dishes(Restaurant* rts, int n) {
    if (n <= 0) {
        return NULL;
    }
    Restaurant* max_dishes = &rts[0];
    for (int i = 1; i < n; i++) {
        if (rts[i].cnt > max_dishes->cnt) {
            max_dishes = &rts[i];
        }
    }
    return max_dishes;
}

void free_dishes(Restaurant* rt) {
    free(rt->dishes);
    rt->dishes = NULL;
    rt->cnt = 0;
    rt->capacity = 0;
}

void printf_rest(const Restaurant* rt) {
    printf("Restaurant: %s\n", rt->name);
    printf("Address: %s\n", rt->address);
    printf("Number of dishes: %d\n", rt->cnt);
    printf("Menu:\n");
    for (int i = 0; i < rt->cnt; i++) {
        printf(" - %s, %.2f\n", rt->dishes[i].name, rt->dishes[i].price);
    }
}

void free_rests(Restaurant* rts, int n) {
    for (int i = 0; i < n; i++) {
        free_dishes(&rts[i]);
    }
    free(rts);
}

void clear_input_buffer() {
    int c = 0;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void clear_last_linebreak(char* str) {
    if (str != NULL) {
        str[strcspn(str, "\n")] = '\0';
    }
}

int main(int argc, char** argv[]) {
    int n = 0;
    printf("Type the number of restaurants: ");
    scanf("%d", &n);
    clear_input_buffer();
    Restaurant* rts = create_rest(n);
    for (int i = 0; i < n; i++) {
        printf("\nRestaurant %d:\n", i + 1);
        printf("The name: ");
        fgets(rts[i].name, sizeof(rts[i].name), stdin);
        clear_last_linebreak(rts[i].name);
        printf("Address: ");
        fgets(rts[i].address, sizeof(rts[i].address), stdin);
        clear_last_linebreak(rts[i].address);
        int dcnt = 0;
        printf("Number of dishes: ");
        scanf("%d", &dcnt);
        clear_input_buffer();
        printf("Type %d dish/dishes:\n", dcnt);
        for (int j = 0; j < dcnt; j++) {
            char dname[50];

            double price = 0;
            printf("Dish %d:\n", j + 1);
            printf("Name: ");
            fgets(dname, sizeof(dname), stdin);
            clear_last_linebreak(dname);
            printf("Price: ");
            scanf("%lf", &price);
            clear_input_buffer();
            add_dishes(&rts[i], dname, price);
        }
    }
    for (int i = 0; i < n; i++) {
        printf_rest(&rts[i]);
    }
    Restaurant* max_dishes_rest = most_dishes(rts, n);
    if (max_dishes_rest != NULL) {
        printf("Restaurant with most dishes:\n");
        printf_rest(max_dishes_rest);
    }
    free_rests(rts, n);
    return 0;
}