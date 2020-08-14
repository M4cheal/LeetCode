#include <stdio.h>

//结构体存储身高体重
typedef struct info{
    int height;
    int weight;
}Information;

//身高体重数组
typedef struct arr_p{
    Information * nums;
}Arr;

//将身高体重存入数组
Arr * createArr(int* height, int heightSize, int* weight, int weightSize){
    Arr * person = (Arr *)malloc(sizeof(Arr));
    person->nums = (Information *)malloc(sizeof(Information) * heightSize);
    for(int i = 0; i < heightSize; i++){
        person->nums[i].height = height[i];
        person->nums[i].weight = weight[i];
    }
    return person;
}

//C语言内置***辅助函数，height升序排序，height相等时weight降序排序
int cmp(const void *a, const void *b){
    if(((Information *)a)->height != ((Information *)b)->height){
        return ((Information *)a)->height - ((Information *)b)->height;
    }else{
        return ((Information *)b)->weight - ((Information *)a)->weight;
    }
    //return *(int *)b - *(int *)a; 由大到小排序
}

//二分查找
int binarySearch(Arr * person, int weightSize){
    int * tmp = (int *)malloc(sizeof(int) * weightSize);
    tmp[0] = person->nums[0].weight;
    int j = 0;
    for(int i = 1; i < weightSize; i++){
        if(person->nums[i].weight > tmp[j]){
            tmp[++j] = person->nums[i].weight;
        }else{
            int l = 0;
            int r = j;
            while(l < r){
                int mid = (l + r) / 2;
                if(tmp[mid] < person->nums[i].weight){
                    l = mid + 1;
                }else{
                    r = mid;
                }
            }
            tmp[l] = person->nums[i].weight;
        }
    }
    return j + 1;
 }

int bestSeqAtIndex(int* height, int heightSize, int* weight, int weightSize){
    Arr * person = createArr(height, heightSize, weight, weightSize);
    qsort(person->nums, heightSize, sizeof(Arr), cmp);
    int result = binarySearch(person, weightSize);
    return result;
}


/**
 * 解法二
 */

#define LEN 10002
struct node {
	int height;
	int weight;
};

int arr_w[LEN];
int arr_w_id;

int cmp(void *a, void *b)
{
	struct node *pa = (struct node *)a;
	struct node *pb = (struct node *)b;
	if (pa->height == pb->height) {
		return pb->weight - pa->weight;
	} else {
		return pa->height - pb->height;
	}
}
int b_search(int *arr, int len, int weight)
{
	int left = 1;
	int right = len;
	while (left < right) {
		int mid = left + (right - left) / 2;

		if (arr[mid] >= weight) {
			right = mid;
		} else {
			left = mid + 1;
		} 
	}
	return  left; // 如果数组中不存在该元素，则返回该元素应该插入的位置
}

// 贪心 + 二分搜索
int LIS(struct node *arr, int len)
{
	arr_w_id = 1;
	arr_w[1] = arr[0].weight;
	int i , pos = 0;
	for (i = 1; i < len; ++i) {
		if (arr[i].weight > arr_w[arr_w_id]) {
            ++arr_w_id;
			arr_w[arr_w_id] = arr[i].weight;
		} else {
			pos = b_search(arr_w, arr_w_id, arr[i].weight);
			arr_w[pos] = arr[i].weight;
		}
	}
	return arr_w_id;
}

int bestSeqAtIndex(int* height, int heightSize, int* weight, int weightSize){
	int ans = 0;
	struct node arr[LEN];
	memset(arr, 0, LEN);
	int arr_id = 0;
	for (int i = 0; i < heightSize; i++) {
		struct node tmp;
		tmp.height = height[i];
		tmp.weight = weight[i];
		arr[arr_id++] = tmp;
	}
	qsort(arr, heightSize, sizeof(struct node), cmp);
	ans = LIS(arr, heightSize);
	return ans;
}