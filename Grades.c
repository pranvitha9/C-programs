#include<stdio.h>
int main()
    {
        float m1,m2,m3,total,average;
        char grade;
        printf("Enter marks for three subjects(out of 100):");
        //Arithmetic Operations
            total=m1+m2+m3;
            average=total/3;
        //Display total and average
            printf("\n TotalMarks=%.2f",total);
            printf("\n Average Marks=%.2f",average);
        //Determine grade using if-else
            if(average>=90)
                    grade='A';
            else if(average>=80)
                grade='B';
            else if(average>=70)
                grade='C';
            else if(average>=60)
                grade='D';
            else if(average>=50)
                grade='E';
            else
                grade='F';
        //Display grade
            printf("\n grade=%c",grade);
        //Determine PASS/FAIL
            if("average>=50 && m1>=50 && m2>=50 && m3>=50")
                printf("\n Result:PASS\n");
            else
                printf("\n Result:FAIL\n");
            return 0;
            }
