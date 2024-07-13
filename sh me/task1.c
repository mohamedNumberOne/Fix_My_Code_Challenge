#include <stdio.h>

typedef struct Person {
    char name[50];
    int age;
} Person;

void print_person(Person *p) {
    printf("Name: %s\n", p->name);
    printf("Age: %d\n", p->age);
}

int main() {
    Person john;
    strcpy(john.name, "John Doe");
    john.age = 30;
    
    print_person(&john);

    return 0;
}
