#include <vector>
#include <iostream>
#include <string>

using namespace std;

vector<string> map(4);
char name[] = "ADC";
int direct[5][2] = {
		0,1,
		1,0,
		0,-1,
		-1,0,
		0,1
};

struct node
{
	int a;
	int b;
};
void	q(int i, int x, node *pq)
{
	int tar_x = pq->a;
	int tar_y = pq->b;
	if (tar_x != -1)
	{
		int dy = tar_y + direct[x][0];
		int dx = tar_x + direct[x][1];
		if (dy >= 0 && dx >= 0 && dx < 3 && dy < 4 && map[dy][dx] != '#' && map[dy][dx] != 'A' && map[dy][dx] != 'D' && map[dy][dx] != 'C')
		{
			map[dy][dx] = name[i];
			map[tar_y][tar_x] = '_';
			pq->a = dx;
			pq->b = dy;
		}
	}
}



int main()
{
	for (int y = 0; y < 4; y++)
			cin >> map[y];
	vector<node> pq;
	int i = 0;
	for (int y = 0; y < 4; y++)
	{
		int tar = map[y].find(name[i]);
		if (tar != -1)
		{
			pq.push_back({tar, y});
			i++;
		}
	}
	for (int x = 0; x < 5; x++)
	{
		q(0, x, &pq[0]);
		q(1, x, &pq[1]);
		q(2, x, &pq[2]);
	}
	for (int y = 0; y < 4; y++)
		cout << map[y] << endl;
	return (0);
}