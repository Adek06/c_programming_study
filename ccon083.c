#include<stdio.h>
#include<string.h>
typedef struct{
int num;
char name[20],sex[2];
int age,score;
}STU;
STU mystudent[]={
{1111,"Zhangqiang","m",20,80},
{2104,"Liminghong","w",18,82},
{3121,"Wangxingda","m",21,78},
{4118,"Liushaotao","m",20,90},
{1456,"Wuminghong","w",35,86}
};
void sort(STU *ps,int size)
{
int i,/*flag,*/pass;
/**/
STU temp;
/**/
for(pass=1;pass<size;pass++){
//  flag=0;
  for(i=0;i<size-pass;i++)
    if(/**/ps[i].num>ps[i+1].num/**/)
    {
//        flag+=1;
        temp=ps[i];ps[i]=ps[i+1];ps[i+1]=temp;
      }
  //  if(/**/flag=0/**/) break;
  }
}
void main()
{
  int i,size=sizeof(mystudent)/sizeof(STU);
  printf("Students\'information before sort:\n\n");
  printf("Number Name age Sex score\n\n");
  for(i=0;i<size;i++)
  printf("%-7d%s%10d\t%s%8d\n",(mystudent+i)->num,
  (mystudent+i)->name,(mystudent+i)->age,
  (mystudent+i)->sex,(mystudent+i)->score);
  sort(mystudent,size);
  printf("\nStudents\'information after sort:\n\n");
  printf("Number Name age Sex score\n\n");
  for(i=0;i<size;i++)
  printf("%-7d%s%10d\t%s%8d\n",(mystudent+i)->num,
  (mystudent+i)->name,(mystudent+i)->age,
  (mystudent+i)->sex,(mystudent+i)->score);

}
