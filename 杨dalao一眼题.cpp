#include<stdio.h>
#include<string.h>
#define MAX 15
typedef struct node{
int x , y ;
int s , c ;//sΪĿǰΪֹ����ʱ��cָ�ĵ��ǵ�ǰ�Ĳ���
} Q ;
Q q[MAX*MAX*3] ;
bool vi[2][MAX][MAX] ;
char m[2][MAX][MAX] ;
int d[4][2] = {{0,1},{0,-1},{1,0},{-1,0}} ;
int N,M,T , find ,min ;
int ok(int i,int j){//�߽纯��
if(i>=0&&i<N&&j>=0&&j<M)
return 1 ;
return 0 ;
}
void remake(){//������������ݽ���Ԥ����
for(int i = 0 ; i < N ; i++)
for(int j = 0 ; j < M ; j++){
char &a = m[0][i][j] , &b = m[1][i][j] ;//���õ��ã��򻯴���
if(a=='#' && b=='#')
a = b = '*' ;
else if((a=='#' && b=='*')||(a=='*' && b=='#'))
a = b = '*' ;
}
}
void init(){//��ȡ��ʼ������
char *g ;
scanf("%d %d %d",&N,&M,&T) ;
for(int c = 0; c < 2 ; c++){
for(int i = 0 ; i < N ; i++)
scanf("%s",m[c][i]) ;
if(!c) gets(g) ;//!
}
}
void inq(int x , int y ,int head ,int &tail ,int o){//��ӵĺ���
int c , s ;
c = o?!(q[head].c) : q[head].c ;
s = o? q[head].s : q[head].s+1 ;
q[tail].x = x ;
q[tail].y = y ;
q[tail].c = c ;
q[tail++].s = s ;
}
int bfs(){//����
int head=0 , tail=1 ,x , y ,c ;
m[0][0][0] = '*' ;//��ǵ�һ��Ԫ���Ѿ�����
while(head < tail){
x = q[head].x , y = q[head].y ,c = q[head].c ;
char &tmp = m[c][x][y] ;//����
if(tmp == 'P' && q[head].s <= T)//�ﵽ���н�
return q[head].s ;
if(tmp == '#'){//ʱ�ջ�����
if(!vi[!c][x][y])//�����һ����û�з��ʹ���
inq(x,y,head,tail,1) ;//���
head++ ;
vi[c][x][y] = 1 ;
continue ;//������ǰѭ��
}
for(int i = 0 ; i < 4 ; i++){//����ǡ�#�������Ԫ����������չ
int k = x+d[i][0] , v = y + d[i][1] ;
if(ok(k,v) && !vi[c][k][v] && m[c][k][v] != '*')//�ڱ߽��ڣ�û�з��ʹ������Ҳ���ǽ
inq(k,v,head,tail,0) ;
}
vi[c][x][y] = 1 ;//������Ԫ�ر�Ƿ���
head++ ;//ͷָ���1
}//while
return 0 ; //û���ҵ����нⷵ��0
}
int main(){
int ca ;
scanf("%d",&ca) ;
while(ca--){
memset(vi,0,sizeof(vi)) ;//���÷��ʱ������
init() ;//��ȡ����
remake() ;//Ԥ��������
if(bfs())printf("YES\n") ;//����ҵ�
else printf("NO\n") ;
}
return 0 ;
}
