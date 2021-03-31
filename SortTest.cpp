/* Declaration Of Header Files */
#include "stdafx.h"
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include<time.h>

int ScanByKeyboard(int *a);
void BubbleS(int *a,int);
void InsertionS(int *a,int);
void SelectionS(int *a,int);
void ShellS(int *a,int);
void ShellPass(int *a,int len,int d);
void CreateData(int *a, int n);
void rverese(int *a, int No2);
void HeapSort(int *a,int len);
void BuildHeap(int *a,int len);
void Heapify(int *a,int low,int high);
void MergeSort(int *a,int len);
void MergePass(int *a,int len,int n);
void Merge(int *a,int low,int m,int high);
void swap(int *a, int *b);
void quickSort(int *arr, int elements);
void OutputData(int *a,int n);
int get_max (int *a, int n);
void radix_sort (int *a, int n);
/* Start Of Main Program */
int main()
{
	int No2;
    int No1;
    int *a;
	int select;
	long t1,t2;
    printf("***********Welcome To 'Sorting' Program*************\n");
	printf("******************************************");
    do                                                                       
    {
		printf("\nEnter a number:");
		scanf("%d",&No2);
        printf("\n1. Best case");
        printf("\n2. average case");
        printf("\n3. worst case");

		a=(int *) malloc(sizeof(int) *No2);//100000000
		srand(time(NULL));
		CreateData(a,No2);
		printf("\nPlease Enter Your Choice Here:\t");
        scanf("%d",&No1);
        switch(No1)
        {
            case 1:
				printf("\n0. Exit From Menu");
				printf("\n1. Bubble Sorting");
				printf("\n2. Insertion Sorting");
				printf("\n3. Selection Sorting");
				printf("\n4. Shell Sorting");
				printf("\n5. Heap Sorting");
				printf("\n6. Merge Sorting");
				printf("\n7. Radix Sorting");
				printf("\n8. Quick Sorting");
				printf("\nEnter your choise data:");
				scanf("%d",&select);
				switch(select)
				{
					
					case 1:
						 BubbleS(a , No2);
						 //OutputData(a, No2);
						 t1 = clock();
						 BubbleS(a , No2);
						 t2 = clock();
						 printf("Sort time used: %lf second", (t2-t1) / 1000.0);
                        break;
					case 2:
						InsertionS(a , No2);
						t1 = clock();
						InsertionS(a , No2);
						t2 = clock();
						printf("Sort time used: %lf seconds", (t2-t1) / 1000.0);
						break;
					case 3:
						SelectionS(a , No2);
						t1 = clock();
						SelectionS(a , No2);
						t2 = clock();
						printf("Sort time used: %lf seconds", (t2-t1) / 1000.0);
						break;
					case 4:
						ShellS(a , No2);
						t1 = clock();
						ShellS(a , No2);
						t2 = clock();
						printf("Sort time used: %lf seconds", (t2-t1) / 1000.0);
                        break;
					case 5:
						HeapSort(a,No2);
						//Output(a, No2);
						t1 = clock();
						HeapSort(a,No2);
						t2 = clock();
						printf("Sort time used: %lf seconds", (t2-t1) / 1000.0);
						break;
					case 6:
						MergeSort(a,No2);
						t1 = clock();
						MergeSort(a,No2);
						t2 = clock();
						printf("Sort time used: %lf seconds", (t2-t1) / 1000.0);
						break;
					case 7:
						radix_sort(a,No2);
						//OutputData(a, No2);
						t1 = clock();
						//RadixSort(a,No2);
						radix_sort (a,No2);
						t2 = clock();
						printf("Sort time used: %lf seconds", (t2-t1) / 1000.0);
						break;
					case 8:
						quickSort(a, No2);
						//Output(a, No2);
						t1 = clock();
						quickSort(a, No2);
						t2 = clock();
						printf("Sort time used: %lf seconds", (t2-t1) / 1000.0);
						break;
					default:printf("\nSorry!!! Invalid Choice");
				}
				
		case 2:
				printf("\n0. Exit From Menu");
				printf("\n1. Bubble Sorting");
				printf("\n2. Insertion Sorting");
				printf("\n3. Selection Sorting");
				printf("\n4. Shell Sorting");
				printf("\n5. Heap Sorting");
				printf("\n6. Merge Sorting");
				printf("\n7. Radix Sorting");
				printf("\n8. Quick Sorting");
				printf("\nEnter your choise data:");
				scanf("%d",&select);
				switch(select)
				{
					
					case 1:
						 t1 = clock();
						 //OutputData(a, No2);
						 BubbleS(a , No2);
						 t2 = clock();
						 printf("Sort time used: %lf second", (t2-t1) / 1000.0);
                        break;
					case 2:
						t1 = clock();
						InsertionS(a , No2);
						t2 = clock();
						printf("Sort time used: %lf second", (t2-t1) / 1000.0);
						break;
					case 3:
						t1 = clock();
						SelectionS(a , No2);
						t2 = clock();
						printf("Sort time used: %lf seconds", (t2-t1) / 1000.0);
						break;
					case 4:
						t1 = clock();
						ShellS(a , No2);
						t2 = clock();
						printf("Sort time used: %lf seconds", (t2-t1) / 1000.0);
                        break;
					case 5:
						t1 = clock();
						HeapSort(a,No2);
						//Output(a, No2);
						t2 = clock();
						printf("Sort time used: %lf seconds", (t2-t1) / 1000.0);
						break;
					case 6:
						t1 = clock();
						MergeSort(a,No2);
						t2 = clock();
						printf("Sort time used: %lf seconds", (t2-t1) / 1000.0);
						break;
					case 7:
						t1 = clock();
						//RadixSort(a,No2);
						radix_sort (a,No2);
						t2 = clock();
						printf("Sort time used: %lf seconds", (t2-t1) / 1000.0);
						break;
					case 8:
						t1 = clock();
						quickSort(a, No2);
						//Output(a, No2);
						t2 = clock();
						printf("Sort time used: %lf second", (t2-t1) / 1000.0);
						break;
					case 0: break;
					default:printf("\nSorry!!! Invalid Choice");

				}
				
		case 3:
				printf("\n0. Exit From Menu");
				printf("\n1. Bubble Sorting");
				printf("\n2. Insertion Sorting");
				printf("\n3. Selection Sorting");
				printf("\n4. Shell Sorting");
				printf("\n5. Heap Sorting");
				printf("\n6. Merge Sorting");
				printf("\n7. Radix Sorting");
				printf("\n8. Quick Sorting");
				printf("\nEnter your choise data:");
				scanf("%d",&select);
				switch(select)
				{
					
					case 1:
						 BubbleS(a , No2);
						 rverese(a,No2);
						 //OutputData(a, No2);
						 t1 = clock();
						 BubbleS(a , No2);
						 t2 = clock();
						 printf("Sort time used: %lf seconds", (t2-t1) / 1000.0);
                         break;
					case 2:
						InsertionS(a , No2);
						rverese(a,No2);
						//Output(a, No2);
						t1 = clock();
						InsertionS(a , No2);
						t2 = clock();
						printf("Sort time used: %lf seconds", (t2-t1) / 1000.0);
						break;
					case 3:
						SelectionS(a , No2);
						rverese(a,No2);
					    //Output(a, No2);
						t1 = clock();
						SelectionS(a , No2);
					    t2 = clock();
						printf("Sort time used: %lf seconds", (t2-t1) / 1000.0);
						break;
					case 4:
						ShellS(a , No2);
						rverese(a,No2);
						//Output(a, No2);
					    t1 = clock();
						ShellS(a , No2);
					    t2 = clock();
						printf("Sort time used: %lf seconds", (t2-t1) / 1000.0);
                        break;
					case 5:
						HeapSort(a,No2);
						rverese(a,No2);
						//Output(a, No2);
						t1 = clock();
						HeapSort(a,No2);
						t2 = clock();
						printf("Sort time used: %lf seconds", (t2-t1) / 1000.0);
						break;
					case 6:
						MergeSort(a,No2);
						rverese(a,No2);
						t1 = clock();
						MergeSort(a,No2);
						t2 = clock();
						printf("Sort time used: %lf seconds", (t2-t1) / 1000.0);
						break;
					case 7:
						radix_sort(a,No2);
						rverese(a,No2);
						t1 = clock();
						//RadixSort(a,No2);
						radix_sort (a,No2);
						t2 = clock();
						printf("Sort time used: %lf seconds", (t2-t1) / 1000.0);
						break;
					case 8:
						quickSort(a, No2);
						rverese(a,No2);
						//Output(a, No2);
						t1 = clock();
						quickSort(a, No2);
						t2 = clock();
						printf("Sort time used: %lf second",(t2-t1) / 1000.0);
						break;
					case 0: break;
					default:printf("\nSorry!!! Invalid Choice");

				}
		}
		
    }
	
    while(No1 <= 8); 
	// End Of 'do...while' Loop.
	getchar();
	free(a);
	return 0;
}

