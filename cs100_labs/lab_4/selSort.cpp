#include "selSort.h"
//include "container.h"



void SelectionSort::sort(Container* container)
	{
		vector<Base*> temp;
		int counter = 0;
		while(counter < container->size())
		{
			Base* a = container->at(counter);
			temp.push_back(a);
			counter++;
		}
		int outer = 0;
		int inner = 0;
		int first = 0;
		//Base* tempi = 0;
		int length = temp.size();
		for(outer = length - 1; outer > 0; outer--)
		{
			first = 0;
			for(inner = 1; inner <= outer; inner++)
			{
				if(temp.at(inner)->evaluate() > temp.at(first)->evaluate())
				{
					first = inner;
				}
			}
			// tempi = temp.at(first);
			// temp.at(first) = temp.at(outer);
			// temp.at(outer) = tempi;
			container->swap(first, outer);
		}
		


		
	}