#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float ped(float p1,float p2,float q1,float q2);
float xed(float pp1,float pp2,float qq1,float qq2);
float yed(float ppp1,float ppp2,float qqq1,float qqq2);
int main()
{
   char type,res;
   float p1,p2,q1,q2;
   float pp1,pp2,qq1,qq2;
   float ppp1,ppp2,qqq1,qqq2;
   do{printf("Select the option\nPrice elasticity of demand(Enter A)\nCross elasticity of demand(Enter B)\nIncome elasticity of demand(Enter C)\n\n");
   printf("Enter the option type(A or B or C):\n");
   scanf("%s",&type);
   switch(type){
       case 'A' : case 'a' :printf("\nEnter the pre-change price of the product x(Rs.):\n");
                            scanf("%f",&p1);
                            printf("\nEnter the post-change price of the product x(Rs.):\n");
                            scanf("%f",&p2);
                            printf("\nEnter the quantity demand of the pre-change price of product:\n");
                            scanf("%f",&q1);
                            printf("\nEnter the quantity demand of the post-change price of product:\n");
                            scanf("%f",&q2);
                            float ans=ped(p1,p2,q1,q2);
                            float result = fabs(ans);
                            printf("\nPED=%.2f\n",result);
                            if(result<1){
                                if(p2>p1){
                                  printf("Total revenue is increased\n");
                                }
                                else{
                                  printf("Total revenue is decreased\n");
                                }
                            }
                            else{
                              if(p2>p1){
                                  printf("Total revenue is decreased\n");
                                }
                                else{
                                  printf("Total revenue is increased\n");
                                }
                            }
                           
       break;
       
       case 'B' : case 'b' :printf("\nEnter the pre-change price of the another product y(Rs.):\n");
                            scanf("%f",&pp1);
                            printf("\nEnter the post-change price of the another product y(Rs.):\n");
                            scanf("%f",&pp2);
                            printf("\nEnter the quantity demand of product at the pre-change price of another product:\n");
                            scanf("%f",&qq1);
                            printf("\nEnter the quantity demand of product at the post-change price of another product:\n");
                            scanf("%f",&qq2);
                            float anss=xed(pp1,pp2,qq1,qq2);
                            printf("\nXED=%.2f\n",anss);
                             if(anss>0){
                                printf("Both of these products are Substitutes goods\n");
                            }
                            else
                            printf("Both of these products are Complementary goods\n");
       break;
       
       case 'C' : case 'c' :printf("\nEnter the pre-change income(Rs.):\n");
                            scanf("%f",&ppp1);
                            printf("\nEnter the post-change income(Rs.):\n");
                            scanf("%f",&ppp2);
                            printf("\nEnter the quantity demand of product at the pre-change income:\n");
                            scanf("%f",&qqq1);
                            printf("\nEnter the quantity demand of product at the post-change income:\n");
                            scanf("%f",&qqq2);
                            float ansss=yed(ppp1,ppp2,qqq1,qqq2);
                            printf("\nYED=%.2f\n",ansss);
                            if(ansss>0){
                                printf("This product is Normal good\n");
                            }
                            else
                            printf("This product is Inferior good\n");
       break;
       break;
       
       default:printf("Invalid character\n ");
       break;
   }
    printf("\nDo you want to go another option(y or n):\n");
    scanf("%s",&res);
   } while(res=='y'||res=='Y');

    return 0;
}
float ped(float p1,float p2,float q1,float q2){
    
    float ans=((q1-q2)*p1)/((p1-p2)*q1);
    return ans;
    
}
float xed(float pp1,float pp2,float qq1,float qq2){
    
    float anss=((qq1-qq2)*pp1)/((pp1-pp2)*qq1);
    return anss;
    
}
float yed(float ppp1,float ppp2,float qqq1,float qqq2){
    
    float ansss=((qqq1-qqq2)*ppp1)/((ppp1-ppp2)*qqq1);
    return ansss;
    
}
