
#include <iostream>
using namespace std;

struct 	str
{
	str *next;
	int  val;
	str(const int & value)
	{
		val = value;
		next = nullptr;
	}
};
class Stack
{
private:
	str * top;
	public:
		Stack()
		{
			top = nullptr;
		}
		~Stack()
		{
			delete[] top;
		}
		void add(const int & value)
		{
			str * new_ = new str(value);
			new_->next = top;
			top = new_;
		}
		void del()
		{
			if (top)
			{
				str * f = top->next;
				delete[] top;
				top = f;
			}
		}
		void get()
		{
			cout << top->val;
		}
		void print(str * link)
		{
			if (link->val)
				cout << link->val << endl;
			else cout << "The stack is empty\n";
		}
		void print()
		{
			str * link = top;
			while (link)
			{
				cout << link->val << " ";
				link = link->next;
			}
			cout << endl;
		}
	};

int main()
{
	Stack list;
	int a = 0;
	int position = 0, value = 0, number = 0;

	cout << "LIST\n\n";
	 do
	 {
		cout << "\nChoose command:\n1 - add\n2 - del\n3 - get\n4 - print\n0 - exit\n\n";
		cin >> a;
		switch (a)
		{
		case 1:
		{
			cout << "Enter value ";
			cin >> value;
			list.add( value);
			break;
		}
		case 2:
		{
			list.del();
			break;
		}
		case 3:
		{
			list.get();
			break;
		}
		case 4:
		{
			list.print();
			break;
		}
		default: break;
		}
	 } while (a != 0);
	system("pause");
	return 0;
}