void CreateData(int *a, int n)
{
	 int i;
	 for(i=0;i<n;i++)
		a[i]=rand();
}
void OutputData(int *a,int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");

}
int ScanByKeyboard(int *a)
{
    int i;
	int No2;
    printf("\nPlease Enter The Limit Of Array A:\t");
    scanf("%d",&No2);
    printf("\nPlease Enter The Elements For Array A:\n");
    for(i=0;i<No2;i++)
    {
        scanf("%d",&a[i]);
    }
    return (No2);
}
void rverese(int *a, int No2) 
{ 
	int i=0,j=No2-1;
	int temp;
    while (i < j) 
    { 
        temp = a[i];  
        a[i] = a[j]; 
        a[j] = temp; 
        i++; 
        j--; 
    }
}
void BubbleS(int *a, int n)
{
    int i , j , Temp;
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
		{
            if(a[j] > a[j+1])
            {
                Temp = a[j];
                a[j] = a[j+1];
                a[j+1] = Temp;
            }
		}
       }
}
void InsertionS(int *a,int len)
{     int i,j;
      int x;
      for(i=1;i<len;i++) 
      {   	x=a[i];
			j=i-1;
			while (j>=0 && a[j] >x )
			{     a[j+1]=a[j]; 
				  j=j-1 ;
			 } 
				a[j+1]=x; 
       }//endif
}//InsertSort 


