# 循环结构

- goto 和 if 构成循环
- while
- do while
- for

### goto 不常使用，但多层嵌套可用goto退出
```
loop: if(i<=>100)
{
    sum += i;
    i++;
    goto loop;
}
```
### do while 和 while

### for(循环变量赋初值; 循环条件; 循环变量增量) 语句
- 表达式可以缺省，但;不能缺省
- 没有表达式2 死循环
- for(; ;) == while(1)

### 循环的嵌套

### break 在嵌套循环中只能跳出一层
### continue 结束本次循环