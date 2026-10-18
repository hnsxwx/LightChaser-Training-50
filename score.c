#include <stdio.h>

struct Student {
    char name[20];   
    int score;
};

int main() {
    struct Student stu[3];
    for (int i = 0; i < 3; i++) {
        printf("请输入第%d个学生的姓名和分数:", i + 1);
        scanf("%s %d", stu[i].name, &stu[i].score);
    }
    printf("\n========== 成绩单 ==========\n");
    printf("%-10s %s\n", "姓名", "分数");
    printf("--------------------------\n");

    for (int i = 0; i < 3; i++) {
        printf("%-10s %d\n", stu[i].name, stu[i].score);
    }

    printf("==========================\n");
    return 0;
}