#include "MySorts.h"
#include <iomanip>
using namespace std;

void FillArray(int*, int);
void CopyArray(int*, int*, int);

int main () 
{
	int hundred[100];
	int thousand[1000];
	int tenK[10000];
	int fiftyK[50000];
	
	int MShundredArr[100];
	int MSthousandArr[1000];
	int MStenKArr[10000];
	int MSfiftyKArr[50000];
	
	int IShundredArr[100];
	int ISthousandArr[1000];
	int IStenKArr[10000];
	int ISfiftyKArr[50000];
	
	int BShundredArr[100];
	int BSthousandArr[1000];
	int BStenKArr[10000];
	int BSfiftyKArr[50000];
	
	int QShundredArr[100];
	int QSthousandArr[1000];
	int QStenKArr[10000];
	int QSfiftyKArr[50000];
	
	FillArray(hundred, 100);
	FillArray(thousand, 1000);
	FillArray(tenK, 10000);
	FillArray(fiftyK, 50000);
	
	CopyArray(hundred, MShundredArr, 100);
	CopyArray(thousand, MSthousandArr, 1000);
	CopyArray(tenK, MStenKArr, 10000);
	CopyArray(fiftyK, MSfiftyKArr, 50000);
	
	CopyArray(hundred, IShundredArr, 100);
	CopyArray(thousand, ISthousandArr, 1000);
	CopyArray(tenK, IStenKArr, 10000);
	CopyArray(fiftyK, ISfiftyKArr, 50000);
	
	CopyArray(hundred, BShundredArr, 100);
	CopyArray(thousand, BSthousandArr, 1000);
	CopyArray(tenK, BStenKArr, 10000);
	CopyArray(fiftyK, BSfiftyKArr, 50000);
	
	CopyArray(hundred, QShundredArr, 100);
	CopyArray(thousand, QSthousandArr, 1000);
	CopyArray(tenK, QStenKArr, 10000);
	CopyArray(fiftyK, QSfiftyKArr, 50000);
	
	Sorter<int> MShundred (MShundredArr, 100);
	Sorter<int> MSthousand (MSthousandArr, 1000);
	Sorter<int> MStenK (MStenKArr, 10000);
	Sorter<int> MSfiftyK (MSfiftyKArr, 50000);
	
	Sorter<int> IShundred (IShundredArr, 100);
	Sorter<int> ISthousand (ISthousandArr, 1000);
	Sorter<int> IStenK (IStenKArr, 10000);
	Sorter<int> ISfiftyK (ISfiftyKArr, 50000);
	
	Sorter<int> BShundred (BShundredArr, 100);
	Sorter<int> BSthousand (BSthousandArr, 1000);
	Sorter<int> BStenK (BStenKArr, 10000);
	Sorter<int> BSfiftyK (BSfiftyKArr, 50000);
	
	Sorter<int> QShundred (QShundredArr, 100);
	Sorter<int> QSthousand (QSthousandArr, 1000);
	Sorter<int> QStenK (QStenKArr, 10000);
	Sorter<int> QSfiftyK (QSfiftyKArr, 50000);
	
	clock_t start = clock();
	MShundred.MergeSort();
	cout << setw(8) << ( ( clock() - start ) / (double)CLOCKS_PER_SEC ) * 1000 << " miliseconds total for Merge Sort with 100 elements.\n";
	start = clock();
	MSthousand.MergeSort();
	cout << setw(8) << ( ( clock() - start ) / (double)CLOCKS_PER_SEC ) * 1000 << " miliseconds total for Merge Sort with 1000 elements.\n";
	start = clock();
	MStenK.MergeSort();
	cout << setw(8) << ( ( clock() - start ) / (double)CLOCKS_PER_SEC ) * 1000 << " miliseconds total for Merge Sort with 10000 elements.\n";
	start = clock();
	MSfiftyK.MergeSort();
	cout << setw(8) << ( ( clock() - start ) / (double)CLOCKS_PER_SEC ) * 1000 << " miliseconds total for Merge Sort with 50000 elements.\n\n";

	start = clock();
	IShundred.InsertionSort();
	cout << setw(8) << ( ( clock() - start ) / (double)CLOCKS_PER_SEC ) * 1000 << " miliseconds total for Insertion Sort with 100 elements.\n";
	start = clock();
	ISthousand.InsertionSort();
	cout << setw(8) << ( ( clock() - start ) / (double)CLOCKS_PER_SEC ) * 1000 << " miliseconds total for Insertion Sort with 1000 elements.\n";
	start = clock();
	IStenK.InsertionSort();
	cout << setw(8) << ( ( clock() - start ) / (double)CLOCKS_PER_SEC ) * 1000 << " miliseconds total for Insertion Sort with 10000 elements.\n";
	start = clock();
	ISfiftyK.InsertionSort();
	cout << setw(8) << ( ( clock() - start ) / (double)CLOCKS_PER_SEC ) * 1000 << " miliseconds total for Insertion Sort with 50000 elements.\n\n";
	
	start = clock();
	BShundred.BubbleSort();
	cout << setw(8) << ( ( clock() - start ) / (double)CLOCKS_PER_SEC ) * 1000 << " miliseconds total for Bubble Sort with 100 elements.\n";
	start = clock();
	BSthousand.BubbleSort();
	cout << setw(8) << ( ( clock() - start ) / (double)CLOCKS_PER_SEC ) * 1000 << " miliseconds total for Bubble Sort with 1000 elements.\n";
	start = clock();
	BStenK.BubbleSort();
	cout << setw(8) << ( ( clock() - start ) / (double)CLOCKS_PER_SEC ) * 1000 << " miliseconds total for Bubble Sort with 10000 elements.\n";
	start = clock();
	BSfiftyK.BubbleSort();
	cout << setw(8) << ( ( clock() - start ) / (double)CLOCKS_PER_SEC ) * 1000 << " miliseconds total for Bubble Sort with 50000 elements.\n\n";
	
	start = clock();
	QShundred.QuickSort();
	cout << setw(8) << ( ( clock() - start ) / (double)CLOCKS_PER_SEC ) * 1000 << " miliseconds total for Quick Sort with 100 elements.\n";
	start = clock();
	QSthousand.QuickSort();
	cout << setw(8) << ( ( clock() - start ) / (double)CLOCKS_PER_SEC ) * 1000 << " miliseconds total for Quick Sort with 1000 elements.\n";
	start = clock();
	QStenK.QuickSort();
	cout << setw(8) << ( ( clock() - start ) / (double)CLOCKS_PER_SEC ) * 1000 << " miliseconds total for Quick Sort with 10000 elements.\n";
	start = clock();
	QSfiftyK.QuickSort();
	cout << setw(8) << ( ( clock() - start ) / (double)CLOCKS_PER_SEC ) * 1000 << " miliseconds total for Quick Sort with 50000 elements.\n\n";
	
	return 0;
}

void FillArray(int* num, int n)
{
	srand((unsigned)time(0));
	int low = 10000, high = 99999;
	int range = (high-low)+1;
	for(int i = 0; i < n; i++)
		num[i] = int(rand()%range) + low;
}

void CopyArray(int* O_arr, int* N_arr, int nu)
{
	for(int i = 0; i < nu; i++)
		N_arr[i] = O_arr[i];
}
