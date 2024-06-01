#include<stdio.h>
int main() {
    int score;
    scanf("%d", &score);
    if (90 <= score && score <= 100) printf("%c", 'A');
    else if (80 <= score && score < 90) printf("%c", 'B');
    else if (70 <= score && score < 80) printf("%c", 'C');
    else if (60 <= score && score < 70) printf("%c", 'D');
    else printf("%c", 'F');
}