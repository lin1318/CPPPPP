#include<iostream>
#include<vector>
#include<cmath>
#include<cstdio>
#include<algorithm>
#include<ctime>
using namespace std;
#define M 10005
int n, k, m;
vector<int>vec;
vector<int>::iterator p;
int main()
{
scanf("%d%d%d", &n, &k, &m);
	time_t now;
	now=time(0);
	char *dt=ctime(&now);
	cout<<dt<<endl;
for (int i = 1; i <= n; i++)
{
vec.push_back(i);
}
int cur = m - 1;
p = vec.begin() + cur;
vec.erase(p);                 //删掉第m个人
int sizz = n - 1;             //人数减一
k--;
if (cur == sizz)
cur = 0;
for (int i = 2; i < n; i++)
{
cur = (cur + k) % sizz;
p = vec.begin() + cur;
vec.erase(p);             //删掉下一个报k的人
sizz--;                   //人数减一
if (cur == sizz) 
cur = 0;
}
    printf("%d\n", vec[0]);
	now=time(0);
	dt=ctime(&now);
	cout<<dt<<endl;
vec.clear();
return 0;
}
