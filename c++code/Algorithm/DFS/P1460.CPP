4
100 200 300 400
3
50  50  50  50
200 300 200 300
900 150 389 399
50  10  50  100

3 1 2 4

先判断第一个条件已经满足题目需求,
然后将总体进行累加,定义一个min,赋值,然后每个满足的条件与min进行判断
还需要把每次最小的结果组合存放在一个数组里面,
或者定义一个二维数组,把所有可能的结果放在里面,然后每行进行求和判断,
1 3  10000 = min 
1 2 4 9923 更新组合,如何更新组合?

首先进行输入数据
b[i]判断数据
定义一个n维的二维数组
然后从第一个饲料的需求开始
for(int i=0;i<4;i++){
    for(int j = 0; j < n; j++){
        if a[i][j]>b[i]? if a[i][j+1]>b[i+1]? ....
        else a[i][j]+a[i+1][j]
    }
}