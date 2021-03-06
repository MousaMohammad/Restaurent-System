#include "CancellationEvent.h"


CancellationEvent::CancellationEvent(int TS, int id) : Event(TS, id)
{
	ID = id;
	TimeStep = TS;
}

void CancellationEvent::Execute(Restaurant* pRest)  
{
	if (OrdType != TYPE_NRM)
		return;

	Normal_LinkedLlist = pRest->GetNormalOrdersListWaiting();
	 Normal_LinkedLlist.DeleteNode(Normal_LinkedLlist.Get_Order_ByID(ID));
		 
}
