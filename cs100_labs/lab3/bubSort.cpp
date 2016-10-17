#include "bubSort.h"



void BubbleSort::sort(Container* container)
{
   vector<Base*> temp;
   int counter = 0;
   while(counter < container->size())
   {
      Base* a = container->at(counter);
      temp.push_back(a);
      counter++;
   }
   for(unsigned i = 0; i < temp.size(); i++)
   {
      for(unsigned j = 0; j < temp.size(); j++)
      {
         if( j != temp.size() - 1)
         {
            if(temp.at(j)->evaluate() > temp.at(j + 1)->evaluate())
            {
               Base* a = temp.at(j);
               temp.at(j) = temp.at(j + 1);
               temp.at(j + 1) = a;
               
               container->swap(static_cast<int>(j), static_cast<int>((j+1)));
            }
         }
      }
   }
}
