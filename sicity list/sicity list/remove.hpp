//
//  remove.hpp
//  sicity list
//
//  Created by  on 2017/10/11.
//  Copyright © 2017年 hansen. All rights reserved.
//

#ifndef remove_hpp
#define remove_hpp


struct ListNode
{
    int data;
    ListNode *next;
};

class List
{
public:
    List()
    {
        head = new ListNode;
        head->next = nullptr;
    }
    
    ~List()
    {
        ListNode* curNode;
        while( head->next )
        {
            curNode = head->next;
            head->next = curNode->next;
            delete curNode;
        }
        delete head;
        
    }
    void print();
    
    void insert(int toadd, int pos);
    //删除链表的第pos(pos>0)个结点
    //链表实际结点从1开始计数。
    //调用时需保证pos小等于链表实际结点数
    
    void remove(int pos);
private:
    // Data field
    ListNode *head; //head指向虚拟头结点，head-next指向第一个实际结点
};
#endif /* remove_hpp */
