   #include<stdio.h>

void main(){
    
   int ary[10];
   int min;
   int max;
   int total=0;
   int i;
   float avg;
   for(i=0;i<3;i++){
       scanf("%d",&ary[i]);
       total+=ary[i];
       avg=(float)total/i;
       if(i==0){
           
           max=ary[0];
           min=ary[0];
       }
       else{
           if(ary[i]>max)
           max=ary[i];
           if(ary[i]<min)
           min=ary[i];
       }
   }
  
   printf("max %d\n",max);
   printf("min %d\n",min);
   printf("total %d\n",total);
   printf("avg %f",avg);
}