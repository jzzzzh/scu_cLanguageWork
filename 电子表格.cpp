#include<iostream>
#include<string>
using namespace std;
typedef struct Dinstruction{
	string words;
	int firstNums;
	int secondNums;
}Dinstruction;
Dinstruction searchInstruction(string instruction)
{
	Dinstruction Dins;
	Dins.firstNums = 0;
	Dins.secondNums = 0;
	Dins.words = "";
	int length = instruction.length();
	int insPtr = 0;
	while(instruction[insPtr]==' ')
	{
		insPtr++;
	}
	while(instruction[insPtr]<='Z'&&instruction[insPtr]>='A')
	{
		Dins.words = Dins.words + instruction[insPtr];
		insPtr++;
	}
	while(instruction[insPtr]==' ')
	{
		insPtr++;
	}
	while(instruction[insPtr]<='9'&&instruction[insPtr]>='0')
	{
		Dins.firstNums = Dins.firstNums * 10 + instruction[insPtr] - '0';
		insPtr++;
	}
	if(Dins.words == "SR" ||Dins.words == "SC")
	{
	while(instruction[insPtr]==' ')
	{
		insPtr++;
	}
	while(instruction[insPtr]<='9'&&instruction[insPtr]>='0')
	{
		Dins.secondNums = Dins.secondNums * 10 + instruction[insPtr] - '0';
		insPtr++;
	}
	}
	return Dins;
}

int main(void)
{
	int row,column;
	cin >> row >> column;
	int a[100][100];
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < column; j++)
		{
			cin >> a[i][j];
		}
	}
	int times;
	cin >> times;
	getchar();
	for(int i = 0; i < times; i++)
	{
		string instruction;
		getline(cin,instruction);
		Dinstruction dis;
		dis = searchInstruction(instruction);
		
		if(dis.words == "SR")
		{
			int row1,row2;
			row1 = dis.firstNums - 1;
			row2 = dis.secondNums - 1;
			for(int j = 0; j < column; j++)
			{
				int temp = a[row1][j];
				a[row1][j] = a[row2][j];
				a[row2][j] = temp;
			}
		}
		else if(dis.words == "SC")
		{
			int column1, column2;
			column1 = dis.firstNums - 1;
			column2 = dis.secondNums - 1;
			for(int j = 0; j < row; j++)
			{
				int temp = a[j][column1];
				a[j][column1] = a[j][column2];
				a[j][column2] = temp;
			}
		}
		else if(dis.words == "DR")
		{
			int drow = dis.firstNums-1;
			for(int j = drow; j < row; j++)
			{
				for(int k = 0; k < column; k++)
				{
					a[j][k] = a[j+1][k];
				}
			}
			row--;
		}
		else if(dis.words == "DC")
		{
			int dcolumn = dis.firstNums-1;
			for(int j = dcolumn; j < column; j++)
			{
				for(int k = 0; k < row; k++)
				{
					a[k][j] = a[k][j+1];
				}
			}
			column--;
		}
		else if(dis.words == "IR")
		{
			row++;
			int drow = dis.firstNums ;
			for(int j = row; j > drow; j--)
			{
				for(int k = 0; k < column; k++)
				{
					a[j-1][k] = a[j-2][k];
				}
			}
			for(int j = 0; j < column; j++)
			{
				a[drow-1][j] = 0;
			}
		}
		else if(dis.words == "IC")
		{	
			column++;
			int dcolumn = dis.firstNums;
			for(int j = column; j > dcolumn; j--)
			{
				for(int k = 0; k < row; k++)
				{
					a[k][j-1] = a[k][j-2];
				}
			}
			for(int k = 0; k < row; k++)
				{
					a[k][dcolumn-1] = 0;
				}
		}
//		for(int i = 0; i < row; i++)
//	{
//		for(int j = 0; j < column; j++)
//		{
//			cout << a[i][j] << " ";
//		}
//		cout << endl;
//	}
	}
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < column; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
