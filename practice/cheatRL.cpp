#define _CRT_SECURE_NO_WARNINGS

#pragma comment(linker, "/STACK:67108864")

#include <iostream>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <algorithm>
#include <functional>
#include <numeric>
#include <memory.h>
#include <time.h>

using namespace std;

typedef long long LL;

int q;
int n, m;
int road, lib;

vector<int> G[100000];
int used[100000];

int go(int v)
{
	int res = 1;
	used[v] = 1;
	for (int i = 0; i < G[v].size(); ++i)
		if (!used[G[v][i]])
			res += go(G[v][i]);
	return res;
}

int main()
{
	scanf("%d", &q);
	while (q-- > 0)
	{
		scanf("%d%d%d%d", &n, &m, &lib, &road);
		for (int i = 0; i < n; ++i)
			G[i].clear();
		for (int i = 0; i < m; ++i)
		{
			int u, v;
			scanf("%d%d", &u, &v);
			u--, v--;
			G[u].push_back(v);
			G[v].push_back(u);
		}

		memset(used, 0, sizeof(used));

		LL res = 0;
		for (int i = 0; i < n; ++i)
		{
			if (used[i])
				continue;
			int size = go(i);
			res += lib + (LL)(size - 1) * min(road, lib);
		}

		printf("%lld\n", res);
	}
	return 0;
}
