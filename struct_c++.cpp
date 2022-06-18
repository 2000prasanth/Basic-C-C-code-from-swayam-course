#include <iostream>
using namespace std;
 int swap(int *a,int *b)
 {
 	int t;
 	t=*a;
 	*a=*b;
 	*b=t;
 }
int main()
{
     int i=10,j=20;
     swap(&i,&j);
     printf("after swap i=%d \n j=%d ",i,j);
    return 0;
}

