#include <stdio.h>
#include <stdbool.h>
void qla(){
int a=0,b=0,c=1;
for(a=0;a<3;a=a+1){
for(b=c;b>a;b=b-1){
c=c+2;
}
printf("C : %d \n",c);
}
printf("A : %d \n",a);
printf("B : %d \n",b);
}
void qlb(){
int i=0;
for(;i<20;i++){
if(i%3==1 || (i >10 && i%2==0)){
printf("%d-",i);
}
}
printf("%d\n",i);
}
int sum_function(int n){
int i,result=0;
for(i=0;i<=n;i++){
int step_result = 5*i-2;
result = result+step_result;
}
return result;
}
double difference_function(double array[],int size){
int i;
double sum_of_3s=0, sum_of_5s=0;
double difference;
for(i=0;i<size;i++){
if(i % 3 == 0){
sum_of_3s = sum_of_3s+array[i];
}
if(i % 5 == 0){
sum_of_5s = sum_of_5s+array[i];
}
}
difference = sum_of_3s - sum_of_5s;
return difference;
}
int distinct_function(int array_1[],int array_2[],int size_1,int size_2){
int i,j,number_of_elements = 0;
for(i=0;i<size_1;i++){
bool isFound = false;
int array_1_number = array_1[i];
for(j=0;j<size_2;j++){
int array_2_number = array_2[j];
if(array_1_number == array_2_number){
isFound = true;
j = size_2;
//break;
}
}
if(!isFound) {
number_of_elements++;
}
/*
if(j == size_2){
number_of_elements++;
}*/
}
return number_of_elements++;
}
int main(){
int i,n,size_1,size_2;
printf("Qla \n");
qla();
printf("Qlb \n");
qlb();
printf("Enter function parameter 'n' \n");
scanf("%d",&n);
printf("Result of function : %d \n ",sum_function(n));
printf("Enter array size \n");
scanf("%d",&size_1);
double array[size_1];
for(i=0;i<size_1;i++){
printf("Enter element for array \n");
scanf("%f",&array[i]);
}
printf("Difference : %f \n",difference_function(array,size_1));
printf("Enter first array size \n");
scanf("%d",&size_1);
int array_1[size_1];
for(i=0;i<size_1;i++){
printf("Enter element for array_1 \n");
scanf("%d",&array_1[i]);
}
printf("Enter second array size \n");
scanf("%d",&size_2);
int array_2[size_2];
for(i=0;i<size_2;i++){
printf("Enter element for array_2 \n");
scanf("%d",&array_2[i]);
}
printf("Number of elements : %d\n",distinct_function(array_1,array_2,size_1,size_2));
return 0;
}
