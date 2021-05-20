/* 퀵 정렬: 대표적인 분할 정복 알고리즘, 가장빠른 정렬형태를 가짐   
            정렬되어 있는 형태에서는 퀵 정렬의 형태를 사용 못함! 
			정렬이 되어있지 않은 구조에서 사용하면 빠름! 
			1. 원소들 중에서 pivot을 고른다. 
			2.이 pivot을 기준으로 앞에는 작은 값, 뒤에는 큰 값들을 위치시킨다.(분할)
			3. 분할된 작은 리스트를 재귀적으로 동작시킨다.->계속 같은 형태의 알고리즘을 구현한다.(정복)
			4. 정렬된 작은 리스트들을 결합한다.(결합)
*/
#include <stdio.h>
#include <stdbool.h>

void quickSort(int*, int, int);

int main() {
	int ary[] = { 3,5,2,4,7,6,1 };
	int size = sizeof(ary) / sizeof(ary[0]);
	quickSort(ary, 0, size - 1); 
	return 0;
}
void quickSort(int* pary, int left, int right)
{
	if (left >= right) return; //왼쪽이 오른쪽보다 크면 안됨!
	int pivot = left; 
	int lleft = pivot + 1;
	int lright = right; //초기값을 right로 줌
	int temp;
	
	while (lleft <= lright) {    //lleft와 lright가 교체가 안될때까지 while문에서 진행
		while (pary[lleft] <= pary[pivot])lleft++; //왼쪽에는 pivot보다 작은값이 와야함! 즉 정렬이 됐단 뜻
		while (pary[lright] >= pary[pivot]) lright--; //lright는 맨 끝에서 부터 -로 감소하면서 앞으로 이동

		if (lleft > lright) { //lleft가 더 크단 의미는 교체 되었단 의미
			//값을 바꿔줘야함
			temp = pary[lright];
			pary[lright] = pary[pivot];
			pary[pivot] = temp;
		}
		else {
			//lright = 작은값 
			temp = pary[lright];
			pary[lright] = pary[lleft];
			pary[lleft] = temp;
		}
	}
	for (int k = 0; k < right + 1; k++) printf("%d ", pary[k]);
	printf("\n");
	quickSort(pary, left, lright - 1); //끝나는건 lright -1에서 끝남
	quickSort(pary, lright + 1, right);
}
