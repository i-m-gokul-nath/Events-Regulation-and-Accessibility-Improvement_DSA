#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
int prty[100]; 
struct node 
{ 
char cellname[50]; 
int data; 
struct node *next; 
}; 
struct node *start; 

 
struct ndy 
{ 
 int prtyy; 
 int *address; 
 struct ndy *neext; 
}; 
struct ndy *sttart=NULL; 
 
 
int create() 
{  
 
 
int i; 
int *p; 
struct node *new_node,*current; 
start=NULL; 
 do  { 
new_node=(struct node *)malloc(sizeof(struct node)); 
switch(i) 
{ 
 case 0: 
 { 
  printf("enter Name of the event: (NOTE: Do not include space but can use '_' )\n"); 
  scanf("%s",new_node->cellname); 
  printf("sucessfully registered event name :) \n"); 
  break; 
 } 
  case 1: 
 { 
  strncpy(new_node->cellname,"SCALE OF EVENT",50); 
  printf("\nThe scale of the event is:(choose from below): \n"); 
  printf("VERY SMALL    = 1\n"); 
  printf("LOCAL         = 2\n"); 
  printf("CITY WIDE     = 3\n"); 
  printf("NATIONAL      = 4\n"); 
  printf("INTERNATIONAL = 5\n"); 
  break; 
 } 
  case 2: 
 { 
  strncpy(new_node->cellname,"CAPITAL GIVEN",50); 
  printf("\nCAPITAL GIVEN"); 
   
  break; 
 } 
  case 3: 
 { 
  strncpy(new_node->cellname,"MAN FORCE SKILLED",50); 
  printf("\nMAN FORCE OF SKILLED in numbers"); 
  break; 
 } 
  case 4: 
 { 
  strncpy(new_node->cellname,"MAN FORCE UNSKILLED",50); 
  printf("\nMAN FORCE UNSKILLED in numbers"); 
  break; 
 } 
  case 5: 
 { 
  strncpy(new_node->cellname,"TIME LEFT FOR THE EVENT ",50); 
  printf("\nTIME LEFT FOR THE EVENT (days) "); 
  break; 
 } 
  case 6: 
 { 
  strncpy(new_node->cellname,"TIME TAKEN TO THE EVENT",50); 
  printf("\nTIME TAKEN BY THE EVENT(hours)"); 
  break; 
 } 
 case 7: 
  { 
   strncpy(new_node->cellname,"PROMOTIONS",50); 
   printf("\nPROMOTIONS rating 0 to 5"); 
  } 
  
} 
 
int t; 
if(i==1) 
{ 
  printf("\nEnter the data : ");     //storing data to the node 
  scanf("%d",&t); 
  switch(t) 
  { 
   case 1: 
    { 
     new_node->data=50000;  
   break; 
  } 
 case 2: 
  { 
   new_node->data=100000; 
   break; 
  } 
 case 3: 
  { 
   new_node->data=250000; 
   break; 
  } 
 case 4: 
  { 
   new_node->data=600000; 
   break; 
  } 
 case 5: 
  { 
   new_node->data=1000000; 
   break; 
  } 
 default: 
  { 
   printf("ERROR\n"); 
   break; 
  } 
 } 
 printf("%d",new_node->data); 
} 
 
if(i>1 && i<8) 
{ 
 printf("\nEnter the data : ");     //storing data to the node 
 scanf("%d",&new_node->data); 
} 
else if(i==8) 
{ 
 strncpy(new_node->cellname,"prty",10); 
} 
else if(i==9) 
{ 
 strncpy(new_node->cellname,"ratio",10);  
} 
  
  new_node->next=NULL; 
   
 
  if(start==NULL)         // create a new node and link  
  {   start=new_node;      
      p=new_node; 
   current=new_node; 
 } 
  else  
  {  current->next=new_node; 
    current=new_node;   } 
 i++; 
}while(i<10); 
 
printf("the RETURNED pointer: %d\n",p); 
return p; 
} 
 
 
void display(int num,int *g,int data) 
{ 
struct node *new_node; 
 printf("\nThe %d output Linked List with start '%d' for priority : %d\n",num+1,g,data); 
 //printf("in THE display G=   %d\n\n\n",g); 
 new_node=g; 
  
 int i=0; 
 while(new_node!=NULL) 
  { 
   if(i>0) 
   { 
    printf("%s : %d\n",new_node->cellname,new_node->data); 
    new_node=new_node->next; 
 } 
 else 
 { 
 printf("\n  %s \n",new_node->cellname); 
    new_node=new_node->next;  
 } 
 i++; 
   } 
  printf("NULL"); 
  printf("*******\n"); 
} 
 
