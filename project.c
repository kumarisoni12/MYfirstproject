// Soni kumari
 #include<stdio.h>
 #include<stdlib.h>
 int main(){
    int pass[50]={25,1,50,15,20};
    int size=50,ne=5,i,r,ch,flag=0,rank;
    while(1){
        printf("\n **** welcome to my university ****\n");
        printf("\n 1. To view all pass student list. \n");
        printf("\n 2.To add new student in the list. ");
        printf("\n 3.To remove the roll.no from list.");
        printf("\n 4. To check roll.no is pass or not.");
        printf("\n 5.Exit");
        printf("\nenter your choice");
        scanf("%d",&ch);
        switch(ch){
            case 1:{
                for(i=0;i<ne;i++){
                    printf(" %d ",pass[i]);
                }

                break;
            }
            case 2:{
                printf("enter rank of student");
                scanf("%d",&rank);
                for(i=ne;i>rank-1;i--){
                    pass[i]=pass[i-1];
                }
                printf("enter roll.no to add in list");
                scanf("%d",&pass[rank-1]);
                    ne++;
                break;

            }
            case 3:{
                printf("enter rank to remove from list");
                scanf("%d",&rank);
                for(i=rank-1;i<=ne;i++){
                    pass[i]=pass[i+1];
                }
                ne--;
                
                break;

            }
            case 4:{
                printf("\n enter Roll.no");
                scanf("%d",&r);
                for(i=0;i<ne;i++){
                    if(pass[i]==r){
                        printf("pass");
                        flag =1;
                    }
                }
                    if(flag==0){
                        printf("fail");
                    }


                    
                    break;
                }
                
            
            case 5:{
                exit(0);
            }
        }
   
    }
    return 0;
 }

 