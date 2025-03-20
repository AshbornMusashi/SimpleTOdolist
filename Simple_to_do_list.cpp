#include <iostream>
#include <vector>
using namespace std;

int main(){
	int choice;
	string input2;
	char proceed;
	vector<string>tasks = {};
	do{

	//displaying options
	cout<<"To-do-List"<<endl;
	cout<<"1.Add Task"<<endl;
	cout<<"2.Show Tasks"<<endl;
	cout<<"3.Mark Task as done"<<endl;
    cout<<"4.Exit"<<endl;

	//getting user input
    cout<<"Enter number: "<<endl;
    cin>>choice;
	cin.ignore();

	//displaying output depending on user option
	switch(choice){
	case 1:                
		cout << "Enter new task: ";
		getline(cin, input2);
		tasks.push_back(input2);
		cout << "Continue?[y/n]--";
		cin >> proceed;
		break;
	case 2:
	   for(string x: tasks){
		cout << x;
		cout << endl;
		}
		cout << "Continue?[y/n]--";
		cin >> proceed;
		break;
		case 3:
		for (int x = 0; x < tasks.size(); x++) {
			cout << x + 1 << ". " << tasks[x] << endl;
		}
		int id;
		cout << "Enter task number: ";
		cin >> id;
	
		if (id > 0 && id <= tasks.size()) {  
			tasks.erase(tasks.begin() + (id - 1));
			cout << "Task removed.";
		} else {
			cout << "Invalid task number.";
		}
	
		cout << "Continue?[y/n]--";
		cin >> proceed;
     	break;
		
		case 4:
		  cout << "Thank you for trying it out!";
		  return 1;
	    
		  default:
		  cout << "Invalid input";
        }
		system("cls");
    }while(proceed == 'y');

	return 0;
}