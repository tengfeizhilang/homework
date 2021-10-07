
#include <stdio.h>
int cnt;
void hanoi(int n, char origin, char target, char process,int &count) {
	if (n == 0)
		return;
	hanoi(n - 1, origin, process, target,count);//将n-1个盘子由A经过C移动到B
	count+=1;
	printf ("step %d: move %d from %c->%c\n", cnt++, n, origin, process);
	hanoi(n - 1, target, origin, process,count);//剩下的n-1盘子，由B经过A移动到C
	
}

int main() {
	int n,count=0;
	while( scanf ("%d", &n)) {
		cnt=1;
		hanoi(n, 'A', 'B', 'C',count);
		printf("一共移动了%d次\n",count);
	}
	
	return 0;
}