int calincome(int cctt,int *a) 
{ 
 int i=0,j,scale,income,capital,timel,timet,prty,man1,man2,promo,promo1,ratio; 
 float ratio1; 
 struct node *new_node; 
 new_node=a; 
 while(new_node!=NULL) 
 { 
  switch(i) 
  { 
   case 1: 
    scale=new_node->data; 
    break; 
   case 2: 
    { 
     capital=new_node->data; 
     break; 
    } 
   case 3: 
    { 
     man1=new_node->data; 
     break; 
    } 
   case 4: 
    { 
     man2=new_node->data; 
     break; 
    } 
   case 5: 
    { 
     timel=new_node->data; 
     break; 
    } 
   case 6: 
    { 
     timet=new_node->data; 
     break; 
    } 
   case 7: 
    { 
     promo=new_node->data; 
     break;  
    } 
   default: 
    { 
     printf("calculating.........\n"); 
     break; 
    } 
  } 
  new_node=new_node->next; 
  i++; 
 } 
 promo1=getpromo(promo); 
 printf("the income:  %d  -( (%d) + (%d) + (%d) + (%d) ) =  ",capital,man1*6000,man2*1500,promo1,scale);  
 income=capital-((man1*6000)+(man2*1500)+promo1+scale); 
 if(income<0) 
 { 
  put_i(0,8,a); 
  return 0; 
 } 
 printf("  %d  ",income); 
 ratio1=((float)income/(float)capital)*1000; 
 ratio=ratio1; 
 printf("   %d  ",ratio); 
 printf("NOW PUTING****"); 
 put_i(ratio,9,a); 
 printf("   ****DONE PUTTING\n"); 
 switch(scale) 
 { 
  case 50000: 
   { 
    scale=10; 
    break; 
   } 
  case 100000: 
   { 
    scale=20; 
    break; 
   } 
  case 250000: 
   { 
    scale=30; 
    break; 
   } 
  case 600000: 
   { 
    scale=40; 
    break; 
   } 
  case 1000000: 
   { 
    scale=50; 
    break; 
   } 
 } 
 if(timel<=3) 
 { 
  prty=9999+scale+ratio+promo; 
  put_i(prty,8,a); 
  return prty; 
 } 
 else 
 { 
  prty=(ratio+scale+promo)-(man1+man2+timel+timet); 
 printf("\n%d = (%d+%d+%d)-(%d+%d+%d+%d)",prty,ratio,scale,promo,man1,man2,timel,timet); 
 put_i(prty,8,a); 
 return prty; 
 } 
} 
 
int getpromo(int a) 
{ 
int p; 
  switch(a) 
  { 
   case 1: 
    { 
     p=10000; 
   return p;  
   break; 
  } 
 case 2: 
  { 
   p=20000; 
   return p; 
   break; 
  } 
 case 3: 
  { 
   p=50000; 
   return p; 
   break; 
  } 
 case 4: 
  { 
   p=100000; 
   return p; 
   break; 
  } 
 case 5: 
  { 
   p=200000; 
   return p; 
   break; 
  } 
 default: 
  { 
   printf("ERROR\n"); 
   return 0; 
   break; 
  } 
  } 
} 
 
 
 
 
 
 
void swap(int* a, int* b)  
{  
    int t = *a;  
    *a = *b;  
    *b = t;  
} 
  
int partition (int arr[], int low, int high)  
{  
    int pivot = arr[high]; 
    int i = (low - 1);  
   int j=0; 
    for (j=low;j<=high-1;j++)  
    {  
        if (arr[j] <= pivot)  
        {  
            i++; 
            swap(&arr[i], &arr[j]);  
        }  
    }  
    swap(&arr[i + 1], &arr[high]);  
    return (i + 1);  
}  
 
 
void quickSort(int arr[], int low, int high)  
{  
    if (low < high)  
    {  
        /* pi is partitioning index, arr[p] is now  
           at right place */ 
        int pi = partition(arr, low, high);  
   
        // Separately sort elements before  
        // partition and after partition  
        quickSort(arr, low, pi - 1);  
        quickSort(arr, pi + 1, high);  
    }  
} 
 
int get_i(int j,int *pt) 
{ 
 struct node *new_node; 
 new_node=pt; 
 int i=0; 
 while(new_node!=NULL) 
  { 
   if(i==j) 
   { 
    return new_node->data; 
 } 
    new_node=new_node->next;  
 i++; 
   } 
} 
 
void put_i(int dat,int j,int *strt) 
{ 
struct node *new_node; 
 new_node=strt; 
 int i=0; 
 while(new_node!=NULL) 
  { 
   if(i==j) 
   { 
    new_node->data=dat; 
 } 
    new_node=new_node->next;  
 i++; 
   } 
} 
 
