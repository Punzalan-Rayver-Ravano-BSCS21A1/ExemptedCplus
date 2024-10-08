#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;

class midterm1 {
private:
    int arr[100];
    int N;
    int i;

public:
    int curIndex;	

    // Constructor
    midterm1(int n) {
        N = n;
        curIndex = 0;
        for (i = 0; i < N; i++)
            arr[i] = 0;
    }

    ~midterm1() {}

    void initial() {
        for (i = 0; i < N; i++)
            arr[i] = rand() % 100 + 1; // 100
        curIndex = N;
    }

    void initial(int temp) {
        for (i = 0; i < temp; i++)
            arr[i] = rand() % 100 + 1; // 100
        curIndex = temp;
    }

    // Display all elements
    void displayAll() {
        cout << "{";
        for (i = 0; i < curIndex; i++) {
            cout << arr[i];
            if (i < curIndex - 1)
                cout << ",";
        }
        cout << "}";
    }

    // Original array
    void originalAll() {
        cout << "{";
        for (i = 0; i < N; i++) {
            cout << arr[i];
            if (i < N - 1)
                cout << ",";
        }
        cout << "}";
    }

    // Reverse
    void reverseAll() {
        cout << "{";
        for (i = curIndex - 1; i >= 0; i--) {
            cout << arr[i];
            if (i > 0)
                cout << ",";
        }
        cout << "}";
    }

    void merge(int *newArr, int cnt) {
        if (curIndex + cnt > N) {
            cout << "Cannot contain index";
            return;
        }
        for (int i = 0; i < cnt; i++) {
            arr[curIndex + i] = newArr[i];
        }
        curIndex += cnt; 
    }

    void selectionSort() {
        for (int i = 0; i < curIndex; i++) {
            int minIndex = i;
            for (int j = i + 1; j < curIndex; j++) {
                if (arr[j] < arr[minIndex]) {
                    minIndex = j;
                }
            }
            if (minIndex != i) {
                swap(arr[i], arr[minIndex]);
            }
        }
    }

    void selectionSortDescending() {
        for (int i = 0; i < curIndex; i++) {
            int maxIndex = i;
            for (int j = i + 1; j < curIndex; j++) {
                if (arr[j] > arr[maxIndex]) {
                    maxIndex = j;
                }
            }
            if (maxIndex != i) {
                swap(arr[i], arr[maxIndex]);
            }
        }
    }

    void bubbleSort() {
        for (int i = 0; i < curIndex; i++) {
            for (int j = 0; j < curIndex - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                }
            }
        }
    }

    void bubbleSortDescending() {
        for (int i = 0; i < curIndex; i++) {
            for (int j = 0; j < curIndex - i - 1; j++) {
                if (arr[j] < arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                }
            }
        }
    }

    int* getArray() {
        return arr;
    }

    int curValue() {
        return curIndex;
    }

    int searchData(int val) {
        for (int ctr = 0; ctr < curIndex; ctr++) {
            if (arr[ctr] == val) {
                return ctr; 
            }
        }
        return -1; 
    }

    void deleteByValue(int val) {
        bool found = false;
        int newIndex = 0;

        for (int i = 0; i < curIndex; i++) {
            if (arr[i] != val) {
                arr[newIndex] = arr[i];
                newIndex++;
            } else {
                found = true;
            }
        }

        curIndex = newIndex;

        if (!found) {
            cout << "Value not found!" << endl;
        }
    }

    void deleteByIndex(int index) {
        if (index >= 0 && index < curIndex) {
            // Shift elements to the left to "delete" the element at the index
            for (int i = index; i < curIndex - 1; i++) {
                arr[i] = arr[i + 1];
            }
            curIndex--; // Reduce the size of the array
        } else {
            cout << "Index out of bounds!" << endl;
        }
    }

    void searchAll(int val) {
        bool found = false;
        cout << "Indices of " << val << ": ";
        for (int ctr = 0; ctr < curIndex; ctr++) {
            if (arr[ctr] == val) {
                cout << ctr << " "; 
                found = true; 
            }
        }
        if (!found) {
            cout << "not found"; 
        }
        cout << endl; 
    }

    void insertVal(int value, int location){
	if (curIndex >= N){
		cout<<"Cannot Insert";
		return;
	}
	if (location<0||location>curIndex){
		cout<<"Invalid location" <<endl;
		return;
	}
		
	for(int i = curIndex; i> location; i --){
		arr[i] = arr[i - 1];
	}
		
	arr[location] = value;
	curIndex++;
	
	}
	
	void setTextColor(int color) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
	}
	
	//------------------------------------------------------------------------
	   void intersect(int *setB, int lenB) {
        cout << "{";
        bool firstElement = true;
        for (int i = 0; i < curIndex; i++) {
            for (int j = 0; j < lenB; j++) {
                if (arr[i] == setB[j]) {
                    if (!firstElement) {
                        cout << ",";
                    }
                    cout << arr[i];
                    firstElement = false;
                    break;
                }
            }
        }
        cout << "}";
    }
	
	
};

