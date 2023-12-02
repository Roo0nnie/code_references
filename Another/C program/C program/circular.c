// Circular Queue implementation in C

#include <stdio.h>

#define Max 5

int array[Max];
int head = -1, tail = -1;

// Check if the queue is full
int Full() {
  if ((head == tail + 1) || (head == 0 && tail == Max - 1)) return 1;
  return 0;
}

// Check if the queue is empty
int Empty() {
  if (head == -1) return 1;
  return 0;
}

// Adding an element
void add(int element) {
  if (Full())
    printf("\n Queue is full!! \n");
  else {
    if (head == -1) head = 0;
    tail = (tail + 1) % Max;
    array[tail] = element;
    printf("\n Inserted -> %d", element);
  }
}

// Removing an element
int deQueue() {
  int element;
  if (Empty()) {
    printf("\n Queue is empty !! \n");
    return (-1);
  } else {
    element = array[head];
    if (head == tail) {
      head = -1;
      tail = -1;
    } 
    // Q has only one element, so we reset the 
    // queue after dequeing it. ?
    else {
      head = (head + 1) % Max;
    }
    printf("\n Deleted element -> %d \n", element);
    return (element);
  }
}

// Display the queue
void display() {
  int i;
  if (Empty())
    printf(" \n Empty Queue\n");
  else {
    printf("\n Head -> %d ", head);
    printf("\n Array -> ");
    for (i = head; i != tail; i = (i + 1) % Max) {
      printf("%d ", array[i]);
    }
    printf("%d ", array[i]);
    printf("\n Tail -> %d \n", tail);
  }
}

int main() {
  // Fails because front = -1
  deQueue();

  add(1);
  add(2);
  add(3);
  add(4);
  add(5);

  // Fails to enqueue because front == 0 && rear == SIZE - 1
  add(6);

  display();
  deQueue();

  display();

  add(7);
  display();

  // Fails to enqueue because front == rear + 1
  add(8);

  return 0;
}
