
#include <iostream>

using namespace std;


template<typename T>
struct str
{
	str<T> * next;
	T value;
	str(const T & val)
	{
		value = val;
		next = nullptr;
	}
};
template<typename T>
class Queue
{
private:
	str<T> * first;
	str<T> * last;
public:
	Queue()
	{
		first = nullptr;
		last = nullptr;
	}
	~Queue()
	{
		delete[] first;
		delete[] last;
	}
	void add(const T & value)
	{
		str<T> * new_ = new str<T>(value);
		if (first == nullptr)
		{
			first = new_;
			first->next = last;
		}
		else if (first->next == nullptr)
		{
			if (first->value < new_->value)
			{
				last = new_;
				first->next = last;
			}
			else
			{
				last = first;
				first = new_;
				first->next = last;
			}
		}
		else
		{
			str<T> * cur = first;
			if (cur->value < new_->value)
			{
				while ((cur != last) && (cur->next->value < new_->value))
					cur = cur->next;
				if (cur == last)
				{
					cur->next = new_;
					last = new_;
				}
				else
				{
					str<T> * f = cur->next;
					cur->next = new_;
					cur->next->next = f;
				}
			}
			else
			{
				cur = new_;
				cur->next = first;
				first = cur;

			}
		}
	}
	void del()
	{
		if (first)
		{
			str<T> * f = first->next;
			delete[] first;
			first = f;
		}
	}
	void get()
	{
		if (first->value)
			cout << first->value << endl;
		else cout << "The queue is link->value";
	}


	void print()
	{
		str<T> * link = first;
		while (link)
		{
			cout << link->value << " ";
			link = link->next;
		}
		cout << endl;
	}
};

int main()
{
	Queue<int> queue;
	int number, a, value;
	cout << "QUEUE\n\n";
	cout << "Enter number of commands ";
	cin >> number;
	for (int i = 0; i < number; ++i)
	{
		cout << "\nChoose command:\n1 - add\n2 - del\n3 - get\n4 - print\n\n";
		cin >> a;
		switch (a)
		{
		case 1:
		{
			cout << "Enter value ";
			cin >> value;
			queue.add(value);
			break;
		}
		case 2:
		{
			queue.del();
			break;
		}
		case 3:
		{
			queue.get();
			break;
		}
		case 4:
		{
			queue.print();
			break;
		}
		default: break;
		}
	}
	system("pause");
	return 0;
}