void main() 
{ 
  
 int c=0,*b,*z[100],y,*t,p,i,count=0,*crtp; 
 for(i=0;i<100;i++) 
 { 
   
 } 
 printf("enter the number of events to register and compute: \n"); 
 scanf("%d",&p); 
 for(i=0;i<p;i++) 
 { 
  count++; 
  printf("the %dth event: \n",i+1); 
  z[i]=create(); 
  prty[i]=calincome(count,z[i]); 
  printf("the priority is   %d\n",prty[i]); 
 } 
 display(1,z[0],1); 
 printf("TO check ratio %d\n",get_i(9,z[0])); 
 prty[0]=0; 
 prty[1]=5; 
 prty[2]=prty[1]; 
 prty[3]=7; 
 crtp=crrt(count,z); 
 printf("\n****NOW DONE****\n"); 
 checkk(count,crtp); 
 printf("*******FINAL PRTY LINKED LIST*********\n"); 
 dispplay(0,crtp); 
 printf("******FINAL PRTY ARRAY\n"); 
 for(i=0;i<4;i++) 
 { 
  printf(" %d,",prty[i]); 
 } 
 printf("\n****SORTING****\n"); 
 heapsort(p); 
 //for(i=0;i<p;i++) 
 //{ 
 // printf("%d",prty[i]); 
 //} 
 printf("\nnow into*****DDPP******\n"); 
 ddpp(crtp,p); 
  
 
} 
 
 
int crrt(int count,int *b[100]) 
{ 
 printf("\n\n******now copying******\n\n"); 
 int *p,*tempp; 
 int i=0,j=0,tempi;  
struct ndy *new_node,*current; 
 
 do  { 
new_node=(struct ndy *)malloc(sizeof(struct ndy)); 
  new_node->neext=NULL; 
  sttart=NULL;   
  printf("\n J= %d",j); 
  if(j==0)  
   {   sttart=new_node; 
    p=sttart; 
    j++;     
  printf("\n*****in do while***\n"); 
      current=new_node;  
 } 
  else  
  {  current->neext=new_node; 
    current=new_node;   } 
tempi=prty[i]; 
current->prtyy=tempi; 
tempp=b[i]; 
current->address=tempp; 
 i++; 
 }while(i<count); 
 
 dispplay(0,p); 
  printf("*******THE COPIED LIST*****\n"); 
return p; 
} 
 
void dispplay(int a,int *g) 
{ 
 printf("****IN CRPT DISPLAY*****888\n"); 
 struct ndy *new_node; 
 printf("\nThe DISPLAY %d Linked List : n\n\n",a); 
 //printf("in THE display G=   %d\n\n\n",g); 
 new_node=g; 
 printf("***%d*START: \n",a); 
 while(new_node!=NULL) 
  { 
 printf("prty: %d  pointer: %d\n",new_node->prtyy,new_node->address); 
    new_node=new_node->neext;  
   } 
  printf("NULL"); 
  printf("*****out of DDPPP\n"); 
} 
 
 
void heapsort(int a) 
{ 
 int  no,  i, j, c, heap_root, temp; 
no=a; 
 // printf("\nInput array values one by one : "); 
  for (i = 1; i <  no; i++) 
  { 
  c = i; 
  do 
  { 
  heap_root  = (c - 1) / 2; 
  /* to create MAX arr  array */ 
  if  (prty[heap_root] < prty[c]) 
  { 
  temp =  prty[heap_root]; 
  prty[heap_root] = prty[c]; 
  prty[c]  = temp; 
  } 
  c =  heap_root; 
  } while (c !=  0); 
  } 
   
  printf("Heap  prtyay : "); 
  for (i = 0; i <  no; i++) 
  printf("%d\t ", prty[i]); 
  for (j = no - 1; j  >= 0; j--) 
  { 
  temp = prty[0]; 
  prty[0] = prty[j]; 
  prty[j] = temp; 
  heap_root = 0; 
  do 
  { 
  c = 2 *  heap_root + 1; 
  if  ((prty[c] < prty[c + 1]) && c < j-1) 
  c++; 
  if  (prty[heap_root]<prty[c] && c<j) 
  { 
  temp =  prty[heap_root]; 
  prty[heap_root] = prty[c]; 
  prty[c]  = temp; 
  } 
  heap_root  = c; 
  } while (c  < j); 
  }  
  printf("\nSorted  prtyay : "); 
  for (i = 0; i <  no; i++) 
  printf("\t%d", prty[i]); 
  printf("\n"); 
 }  
 
