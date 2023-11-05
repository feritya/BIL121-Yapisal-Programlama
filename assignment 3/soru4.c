/******************************************************************************
4. FizzBuzz:
1 den kullanıcının girdiği bir tam sayıya kadar olan sayıları yazdıran bir program. Ancak,
3;e tam bölünebilen sayılar yerine &quot;Fizz&quot; ve 5&#39;e tam bölünebilen sayılar yerine &quot;Buzz&quot;
yazan bir program.
*******************************************************************************/

#include <stdio.h>

int main()
{
int a,b;
printf("bir sayiyi giriniz: ");
scanf("%d",&a);
for (int i=1;i<a;i++){
    if(i%3==0){
        printf("fizz ");
    }
    else if (i%5==0){
        printf("buzz ");
    }
    else{
        printf("%d\ ",i);

        
    }
}

return 0;
}