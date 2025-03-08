#include <stdio.h> 

int main(){ 

    char name[20]; 
    char title[][20] = {"국어", "수학", "영어"}; 
    int score[3] = {0}; 
    int sum = 0; 
    int i; 
    double avg; 

    printf("학생 이름 입력: "); 
    scanf("%s", name); 

    for(i = 0; i < 3; i++){ 
        printf("점수 입력: "); 
        scanf("%d", &score[i]); 
        sum += score[i]; 
    }

    avg = sum / 3.0; 
    printf("%s 학생의 합계는 %d이고\n", name, sum); 
    printf("평균은 %.2f 입니다.", avg); 

    return 0; 

}