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
class Queue
{
private:
	str * first;
	str * last;
public:
	Queue()
	{
		first = nullptr;
		last = nullptr;
	}
	~Queue()
	{
		delete[] first;
	}
	void add(const int & value)
	{
		str * new_ = new str(value);
		if (first == nullptr)
		{
			first = new_;
			first->next = last;
		}
		else if (first->next == nullptr)
		{
			last = new_;
			first->next = last;
		}
		else
		{
			last->next = new_;
			last = new_;
		}
	}
	void del()
	{
		if (first)
		{
			str * f = first->next;
			delete[] first;
			first = f;
		}
	}
	void get()
	{
		cout << first->val;
	}
	void print(str * link)
	{
		if (link->val)
			cout << link->val << endl;
		else cout << "The queue is link->value";
	}
	void print()
	{
		str * link = first;
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
	Queue list;
	int a = 0;
	int position = 0, value = 0, number = 0;
	cout << "Enter number of commands ";
	cin >> number;
	for (int i = 0; i < number; ++i)
	{
		cout << "\nChoose command:\n1 - add\n2 - del\n3 - get\n4 - print\n0 - exit\n\n";
		cin >> a;
		switch (a)
		{
		case 1:
		{
			cout << "Enter value ";
			cin >> value;
			list.add(value);
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
	};
	system("pause");
	return 0;
}
