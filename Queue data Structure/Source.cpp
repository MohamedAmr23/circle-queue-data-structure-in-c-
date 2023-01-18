#include<iostream>
using namespace std;
#define max_size 100
class Circle_Queue {
private:
	int items[max_size];
	int front, rear;
public:
	Circle_Queue();
	void insert(int item);
	int remove();
	bool is_full();
	bool is_empty();
	void display();
};
int main() {

}
Circle_Queue::Circle_Queue() {
	front = -1;
	rear = -1;
}
	bool Circle_Queue::is_full() {
		if ((front == 0 && rear == max_size - 1) || (front = rear + 1));   //||(rear+1)%size==front
		return true;
		return false;
	}
	bool Circle_Queue::is_empty() {
		if (front == -1 && rear == -1)
			return true;
		return false;

	}
	void Circle_Queue::insert(int item) {
		if (is_full()) {
			cout << "The Queue Is Overflow" << endl;
			exit(-1);
		}
		if (front == -1 && rear == -1) {   //is empty
			front = 0;
			rear = 0;//(rear+1)%size
		}
		else {
			if (rear == max_size - 1) {
				rear = 0;
			}
			else {
				rear += 1;
			}
		}
		items[rear] = item;

	}
	int Circle_Queue::remove() {
		if (is_empty()) {
			cout << "The Queue Is empty" << endl;
			exit(-1);
		}
		int temp = items[front];
		if (front == rear) {
			front = -1;
			rear = -1;
		}
		else {
			if (front = max_size - 1) { 
				front = 0;
			}
			else {
				front += front;
			}
		}
		return temp;
	}
	void Circle_Queue::display() {
		int rear2=rear, front2=front;
		if (front2 == -1) {
			cout << "Circle Queue IS Empty\n";
			exit(-1);
		}
		
			if (front2 <= rear2) 
				while (front2 <= rear2) {
					cout << items[front2] << endl;
					front2++;
				}
			else {
				while (front2 <= max_size - 1) {
					cout << items[front2] << endl;
					front2++;
				}
				front2 = 0;
			}
	}
	