void ddpp(int *g,int a) 
{ 
 int i=0; 
 int j=0; 
 struct ndy *new_node; 
 new_node=g; 
 printf("*****list prty is ***\n"); 
 for(i=0;i<4;i++) 
 { 
  printf("%d=%d,  ",i,prty[i]); 
 } 
 printf("*** at while****"); 
 i=0; 
 while(i<a) 
 { 
  j=0; 
  new_node=g; 
  while(j<a) 
  { 
   printf("FOR I=%d and J=%d therefore a-I=%d\n",i,j,a-i); 
   if(prty[a-i-1]==new_node->prtyy && new_node->prtyy!=0) 
   { 
   display(i,new_node->address,new_node->prtyy); 
   j=a; 
   } 
   else if(prty[a-i-1]==new_node->prtyy && new_node->prtyy==0) 
   { 
    printf("*********THE BELOW HAVE NEGATIVE INCOME HENCE DO NOT OPT FOR THESE EVENT *********\n"); 
    display(i,new_node->address,new_node->prtyy); 
    new_node=new_node->neext; 
    j++; 
   } 
   else 
   { 
   new_node=new_node->neext; 
   j++; 
   } 
  } 
  i++; 
 } 
} 
 
void checkk(int count,int *getz) // check for equal values and add 
{ 
 int i,j,k,dd,temp1[count],temp2[count],decider=0,index=0; 
 printf("\n******IN CHECKK******\n"); 
 struct ndy *new_node; 
  
 new_node=getz; 
 i=0; 
 for(i=0;i<count;i++) 
 { 
  temp1[i]=prty[i]; 
 } 
 i=0; 
 k=1; 
 while(decider==0) 
 { 
 printf("******IN CHECK while %d******\n",count); 
 while(i<count) 
 { 
  for(j=0;j<count;j++) 
  { 
   if(new_node->prtyy==temp1[j] && j!=index) 
   { 
    printf("AT J=%d and index=%d****if prty(%d)==temp1(%d)\n",j,index,new_node->prtyy,temp1[j]); 
    mutual_add(temp1[j],getz); 
    dispplay(4,getz); 
    index++; 
   } 
  } 
 new_node=new_node->neext; 
 i++; 
 } 
k=0; 
copy(getz); 
dispplay(4,getz); 
decider=decd(count); 
printf("COPYING AT*******decider=%d",decider); 
} 
} 
 
void copy(int *g) 
{ 
 int i=0; 
 struct ndy *new_node; 
 new_node=g; 
 while(new_node!=NULL) 
 { 
  prty[i]=new_node->prtyy; 
  new_node=new_node->neext; 
  i++; 
 } 
} 
 
int decd(int a) 
{ 
 int temp[a],i,j,k; 
 for(i=0;i<a;i++) 
 { 
  temp[i]=prty[i]; 
 } 
 quickSort(temp,0,a-1); 
 i=0; 
 while(i<a) 
 { 
  if(temp[i]==temp[i+1] && temp[i]!=0) 
  { 
   return 0; 
  } 
  else if(i==a-1) 
  { 
   return 1; 
  } 
  else 
  { 
   i++; 
  } 
 } 
} 
 
 
void mutual_add(int dat,int *main) 
{ 
 struct ndy *new_node,*temp1,*temp2; 
 int t1,t2,dd,i,j,k; 
 new_node=main; 
 while(new_node!=NULL) //to fint other number ie=t2 
 { 
  if(dat==new_node->prtyy) 
  { 
   dd=get_i(9,new_node->address); 
   dd=dd+99; 
   dd=dd%100; 
   printf("***IN MUTUAL ADD +%d***\n",dd); 
   new_node->prtyy=new_node->prtyy+dd; 
   dispplay(4,main); 
   k=addd(dat,dd,new_node->neext);    
  } 
  else if(new_node->prtyy>dat) 
  { 
   new_node->prtyy=new_node->prtyy+dd+k; 
   printf("ELSE IF AT J=%d adding: %d to %d\n\n",j,dd+k,new_node->prtyy); 
   
   dispplay(4,main); 
  } 
  new_node=new_node->neext; 
 } 
  
} 
 
 
 
int addd(int dat,int ret,int *rot) 
{ 
  
 int dd; 
 struct ndy *new_node; 
 new_node=rot; 
 if(new_node->neext==NULL) 
 { 
  return ret; 
 } 
 while(new_node!=NULL) //to fint other number ie=t2 
 { 
  if(dat==new_node->prtyy) 
  { 
   dd=get_i(9,new_node->address); 
   dd=dd+99; 
   dd=dd%100; 
   printf("****in ADD****+%d\n",dd); 
   new_node->prtyy=new_node->prtyy+dd; 
   dispplay(4,new_node); 
   ret=addd(dat,dd,new_node); 
   dd=dd+ret;    
  } 
  else if(new_node->prtyy>dat) 
  { 
   new_node->prtyy+dd; 
  } 
  new_node=new_node->neext; 
 } 
 return dd; 
} 