#include <stdio.h>
int main() {
    char name[];
    int age;
    char hobby[];
    scanf("%s",&name);
    scanf("%d", &age);
    scanf("%s", &hobby);
    printf("Name: %s\n Age: %d\n Hobby: %s",name,age,hobby);
    return 0;
}