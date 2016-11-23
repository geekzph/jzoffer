#include <iostream>
#include <vector>

struct name
{
	int m_key;
	ListNode* m_pNext;
};

void PrintListReserve(ListNode* pHead)
{
	std::stack<ListNode*> = nodes;
	ListNode* pNode = pHead;
	while(pNode != NULL)
	{
		nodes.push(pNode);
		pNode = pNode -> m_pNext;
	}

	while(!nodes.empty())
	{
		pNode = nodes.top();
		std::cout << pNode -> m_key << endl;
		nodes.pop();
	}

}