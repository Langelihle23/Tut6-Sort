#include<iostream>
#include<conio.h>
#include<stdio.h>
#include <vector>

using namespace std;

template<typename T>

void sort(T sort[], const int NumElements){

	for (int i = 0; i < NumElements - 1; i++)
	{
		for (int j = 0; j < NumElements - i - 1; j++)
		{
			if (sort[j] < sort[j + 1])
			{
				int temp = sort[j];
				sort[j] = sort[j + 1];
				sort[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < NumElements; i++)
	{
		cout << sort[i] << " ";

	}
}

template<typename R>
void sortString(R st[], const int Elements){
	char t[20];
	for (int i = 1; i<Elements; i++)
	{
		for (int j = 1; j<Elements; j++)
		{

			if (strcmp(st[j - 1], st[j])>0)
			{
				strcpy(t, st[j - 1]);
				strcpy(st[j - 1], st[j]);
				strcpy(st[j], t);
			}
		}
	}
	cout << endl << endl << "Strings (Names) in alphabetical order :" << endl;
	for (int i = 0; i<Elements; i++)
	{
		cout << st[i] << "\n";
	}
	getch();
}

template<typename B>

void sortFloat(B srt[], const int NumElem){


}


int main()
{
	int anil[] = { 12, 5, 7, 9, 11, 8 };
	sort(anil, 6);
	char str[5][20] = { "Lihle", "Ane", "Nonkosi", "Sne", "Mbali" };
	sortString(str, 5);

	float height[] = { 12.39, 20.20, 5.55, 34.77, 60.00, 29.83 };
	sortFloat(height, 6);
}
