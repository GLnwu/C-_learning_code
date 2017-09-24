/*************************************************************************
    > File Name: queuetp.h
    > Copyright @2017 <gaoli>
    > Mail: bingtang1021@gmail.com 
    > Created Time: Wed 20 Sep 2017 11:13:55 PM CST
 ************************************************************************/
// 模板类实现队列容器
#ifndef CHAPTER14_PROBLEM4_QUEUETP_H_
#define CHAPTER14_PROBLEM4_QUEUETP_H_
template <typename Item>
class QueueTp {
 private:
  class Node {
   public:
     Item  item;
     Node* next;
     explicit Node(const Item & it)
       : item(it), next(nullptr) {}
  };
  enum {Q_SIZE = 10};  // 队列默认大小

  int items;  // 当前队列大小
  int qsize;  // 队列总长度
  Node* front;  // 队列为无头结点的实现版本
  Node* rear;
  QueueTp(const QueueTp &) : qsize(0) {}  // 防止浅拷贝
  QueueTp& operator=(const QueueTp &) {return *this;}  // 防止浅拷贝

 public:
  explicit QueueTp(const int size = Q_SIZE)
    : items(0), qsize(size), front(nullptr), rear(nullptr) {}
  bool isfull() {return items == qsize;}
  bool isempty() {return 0 == items;}
  bool enqueue(const Item & it);
  bool dequeue(Item & it);
  ~QueueTp();
};

template <typename Item>
bool QueueTp<Item>::enqueue(const Item & it) {
  if (isfull()) {
    return false;
  }

  Node* add = new Node(it);
  items++;
  if (1 == items) {   // 第一个节点特殊处理
    front = add;
  } else {
    rear->next = add;
  }
  rear = add;
  return true;
}

template <typename Item>
bool QueueTp<Item>::dequeue(Item & it) {
  if (isempty()) {
    return false;
  }

  Node* del = front;
  items--;
  if (0 == items) {  // 最后一个节点特殊处理
    front = nullptr;
    rear = nullptr;
  } else {
    front = front->next;
  }
  it = del->item;
  delete del;
  return true;
}

template <typename Item>
QueueTp<Item>::~QueueTp() {
  Node* del = front;
  while (del) {
    front = front->next;
    delete del;
    del = front;
  }
}
#endif  // CHAPTER14_PROBLEM4_QUEUETP_H_
