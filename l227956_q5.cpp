#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int n1, n2, total1=0, total2=0, input1, input2, count1 =0 , count2 = 0, i =1;
	cout << "\t \t \t \t \t A SIMPLE VERSION OF SNAKES AND LADDERS" << endl;
	for (i = 1; i <= 5; i++)
	{
		cout << "\nROUND " << i << endl;
		while (1)
		{
			cout << "\nPlayer 1 press enter to roll the dice " << endl;
			input1 = getchar();
			srand(time(0));
			n1 = (rand() % 6) + 1;
			cout << "Player 1 turn : " << n1 << endl;
			total1 = total1 + n1;
			if (total1 > 20)
			{
				total1 = total1 - n1;
				cout << "MOVE NOT POSSIBLE" << endl;
			}
			cout << "Player 1 total : " << total1 << endl;
			if (total1 == 20)
			{
				count1 = count1 + 1;
				cout << "\nplayer 1 won " << count1 << " time" << endl;
				break;
			}
			cout << "\nPlayer 2 press enter to roll the dice " << endl;
			input2 = getchar();
			srand(time(0));
			n2 = (rand() % 6) + 1;
			cout << "Player 2 turn : " << n2 << endl;
			total2 = total2 + n2;
			if (total2 > 20)
			{
				total2 = total2 - n2;
				cout << "MOVE NOT POSSIBLE" << endl;
			}
			cout << "player 2 total : " << total2 << endl;
			if (total2 == 20)
			{
				count2 = count2 + 1;
				cout << "\nplayer 2 won " << count2 << " time" << endl;
				break;
			}
		}
		total1 = 0, total2 = 0;
		if (count1 == 3)
		{
			cout << "player 1 wins" << endl;
			break;
		}
	
		else if (count2 == 3)
		{
			cout << "player 2 wins" << endl;
			break;
		}
	}
}