int fibo(int n)
{
    if (n == 1) {
        return 1;
    } else if (n == 2) {
        return 1;
    } else{
        return fibo(n - 1) + fibo(n - 2);
    }
}

void main(){
putn(fibo(10));
}	
//-------------------sort
int array[] = {10,5,1,77,12,34,55,67};
int i, j, min_i, temp; 
int size = 8;

void main(){
	for (i = 0; i < size; i++) 
		printf("%d ",array[i]);
	putchar(10);
	for (i = 0; i < size - 1; i++) {
	/* устанавливаем начальное значение минимального индекса */
	        min_i = i;
		/* находим индекс минимального элемента */
		for (j = i + 1; j < size; j++) {
			if (array[j] < array[min_i]) {
				min_i = j;
			}
		}
		/* меняем значения местами */
		temp = array[i];
		array[i] = array[min_i];
		array[min_i] = temp;
	}
	for (i = 0; i < size; i++) 
		printf("%d ",array[i]);
}	

//-------------------eratosphen
#define N 470

int prime[1000];
int i;
int j;
int n = N;

void main()
{
	for(i = 0; i<N; i++){
		prime[i] = i;
	}
	prime[0] = 0;
	prime[1] = 0;
	for (i = 2; i * i <= n; i++){
	    if (prime[i])
	        for (j = i + i; j <= n; j += i)
	            prime[j] = 0;
	}
	for(i = 0; i<N; i++){
		if(prime[i])
			printf("%d ",prime[i]);
	}
}		

//------------------------------------------
 int main() {
    int n, i, j, c, tmp;
    int a[] ={1,3,4,2,5,7,66,5,8};
    // считываем количество чисел n
		n = 9;
    // формируем массив n чисел
    
    for(i = 0 ; i < n - 1; i++) { 
       // сравниваем два соседних элемента.
				c = n - i - 1;
       for(j = 0 ; j < c ; j++) {  
           if(a[j] > a[j+1]) {           
              // если они идут в неправильном порядке, то  
              //  меняем их местами. 
              tmp = a[j];
              a[j] = a[j+1] ;
              a[j+1] = tmp; 
           }
        }
    }
		for(i = 0 ; i < n; i++) { 
        putn(a[i]);
				 putchar(',');
    }
 }
 
 //------------------------------------------
int is_prime(int n) {
    if (n <= 1)
        return 0;
    if (n == 2)
        return 1;
    if (n%2 == 0)
        return 0;
    for (int j = 3; j * j <= n; j=j+2)
         if (n % j == 0) return 0;
    return 1;
}

void main(){
	printf("%d",(is_prime(107));
}

//-----------------------------------------
int A[2000];

void main(){
  int i;
  int j;
  int x;
  int k;
  int q;
  int nines    = 0;
  int predigit = 0;
  int N=30;
  int len;
  
  len = (10 * N/3) + 1;
  
  for(i = 0; i < len; ++i) {
    A[i] = 2;
  }

  for(j = 1; j < N + 1; ++j) {        
    q = 0;
    
    if(j == 3)
    	printf(",");

    for(i = len; i > 0; i--) {
      x  = 10 * A[i-1] + q*i;
      A[i-1] = x % (2*i - 1);
      q = x / (2*i - 1);
    }

    A[0] = q%10;
    q    = q/10;

    if (10 == q) {
      printf("%d", predigit + 1);

      for (k = 0; k < nines; k++) {
        printf("%d", 0);
      }
      predigit=0; nines = 0;
    }
    else {
      printf("%d", predigit);
      predigit = q;

      if (0 != nines) {    
        for (k = 0; k < nines; k++) 
          printf("%d", 9);
        nines = 0;
      }
    }
  }
  printf("%d", predigit);
}

//---------------------------------------
void pascaltriangle(int n)
{
  int c, i, j, k;
 
  for(i=0; i < n; i++) {
    c = 1;
    for(j=0; j <= 2*(n-i); j=j+2) {
					printf(" ");
			}
    for(k=0; k <= i; k++) {
      printf("%d ", c);
      c = c * (i-k)/(k+1);
    }
    printf("\n");
  }
}
 
int main()
{
  pascaltriangle(8);
  return 0;
}

//--------------------------------------
int i;

void main()
{
while(1){
	while(getkey() == 0){};
		clearscreen();
		for (i = 1; i < 10000; i++){
			setcolor(random(15));
			line(random(127),random(160),random(127),random(160));
		}
	}
}	

//--------------------------------------
int x = 0;
int y = 0;
int x1 = 128;
int y1 = 128;
int ang = 0;

void main()
{
	while(1){
		setcolor(0);
		line(x,y,x1,y1);
		if(ang == 0){
			y++;
			y1--;
			if(y1 == 0)
				ang = 1;
			}
		if(ang == 1){
			x++;
			x1--;
			if(x1 == 0){
				ang = 0;
				x = 0;
				y = 0;
				x1 = 128;
				y1 = 128;
			}
		}
		setcolor(1);
		line(x,y,x1,y1);
	}
}	
	