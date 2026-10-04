#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    typedef struct student{
        char name[20];
        int rollno; 
        int sub1;
        int sub2;
        int sub3;           
        int sub4;
        int sub5;
        int total;
        float percentage;
        char result[10];
    } student;
    printf("Enter the number of students:\n");
    int n, i;
    scanf("%d",&n);
    if(n <= 0){
    printf("Invalid number of students.\n");
    return 0;
}
    student s[n];
    for(int i=0;i<n;i++){
        printf("Enter the name of student %d:\n",i+1);
        scanf("%s",s[i].name);
        printf("Enter the roll number of student %s:",s[i].name);
        scanf("%d",&s[i].rollno);
        printf("Enter the marks of student %s in subject 1:\n",s[i].name);
        scanf("%d",&s[i].sub1);
        printf("Enter the marks of student %s in subject 2:\n",s[i].name);
        scanf("%d",&s[i].sub2);
        printf("Enter the marks of student %s in subject 3:\n",s[i].name);
        scanf("%d",&s[i].sub3);
        printf("Enter the marks of student %s in subject 4:\n",s[i].name);
        scanf("%d",&s[i].sub4);
        printf("Enter the marks of student %s in subject 5:\n",s[i].name);
        scanf("%d",&s[i].sub5);
        s[i].total = s[i].sub1 + s[i].sub2 + s[i].sub3 + s[i].sub4 + s[i].sub5;
        s[i].percentage = (float)s[i].total / 5;
        if(s[i].percentage >=90)
            strcpy(s[i].result,"Outstanding");
        else if(s[i].percentage >=75)
            strcpy(s[i].result,"excellent");
        else if(s[i].percentage >=60)
            strcpy(s[i].result,"good");
        else if(s[i].percentage >=50)
            strcpy(s[i].result,"average");
        else if(s[i].percentage >=40)
            strcpy(s[i].result,"just pass");
        else
            strcpy(s[i].result,"Fail");    
    }
      printf("\n\nStudent Details:\n");
    for(int i=0;i<n;i++){
        printf("\nName: %s\n",s[i].name);
        printf("Roll Number: %d\n",s[i].rollno);
        printf("Total Marks: %d\n",s[i].total);
        printf("Percentage: %.2f%%\n",s[i].percentage);
        printf("Result: %s\n",s[i].result);
    }
    printf("\n\nClass Summary:\n");
    printf("Topper of the class:\n");
    int topperIndex = 0;
    for(int i=1;i<n;i++){
        if(s[i].percentage > s[topperIndex].percentage){
            topperIndex = i;
        }
    }
    printf("Name: %s\n",s[topperIndex].name);
    printf("Roll Number: %d\n",s[topperIndex].rollno);
    printf("Total Marks: %d\n",s[topperIndex].total);
    printf("Percentage: %.2f%%\n",s[topperIndex].percentage);
    printf("Result: %s\n",s[topperIndex].result);
    printf("\n\nSubject highest marks:\n");
    int highestSub1 = s[0].sub1;
    int highestSub2 = s[0].sub2;    
    int highestSub3 = s[0].sub3;
    int highestSub4 = s[0].sub4;
    int highestSub5 = s[0].sub5;
    for(int i=1;i<n;i++){
        
        if(s[i].sub1 > highestSub1)
            highestSub1 = s[i].sub1;
        if(s[i].sub2 > highestSub2)
            highestSub2 = s[i].sub2;
        if(s[i].sub3 > highestSub3)
            highestSub3 = s[i].sub3;
        if(s[i].sub4 > highestSub4)
            highestSub4 = s[i].sub4;
        if(s[i].sub5 > highestSub5)
            highestSub5 = s[i].sub5;
    }
    printf("Highest marks in subject 1: %d\n", highestSub1);
    printf("Highest marks in subject 2: %d\n", highestSub2);
    printf("Highest marks in subject 3: %d\n", highestSub3);
    printf("Highest marks in subject 4: %d\n", highestSub4);
    printf("Highest marks in subject 5: %d\n", highestSub5);
    printf("\n\nnumber of students passed and failed:\n");
    int passedCount = 0;
    int failedCount = 0;    
    for(int i=0;i<n;i++){
        if(strcmp(s[i].result,"Fail")==0)
            failedCount++;
        else
            passedCount++;
    }
    printf("Number of students passed: %d\n", passedCount);
    printf("Number of students failed: %d\n", failedCount);
    printf("\n\nAverage marks of the class:\n");
    float Sub1sum = 0;
    float Sub2sum = 0;
    float Sub3sum = 0;
    float Sub4sum = 0;
    float Sub5sum = 0;
    for(int i=0;i<n;i++){
        Sub1sum += s[i].sub1;
        Sub2sum += s[i].sub2;
        Sub3sum += s[i].sub3;
        Sub4sum += s[i].sub4;
        Sub5sum += s[i].sub5;
    }
    printf("Average marks in subject 1: %.2f\n", Sub1sum/n);
    printf("Average marks in subject 2: %.2f\n", Sub2sum/n);
    printf("Average marks in subject 3: %.2f\n", Sub3sum/n);
    printf("Average marks in subject 4: %.2f\n", Sub4sum/n);
    printf("Average marks in subject 5: %.2f\n", Sub5sum/n);
    printf("Average marks of the class: %.2f\n", (Sub1sum + Sub2sum + Sub3sum + Sub4sum + Sub5sum)/(5*n));
    printf("\n\nStandard deviation of the class:\n");
    float sqsum=0,totalsum=0;
    for(i=0;i<n;i++){
        sqsum+=s[i].total*s[i].total;
        totalsum+=s[i].total;
    }
    float mean=totalsum/n;
    float variance=(sqsum/n)-(mean*mean);
    float stdvar=sqrt(variance);
    printf("Standard deviation of the class: %.2f\n", stdvar);
    float gradeAplus=mean+2*stdvar;
    printf("Total marks required for A+ grade: %.2f\n", gradeAplus);
    int AplusCount=0;
    for(i=0;i<n;i++){
        if(s[i].total>=gradeAplus){
            AplusCount++;
            
        }
    }


    printf("Number of students with A+ grade: %d\n", AplusCount);
    printf("\n\nThank you for using the student management system!\n");

    return 0;
    }
