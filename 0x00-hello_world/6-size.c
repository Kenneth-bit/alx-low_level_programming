#include<stdio.h>
int main() {
    int intType;
    float floatType;
    long int longType;
    long long int longlongType;
    char charType;
    long long int longlongType;

    // sizeof evaluates the size of a variable
    printf("Size of a char: %zu byte(s)\n", sizeof(charType));
    printf("Size of a int: %zu byte(s)\n", sizeof(intType));
    printf("Size of a long int: %zu byte(s)\n", sizeof(longType));
    printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongType));
    printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
    
    return (0);
}
