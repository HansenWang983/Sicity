//
//  remove.cpp
//  sicity list
//
//  Created by 陈英 on 2017/10/11.
//  Copyright © 2017年 hansen. All rights reserved.
//

#include "remove.hpp"

#include <iostream>
using namespace std;
//
//  list_remove.cpp
//  sicity
//
//  Created by on 2017/10/11.
//
//


void List::insert(int toadd, int pos)
{
    ListNode* tem=head;
    if(pos<=0)
        return;
    while(--pos&&tem->next)
    {
        tem=tem->next;
    }
    ListNode* node=new ListNode;
    node->data=toadd;
    if(tem->next)
        node->next=tem->next;
    
    else
        node->next=nullptr;
    tem->next=node;
}

void List::remove(int pos)
{
    if(pos<=0)
        return;
    ListNode* tem=head;
    if(pos==1&&tem->next)
    {
        head=head->next;
        delete tem;
        return;
    }
    while(--pos&&tem->next){
        tem=tem->next;
    }
    ListNode* tem2=tem->next->next;
    delete tem->next;
    tem->next=tem2;
    return;
    
}

void List::print()
{
    while(head->next)
    {
        head=head->next;
        cout<<head->data<<" ";
    }
    cout<<endl;
}

