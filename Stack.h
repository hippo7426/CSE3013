#include "LinkedList.h"


//1. ���ø� Ŭ������ Ȯ���ؾ���
//2. Stack�������� Delete �Լ� �������ؾ���
//����: first, current_size�� class�� ��� �����̱� ������ this �����͸� ����Ͽ� �����;���

//LinkedList class�� ��ӹ���
template <typename T>
class Stack : public LinkedList<T> {
public:
	bool Delete(int& element) {
		//first�� 0�̸� false��ȯ
		if (this -> first == 0)
			return false;

		// LinkedList�� �޸� Stack�� current�� ����Ű�� ���� ����
		Node<T>* current = this -> first;
		
		this -> first = current -> link;
		element = current -> data;
		delete current;
		this -> current_size--;

		return true;
	}
};
