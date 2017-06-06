
#include <iostream>
using namespace std;

class List
{
private:
	int *list;
	int size;
public:
	List()
	{
		list = nullptr;
		size = 0;
	}
	~List()
	{
		delete list;
		size = 0;
	}

	List(const int& value)
	{
		list = new int[value]();
		size = value;
	}

	void add(int & pos, int & value)
	{
		if (pos >= size)
		{
			int * ptr = new int[pos + 1]();
			for (int i = 0; i < size; ++i)
				ptr[i] = list[i];
			delete[] list;
			list = ptr;
			size = pos + 1;
		}
		list[pos] = value;
	}
	void del(int & pos)
	{
		if (pos < size)
		{
			int * ptr = new int[size - 1]();
			for (int i = 0; i < pos; ++i)
				ptr[i] = list[i];
			for (int i = pos; i < size - 1; ++i)
				ptr[i] = list[i + 1];
			delete list;
			list = ptr;
			size--;
		}
	}

	const int & get(int & pos)
	{
		if (pos < size)
			return list[pos];
	}
	void print()
	{
		for (int i = 0; i < size; ++i)
			cout << list[i] << " ";
		cout << endl;
	}
};

int main()
{
	List list;
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
			cout << "Enter position and value ";
			cin >> position >> value;
			list.add(position, value);
			break;
		}
		case 2:
		{
			cout << "Enter position ";
			cin >> position;
			list.del(position);
			break;
		}
		case 3:
		{
			cout << "Enter position ";
			cin >> position;
			list.get(position);
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
