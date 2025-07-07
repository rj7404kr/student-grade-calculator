#include<stdio.h>
#include<string.h>
int main(){
    int marks[5],i;
    float total=0,average;
    char grade[2],rank[20];
    //Input marks
    printf("enter marks of 5 subjects:\n");
    for(i=0; i<5; i++){
        printf("subject %d:",i+1);
        scanf("%d",&marks[i]);
        //Validate marks
        if(marks[i]<0 || marks[i]>100){
            printf("Invalid marks.Please enter marks b/w 0 and 100.\n");
            return 1;
        }
        total=total+marks[i];
    }
    //Calulate average
    average=total/5;
    //check for pass(marks>=35)
    int pass=1;
    for(i=0; i<5; i++){
        if(marks[i]<35){
            pass=0;
            break;
        }
    }
    //Assign grade based on average
    if(average >= 90)
        grade[0] = 'A';
    else if(average >= 75)
        grade[0] = 'B';
    else if(average >= 60)
        grade[0] = 'C';
    else if(average >= 50)
        grade[0] = 'D';
    else
        grade[0] = 'E';

    grade[1] = '\0';

    //Assign Rank Based on Average
    if(average >= 90)
        snprintf(rank, sizeof(rank), "Topper");
    else if(average >= 75)
        snprintf(rank, sizeof(rank), "Excellent");
    else if(average >= 60)
        snprintf(rank, sizeof(rank), "Good");
    else if(average >= 50)
        snprintf(rank, sizeof(rank), "Average");
    else
        snprintf(rank, sizeof(rank), "Weak");
    
    //output
    printf("Total marks=%.2f\n",total);
    printf("Average=%.2f\n",average);
    printf("Grade=%s\n",grade);
    printf("Rank=%s\n",rank);

    if(pass)
       printf("Result:Pass\n");
    else
       printf("Result:Fail\n");
return 0;
}