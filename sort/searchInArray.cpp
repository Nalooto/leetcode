#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


/*
0 1 2 3 4 5 6                ➡
1 2 3 4 5 6 7				⬇
2 3 4 5 6 7 8
3 4 5 6 7 8 9
4 5 6 7 8 9 10
*/
class Solution {
public:
	bool Find(int target, vector<vector<int> > array) {
		int array_row = array.size();//矩阵行数
		int array_col = array[0].size();
		int  i = array_row - 1;
		int j = 0;
		while(j<array_col&&i >= 0)
		{
			
			if (target > array[i][j])
			{
				j++;
		
			}
			else if (target  ==array[i][j])
			{
				return true;
			}
			else 
			{
				i--;
		
			}
		}
		return false;

	}
};
