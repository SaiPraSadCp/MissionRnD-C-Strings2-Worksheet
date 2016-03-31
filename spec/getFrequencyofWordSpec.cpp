# include "stdafx.h"
#include <stdlib.h>
int count_word_in_str_way_1(char *str, char *word){
	int index, count = 0, windex, flag, tindex = 0;
	for (index = 0; str[index]; index++)
	{
		if (word[0] == str[index])
		{
			windex = 1;
			tindex = index + 1;
			flag = 0;
			while (word[windex])
			{
				if (word[windex] == str[tindex])
				{
					windex++;
					tindex++;
					continue;
				}
				else
				{
					flag = 1;
					break;
				}
			}
			if (flag == 0)
				count++;
		}
	}
	return count;
}

int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}