void SelectionS(int *a,int len)
{     int i,j,k,temp;
      for(i=0;i<len-1;i++)
      {     
		  k=i;
         for(j=i+1;j<len;j++)
			if(a[j]<a[k])
				   k=j;
			if(k!=i)
			{
				temp=a[i];a[i]=a[k];a[k]=temp; 
			} //endif
     } //endfor
} //SeleetSort


void ShellS(int *a,int len)
{
      int d=len; //set initial span_      
	  do{
  			   d=d/3+1; // span for next	
               ShellPass(a,len,d); //Insertion sorting for span
         }while(d>1); 
} //ShellSort
void ShellPass(int *a,int len,int d)
{     int i,j;
      int x;
      for(i=1;i<len;i++) 
       {     x=a[i];
             j=i-d;
             while (j>=0 && a[j] >x )
            {	a[j+d]=a[j]; 
	            j=j-d ;
             } 
          a[j+d]=x; 
        }//endif
} //ShellPass

//Heap sorting
void HeapSort(int *a,int len){
	int i;
	int temp;
	BuildHeap(a,len); // step build init heap
	for(i=len-1;i>=1;i--) // repeatly exchange and adjust
	{       temp=a[0];       a[0]=a[i];      a[i]=temp;
   	         Heapify(a,0,i-1); 
	} //endfor_ } //HeapSort
}
void BuildHeap(int *a,int len)
{      int i;
       for (i=len/2;i>=0;i--)
	 Heapify(a,i,len-1);
}
void Heapify(int *a,int low,int high)
{      int large;
       int temp=a[low]; 
       for(large=2*low+1;large<=high;large=2*large+1)
       { 
	 if(large<high && a[large]<a[large+1])
	          large++;
	  if(temp>=a[large])
	          break;
	   a[low]=a[large];
	   low=large;
	}
	a[low]=temp;
}
/*Merge Sorting*/
void MergeSort(int *a,int len)
{   int length;
    for(length=1;length<len;length*=2)
       // first length=1,then 2,4,8,16,...
 			MergePass(a,length,len);
}

