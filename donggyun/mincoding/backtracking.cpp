#include <iostream>
#include <vector>
#include <iostream>

using namespace std;

vector<int> bridge = {0, 3, 1, 2, 1, 3, 2, 1, 2, 1, 0};
int n;
void	dfs(int start)
{
	if (n == start) cout << "시작 " << bridge[start] << " ";
	else if (bridge[start] != 0) cout << bridge[start] << " ";
	else cout << "도착 ";
	if (bridge[start] == 0)
		return ;
	dfs(start + bridge[start]);
	if (n == start) cout << bridge[start] << " 시작";
	else if (bridge[start] != 0) cout << bridge[start] << " ";
	else cout << "도착 ";
}

int main()
{
	

	cin >> n;
	dfs(n);
	return (0);
}