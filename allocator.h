#pragma once
#include <iostream>
#include <list>
using namespace std; 

namespace allocationPractice {
	template<class T >
	class Allocation {
	private:
		int size;
	public:
		Allocation(): size() {};
		int prompt() { 
			cout << "How many items are in the array? ";
			cin >> size;
			return size;
		}

		T* getPointer() {
			T* arrayItems = new (nothrow) T(); 
			return arrayItems; 
		}
		void addItem(T* arrayItems, int size) {
			cout << "Please enter " << size << " values: \n";
			for (int i = 0; i < size; i++) {
				cout << "\t# " << i + 1 << ": ";
				cin >> arrayItems[i];
			}
			
		}
		void display(const T* arrayItems, int size) {
			cout << "The elements in the list: \n";
			for (int i = 0; i < size; i++) {
				cout << "\t# " << i + 1 << " " << arrayItems[i] << endl;
			}
		}
	};
}