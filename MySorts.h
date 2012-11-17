#include <iostream>
using namespace std;

#ifndef MySorts_h
#define MySorts_h

template <typename T>
class Sorter
{
private:
	T* num;
	int n;
	
	void MyMergeSort(const int low, const int high)
	{
		if (low < high)
		{
			int middle = (low + high) / 2;
			MyMergeSort(low, middle); 		// sort lower half
			MyMergeSort(middle + 1, high); 	// sort upper half
			MyMerge(low, middle, high); 	// merge the two halves
		}
	}
	
	void MyMerge(const int low, const int mid, const int high)
	{
		T* helper = NULL;
		helper = new T[n];
		int i, j, k;
		i = low;
		j = mid + 1;
		k = low;
		
		for (int i = 0; i < n; i++) //copy the array
			helper[i] = num[i];
		
		while (i <= mid && j <= high) // move the lesser number from each half into the array
			num[k++] = (num[j] < helper[i]) ? num[j++] : helper[i++];
		
		while (i <= mid) // put any remainders from the lower half into the array
			num[k++] = helper[i++];
		
		while (j <= high) // put any remainders from the upper half into the array
			num[k++] = helper[j++];
		
		delete[] helper;
		helper = NULL;
	}
	
	void MyQuickSort(const int bottom, const int top)
	{
		int piv;
		if(bottom < top)
		{
			piv = (bottom + top)/2;
			piv = QSPartition(bottom, top, piv);
			MyQuickSort(bottom, piv - 1);
			MyQuickSort(piv + 1, top);
		}
	}
	
	int QSPartition(const int bottom, const int top, int piv)
	{
		T pivVal = num[piv];
		
		T helper = num[piv];
		num[piv] = num[top];
		num[top] = helper;
		
		int pivNew = bottom;
		
		for(int i = bottom; i < top; i++)
		{
			if(num[i] <= pivVal)
			{
				helper = num[i];
				num[i] = num[pivNew];
				num[pivNew] = helper;
				pivNew++;
			}
		}
		
		helper = num[pivNew];
		num[pivNew] = num[top];
		num[top] = helper;
		
		return pivNew;
	}
	
public:
	Sorter(T* arr, int N) 
	{
		n = N;
		num = arr;
	}
	
	void InsertionSort();
	void MergeSort();
	void BubbleSort();
	void QuickSort();
	void display();
};

template <typename T>
void Sorter<T>::display()
{
	for (int i = 0; i < n; i++)
		cout << num[i] << "  ";
	cout << endl;
}

template <typename T>
void Sorter<T>::MergeSort()
{
	MyMergeSort(0, n-1);
}

template <typename T>
void Sorter<T>::InsertionSort()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j > 0 && num[j] < num[j-1]; j--)
		{ // moves the number down the array until everything lower is lower than it
			T helper = num[j];
			num[j] = num[j-1];
			num[j-1] = helper;
		}
	}
}

template <typename T>
void Sorter<T>::BubbleSort()
{
	for(int i = 0; i < n; i++)
	{
		bool swapped = false;
		for(int j = (n-1); j > i+1; j--)
		{
			if(num[j] < num[j-1])
			{
				T helper = num[j];
				num[j] = num[j-1];
				num[j-1] = helper;
				swapped = true;
			}
		}
		if(!swapped)
			return;
	}
}

template <typename T>
void Sorter<T>::QuickSort()
{
	MyQuickSort(0, n-1);
}

#endif