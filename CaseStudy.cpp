#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <windows.h>
#include <conio.h>
#include "classes.cpp" 
using namespace std;

int main (){
	
	midterm1 obj(100);
	midterm1 A(50), B(50), C(50), D(50);
	int num;
	    

	
	int choice;
	while(true){
		bool returntoMain = false;
		obj.setTextColor(9);
    	cout << "CASE STUDY" << endl;
    	obj.setTextColor(7);
		cout << "1. Data Entry" << endl;
		cout << "2. Search" << endl;
		cout << "3. Display" << endl;
		cout << "4. Sort" << endl;
		cout << "5. Display Union & Intersection of Two Sets" << endl;
		cout << "6. Insert" << endl;
		cout << "7. Delete" << endl;
		cout << "8. Programmers Info" << endl;
		cout << "9. Exit" << endl;
		cout << "Choice: ";
		cin >> choice;
		system("cls");
		
		switch (choice){
			case 1:{
				obj.setTextColor(11);			
				cout << "DATA ENTRY" << endl;
				obj.setTextColor(7);
				cout << endl;	
			    cout << "Enter the number of values for Set A: ";
			    cin >> num;
			    A.initial(num);
				
				cout << "Enter the number of values for Set B: ";
    			cin >> num;
    			B.initial(num);
    			
    			cin.ignore(); 
    			cout << endl;
    			
    			//original
    			cout << "Original" << endl;
			    cout << "A = ";
			    A.originalAll();
			    cout << "\nB = ";
			    B.originalAll();
			    cout << endl;
			    
			    C.merge(A.getArray(), A.curValue());
				D.merge(B.getArray(), B.curValue());
				
			    //cout << "\nMerged" << endl;
			    //B.merge(A.getArray(), A.curValue());
			    //B.displayAll(); 
			    //cout << " The current index: " << B.curIndex;
			    //cout << endl;
			    
			    obj.setTextColor(6);
			    cout << "press any key to continue..." << endl;
			    obj.setTextColor(7);
			    
				getch();
				system("cls");
				break;
			}
			case 2: {
				obj.setTextColor(11);			
				cout << "SEARCH" << endl;
				obj.setTextColor(7);
				cout << " Set A = ";
			    C.displayAll(); 
			    cout << " The current index: " << C.curIndex<< endl;
			    cout << endl;
			    //
			    cout << " Set B = ";
				D.displayAll(); 
			    cout << " The current index: " << D.curIndex<< endl;
			    cout << endl;
			    //-----------------------------
			    
				int val; // item search
			    cout << "Enter value to search: ";
			    cin >> val;
			    int found = C.searchData(val);
				    if (found == -1) 
						{ 	
				       cout << "Record not found!" << endl; 
				    	}
					else 
						{
				       cout << val << " is located at index " << found << endl; 
				    	}
				C.searchAll(val);
				// -----------------------------
				//int val; // item search
			    //cout << "Enter value to search: ";
			    //cin >> val;
			    found = D.searchData(val);
				    if (found == -1) 
						{ 	
				       cout << "Record not found!" << endl; 
				    	}
					else 
						{
				       cout << val << " is located at index " << found << endl; 
				    	}
				D.searchAll(val);
				obj.setTextColor(6);
			    cout << "press any key to continue..." << endl;
			    obj.setTextColor(7);
				getch();
				system("cls");
				break;
				
			}		
			case 3:{
				obj.setTextColor(11);			
				cout << "DISPLAY" << endl;
				obj.setTextColor(7);
				cout << endl;
				
				cout << "Set A = ";
				C.displayAll();
				cout << endl;
				cout << "Set B = ";
				D.displayAll();
				cout << endl;
				
				cout << "Original" << endl;
			    cout << "A = ";
			    C.originalAll();
			    cout << "\nB = ";
			    D.originalAll();
			    cout << endl;
				//no zeros
			    cout << "\nNo zero" << endl;
			    cout << "A = ";
			    C.displayAll();
			    cout << " The current index: " << C.curIndex;
			    cout << "\nB = ";
			    D.displayAll();
			    cout << " The current index: " << D.curIndex;
			    cout << endl;
			    
			    cout << "\nReversed" << endl;
			    cout << "A = ";
			    C.reverseAll();
			    cout << " The current index: " << C.curIndex;
			    cout << "\nB = ";
			    D.reverseAll();
			    cout << " The current index: " << D.curIndex;
			    cout << endl;
			    /*
			    cout << "\nMerged" << endl;
			    B.displayAll(); 
			    cout << endl;*/
			    
			    /*
			    cout << "\nMerged" << endl;
			    B.merge(A.getArray(), A.curValue());
			    B.displayAll(); 
			    cout << " The current index: " << B.curIndex;
			    cout << endl;
			    */
				obj.setTextColor(6);
			    cout << "press any key to continue..." << endl;
			    obj.setTextColor(7);
				getch();
				system("cls");
				break;
			}
			
			case 4: {
				obj.setTextColor(11);			
				cout << "SORT" << endl;
				obj.setTextColor(7);
				cout << endl;
				
				int ichoice;
				cout << "What set do you want to use A[1] B[2]: ";
				cin>> ichoice;
				//set A
				if(ichoice == 1){
					int ochoice;
					cout <<"Descending[1] Ascending[2]: ";
					cin >> ochoice;
					if(ochoice == 1){
						cout << "Descending = ";
		    			C.selectionSortDescending();
		    			C.displayAll();
		    			cout << " The current index: " << C.curIndex;	 
		    			cout << endl;
					}
					else if (ochoice == 2){
						cout << "Ascending = ";
						C.selectionSort();
						C.displayAll();  
						cout << " The current index: " << C.curIndex;
						cout << endl;
					}
				}
				else if (ichoice == 2){
					int ochoice;
					cout <<"Descending[1] Ascending[2]: ";
					cin>> ochoice;
					if(ochoice == 1){
						cout << "Descending = ";
		    			D.selectionSortDescending();
		    			D.displayAll();
		    			cout << " The current index: " << D.curIndex;	 
		    			cout << endl;
					}
					else if (ochoice == 2){
						cout << "Ascending = ";
						D.selectionSort();
						D.displayAll();  
						cout << " The current index: " << D.curIndex;
						cout << endl;
					}
				}
				else{
					cout<<"Invalid!";
				}
				/*
				cout << "Descending = ";
    			B.selectionSortDescending();
    			B.displayAll();
    			cout << " The current index: " << B.curIndex;	 
    			cout << endl;
				
				cout << "Ascending = ";
				B.selectionSort();
				B.displayAll();  
				cout << " The current index: " << B.curIndex;
				cout << endl;*/
				
				obj.setTextColor(6);
				cout << "press any key to continue..." << endl;
			    obj.setTextColor(7);
				getch();
				system("cls");
				break;
			}
			case 5:{
				obj.setTextColor(11);			
				cout << "UNION & INTERSECTION" << endl;
				obj.setTextColor(7);
				cout << endl;
				
				cout << "Set A = ";
				C.displayAll();
				cout << endl;
				cout << "Set B = ";
				D.displayAll();
				cout << endl;
				
				cout << "Union = ";
				B.merge(A.getArray(), A.curValue());
				B.displayAll(); 
				
				cout << "\n\nIntersection of Set A and Set B: ";
    			D.intersect(C.getArray(), C.curValue());
    			cout << endl;
    			
    			
			    cout << endl;
				obj.setTextColor(6);
				cout << "press any key to continue..." << endl;
			    obj.setTextColor(7);
				getch();
				system("cls");
				break;
			}
			case 6:{
				obj.setTextColor(11);			
				cout << "INSERT" << endl;
				obj.setTextColor(7);
				cout << endl;
				
				int value, location, uchoice;
				cout << "What set do you want to use A[1] or B[2]: "; cin >> uchoice;
				if (uchoice == 1){
					cout<<"Set A = ";
					C.displayAll(); cout<<endl;
					cout << "Enter Value to insert: "; cin >> value;
					cout << "Enter Index: "; cin >> location;
					C.insertVal(value, location);
					cout<<"Updated Set A = ";
					C.displayAll(); cout<<endl;
				}
				else if (uchoice == 2){
					cout<<"Set B = ";
					D.displayAll(); cout<<endl;
					cout << "Enter Value to insert: "; cin >> value;
					cout << "Enter Index: "; cin >> location;
					D.insertVal(value, location);
					cout<<"Updated Set B = ";
					D.displayAll(); cout<<endl;
				}
				else{
					obj.setTextColor(12);
					cout << "Invalid choice!"<< endl;
					obj.setTextColor(7);
				}
				obj.setTextColor(6);
				cout << "press any key to continue..." << endl;
			    obj.setTextColor(7);
				getch();
				system("cls");
				break;
			}
			case 7:{
				int valueToDelete, uchoice;
				obj.setTextColor(11);			
				cout << "DELETE" << endl;
				obj.setTextColor(7);
				cout << endl;
				cout << "What set do you want to use A[1] or B[2]: "; cin >> uchoice;
				if (uchoice == 1){
					cout<<"Set A = ";
					C.displayAll(); cout<<endl;
					cout << "Enter value to delete from set: ";
					cin >> valueToDelete;
					cout << endl;
					C.deleteByValue(valueToDelete);
					cout<<"Updated Set A = ";
					C.displayAll(); cout<<endl;

				}
				else if (uchoice == 2){
					cout<<"Set B = ";
					D.displayAll(); cout<<endl;
					cout << "Enter value to delete from set: ";
					cin >> valueToDelete;
					cout << endl;
					D.deleteByValue(valueToDelete);
					cout<<"Updated Set B = ";
					D.displayAll(); cout<<endl;

				}
				else{
					obj.setTextColor(12);
					cout << "Invalid choice!"<< endl;
					obj.setTextColor(7);
				}
				
				obj.setTextColor(6);
				cout << "press any key to continue..." << endl;
			    obj.setTextColor(7);
				getch();
				system("cls");
				break;
			}
			case 8: {
				obj.setTextColor(11);			
				cout << "PROGRAMMER'S INFO" << endl;
				obj.setTextColor(7);
				cout << endl;
				cout << "Name: Rayver Punzalan"<< endl;
				cout << "Course and Year: BSCS 2nd Year"<< endl;
				cout << "Section: 21A1"<< endl;
				cout << "Subject: DATA STRUCTURES"<< endl;
				
				obj.setTextColor(6);
				cout << "press any key to continue..." << endl;
			    obj.setTextColor(7);
				getch();
				system("cls");
				break;
			}
			
			case 9:{
				returntoMain = true;
				break;
			}
			default:{
				obj.setTextColor(12);
				cout << "Invalid choice....."<< endl;
				obj.setTextColor(7);
				getch();
				system("cls");
				break;
			}
			

		}
		
		
		
		
		
		// breaker for the whole loop
		if (returntoMain){
			break;
		}
	}
	
	
	
	return 0;
}
