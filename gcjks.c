//**猜名次**
//**5位运动员参加了跳水, 有人让她们预测结果:**
//
//A选手说 : B第二, 我第三
//   B选手说 : 我第二, E第四
//	  C选手说 : 我第一, D第二
//		 D选手说 : C最后, 我第三
//			E选手说 : 我第四, A第一
//				   比赛结束后, 每一位选手都说对了一半, 请编写程序确定比赛的名次.(穷举法)
//				   ```c
				
#include <stdio.h>
#include <stdlib.h>

//a b c d e 分别代表A选手 B选手 C选手 D选手 E选手
void GuessRank(){
	int a, b, c, d, e;
	//将每一种情况穷举出来
	for (a = 1; a <= 5; a++){
		for (b = 1; b <= 5; b++){
			for (c = 1; c <= 5; c++){
				for (d = 1; d <= 5; d++){
					for (e = 1; e <= 5; e++){
						//判定条件
						if ((b == 2) + (a == 3) == 1
							&& (b == 2) + (e == 4) == 1 && (c == 1) + (d == 2) == 1
							&& (c == 5) + (d == 3) == 1 && (e == 4) + (a == 1) == 1){
							if (a * b * c * d * e != 120){
								continue;
							}

							printf("得到的名次分别是: a=第%d名 b=第%d名 c=第%d名 d=第%d名 e=第%d名\n", a, b, c, d, e);
						}
					}
				}
			}
		}
	}

}
int main(){
	GuessRank();
	system("pause");
	return 0;
}
