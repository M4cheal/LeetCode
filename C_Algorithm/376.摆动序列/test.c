#include <stdio.h>

int wiggleMaxLength(int* nums, int numsSize){
    int state = 0; //0开始 1上升 3下降
    int i;
    int count = 1;
    
    if (numsSize == 0) return 0;

    for ( i = 0; i < numsSize - 1; i++)
    {
        switch (state)
        {
        case 0:
            if (nums[i] < nums[i + 1])
            {
                state = 1;
                count++;
            }

            if (nums[i] > nums[i + 1])
            {
                state = 2;
                count++;
            }
            break;
        case 1:
            if (nums[i] > nums[i + 1])
            {
                state = 2;
                count++;
            }
            break;
        case 2:
            if (nums[i] < nums[i + 1])
            {
                state = 1;
                count++;
            }
            break;
        }
    }
    return count;
}

int wiggleMaxLength2(int* nums, int numsSize){
    // 长度小于2 返回长度
    if (numsSize < 2)
    {
        return numsSize;
    }
    int count = 1, i = 1;
    while (i < numsSize)
    {
        // 过滤掉差值都为正和相等的值
        if (nums[i] > nums[i - 1])
        {
            count++;
            i++;
            while (i < numsSize && nums[i] >= nums[i -1])
            {
                i++;
            }
        }else if (nums[i] < nums[i - 1])
        {
            count++;
            i++;
            while (i < numsSize && nums[i] <= nums[i - 1])
            {
                i++;
            }
        }else
        {
            i++;
        }
    }
    return count;
}
