#include<stdio.h>
#include<string.h>
#define MAX 15
typedef struct node{
int x , y ;
int s , c ;//s为目前为止的用时，c指的的是当前的层数
} Q ;
Q q[MAX*MAX*3] ;
bool vi[2][MAX][MAX] ;
char m[2][MAX][MAX] ;
int d[4][2] = {{0,1},{0,-1},{1,0},{-1,0}} ;
int N,M,T , find ,min ;
int ok(int i,int j){//边界函数
if(i>=0&&i<N&&j>=0&&j<M)
return 1 ;
return 0 ;
}
void remake(){//这个函数对数据进行预处理
for(int i = 0 ; i < N ; i++)
for(int j = 0 ; j < M ; j++){
char &a = m[0][i][j] , &b = m[1][i][j] ;//引用调用，简化代码
if(a=='#' && b=='#')
a = b = '*' ;
else if((a=='#' && b=='*')||(a=='*' && b=='#'))
a = b = '*' ;
}
}
void init(){//读取初始化数据
char *g ;
scanf("%d %d %d",&N,&M,&T) ;
for(int c = 0; c < 2 ; c++){
for(int i = 0 ; i < N ; i++)
scanf("%s",m[c][i]) ;
if(!c) gets(g) ;//!
}
}
void inq(int x , int y ,int head ,int &tail ,int o){//入队的函数
int c , s ;
c = o?!(q[head].c) : q[head].c ;
s = o? q[head].s : q[head].s+1 ;
q[tail].x = x ;
q[tail].y = y ;
q[tail].c = c ;
q[tail++].s = s ;
}
int bfs(){//广搜
int head=0 , tail=1 ,x , y ,c ;
m[0][0][0] = '*' ;//标记第一个元素已经访问
while(head < tail){
x = q[head].x , y = q[head].y ,c = q[head].c ;
char &tmp = m[c][x][y] ;//引用
if(tmp == 'P' && q[head].s <= T)//达到可行解
return q[head].s ;
if(tmp == '#'){//时空机换层
if(!vi[!c][x][y])//如果另一层是没有访问过的
inq(x,y,head,tail,1) ;//入队
head++ ;
vi[c][x][y] = 1 ;
continue ;//结束当前循环
}
for(int i = 0 ; i < 4 ; i++){//如果是“#”以外的元素向四周扩展
int k = x+d[i][0] , v = y + d[i][1] ;
if(ok(k,v) && !vi[c][k][v] && m[c][k][v] != '*')//在边界内，没有访问过，而且不是墙
inq(k,v,head,tail,0) ;
}
vi[c][x][y] = 1 ;//将出队元素标记访问
head++ ;//头指针加1
}//while
return 0 ; //没有找到可行解返回0
}
int main(){
int ca ;
scanf("%d",&ca) ;
while(ca--){
memset(vi,0,sizeof(vi)) ;//重置访问标记数组
init() ;//读取数据
remake() ;//预处理数据
if(bfs())printf("YES\n") ;//如果找到
else printf("NO\n") ;
}
return 0 ;
}
