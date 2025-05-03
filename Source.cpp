#include<iostream>
#include"Graph.h"
#include "Graph.cpp."
#include"Vertex.h"
#include<vector>
#include<list>
using namespace std;
void menu();
int main()
{
	/*Graph g;
    g.test();
	g.printGraph();
	*/
    void menu();
    
  return 0;
}



// Function to display the menu and handle user input ((still not used⛔⛔⛔⛔⛔⛔⛔))
void menu()
{
    int option;

    do {
        cout << "What operation do you want to perform? "
            << " Select Option number. Enter 0 to exit." << endl;
        cout << "1. Add Vertex" << endl;
        cout << "2. Update Vertex" << endl;
        cout << "3. Delete Vertex" << endl;
        cout << "4. Add Edge" << endl;
        cout << "5. Update Edge" << endl;
        cout << "6. Delete Edge" << endl;
        cout << "7. Check if 2 Vertices are Neighbors" << endl;
        cout << "8. Print All Neighbors of a Vertex" << endl;
        cout << "9. Print Graph" << endl;
        cout << "0. Exit Program" << endl;

        cin >> option;

        switch (option) {
        case 0:
            cout << "Exiting Program..." << endl;
            break;
        case 1:
           
            
            cout << "Add Vertex Operation" << endl;
           
            break;
        case 2:
            cout << "Update Vertex Operation" << endl;
            // Update vertex logic here
            break;
        case 3:
            cout << "Delete Vertex Operation" << endl;
            // Delete vertex logic here
            break;
        case 4:
            cout << "Add Edge Operation" << endl;
            // Add edge logic here
            break;
        case 5:
            cout << "Update Edge Operation" << endl;
            // Update edge logic here
            break;
        case 6:
            cout << "Delete Edge Operation" << endl;
            // Delete edge logic here
            break;
        case 7:
            cout << "Check Neighbors Operation" << endl;
            // Check neighbors logic here
            break;
        case 8:
            cout << "Print Neighbors Operation" << endl;
            // Print neighbors logic here
            break;
        case 9:
            cout << "Print Graph Operation" << endl;
            // Print graph logic here
            break;
        default:
            cout << "Invalid Option. Please try again." << endl;
        }
    } while (option != 0);
}
