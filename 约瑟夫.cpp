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
vec.erase(p);                 //ɾ����m����
int sizz = n - 1;             //������һ
k--;
if (cur == sizz)
cur = 0;
for (int i = 2; i < n; i++)
{
cur = (cur + k) % sizz;
p = vec.begin() + cur;
vec.erase(p);             //ɾ����һ����k����
sizz--;                   //������һ
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
