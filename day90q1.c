#include <stdio.h>

// Define enum for Gender
enum Gender { MALE, FEMALE, OTHER };

// Define struct with enum field
struct Person {
    char name[50];
    int age;
    enum Gender gender;
};

int main() {
    struct Person p1 = {"Aaradhya", 20, MALE};
    struct Person p2 = {"Riya", 19, FEMALE};
    struct Person p3 = {"Sam", 22, OTHER};

    // Print gender for each person
    printf("Name: %s, Age: %d, Gender: ", p1.name, p1.age);
    switch (p1.gender) {
        case MALE:   printf("Male\n"); break;
        case FEMALE: printf("Female\n"); break;
        case OTHER:  printf("Other\n"); break;
    }

    printf("Name: %s, Age: %d, Gender: ", p2.name, p2.age);
    switch (p2.gender) {
        case MALE:   printf("Male\n"); break;
        case FEMALE: printf("Female\n"); break;
        case OTHER:  printf("Other\n"); break;
    }

    printf("Name: %s, Age: %d, Gender: ", p3.name, p3.age);
    switch (p3.gender) {
        case MALE:   printf("Male\n"); break;
        case FEMALE: printf("Female\n"); break;
        case OTHER:  printf("Other\n"); break;
    }

    return 0;
}