void MergePass(int *a,int len,int n)
{       int i;
        for(i=0;i+2*len-1<n;i=i+2*len)
 			Merge(a,i,i+len-1,i+2*len-1);
			  if(i+len-1<n) 
				Merge(a,i,i+len-1,n-1);
} 
void Merge(int *R,int low,int m,int high)
{    int i=low,j=m+1,p=0; //
      int *R1 ; 
      R1=(int  *)malloc((high-low+1)*sizeof(int ));
      if(!R1) 	return ;
      while(i<=m && j<= high) 
	R1[p++]=(R[i] <=R[j]) ? R[i++]:R[j++];
       while(i<=m) 
      	R1[p++]=R[i++];
        while(j<=high) 
	R1[p++]=R[j++];
        for(p=0,i=low;i<=high;p++,i++)
  	 R[i]=R1[p]; 
           free(R1);
} //Merge
void quickSort(int *arr, int elements) {

  #define  MAX_LEVELS  50000

  int  piv, beg[MAX_LEVELS], end[MAX_LEVELS], i=0, L, R, swap ;

  beg[0]=0; end[0]=elements;
  while (i>=0) {
    L=beg[i]; R=end[i]-1;
    if (L<R) {
      piv=arr[L];
      while (L<R) {
        while (arr[R]>=piv && L<R) R--; if (L<R) arr[L++]=arr[R];
        while (arr[L]<=piv && L<R) L++; if (L<R) arr[R--]=arr[L]; }
      arr[L]=piv; beg[i+1]=L+1; end[i+1]=end[i]; end[i++]=L;
      if (end[i]-beg[i]>end[i-1]-beg[i-1]) {
        swap=beg[i]; beg[i]=beg[i-1]; beg[i-1]=swap;
        swap=end[i]; end[i]=end[i-1]; end[i-1]=swap; }}
    else {
      i--; }
  }
}


int get_max (int *a, int n){
	int max = a[10];
   for (int i = 1; i < n; i++)
      if (a[i] > max)
         max = a[i];
   return max;
}
void radix_sort (int *a, int n){

	int **bucket = (int **)malloc(10 *sizeof(int *));
	int bucket_cnt[10];
	int i, j, k, r, NOP = 0, divisor = 1, lar, pass;

	lar = get_max (a, n);
    while (lar > 0){
      NOP++;
      lar /= 10;
    }
    for (pass = 0; pass < NOP; pass++){
		for (i = 0; i < 10; i++){
			bucket_cnt[i] = 0;
			bucket[i] = (int *)malloc(n *sizeof(int *));
		}
		for (i = 0; i < n; i++){
			r = (a[i] / divisor) % 10;
			bucket[r][bucket_cnt[r]] = a[i];
			bucket_cnt[r] += 1;
		}
		i = 0;
		for (k = 0; k < 10; k++){
			for (j = 0; j < bucket_cnt[k]; j++){
			a[i] = bucket[k][j];
			i++;
			}
		}
      divisor *= 10;
   }
}