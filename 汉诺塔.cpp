
#include <stdio.h>
int cnt;
void hanoi(int n, char origin, char target, char process,int &count) {
	if (n == 0)
		return;
	hanoi(n - 1, origin, process, target,count);//��n-1��������A����C�ƶ���B
	count+=1;
	printf ("step %d: move %d from %c->%c\n", cnt++, n, origin, process);
	hanoi(n - 1, target, origin, process,count);//ʣ�µ�n-1���ӣ���B����A�ƶ���C
	
}

int main() {
	int n,count=0;
	while( scanf ("%d", &n)) {
		cnt=1;
		hanoi(n, 'A', 'B', 'C',count);
		printf("һ���ƶ���%d��\n",count);
	}
	
	return 0;
}

