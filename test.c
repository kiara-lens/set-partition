
#include <stdio.h>
#include "handy_list.h"
#include "sp_item.h"
#include "sp_partition.h"
#include "sp_set.h"

//relations under which a given set may be partioned
sp_item anItem;
int obj;
void * even( int id )
{
    if( (id % 2) == 0) //if id is an even number then
        return true;    //return true else
    return false;       //retun false
}

void * odd( int id )
{
    if( (id % 2) != 0 ) //if id is an odd number then
        return true;    //return true else
    return false;       //return false
}




int menu()
{
    int choice;
    printf("\n1. Create a set");
    printf("\n2. Create a partition");
   // printf("\n3. Move elements of parititions");
   // printf("\n4. Display information");
    printf("\n3. Exit");

    puts(" ");
    printf("\n Enter your choice: ");
    scanf("%d", &choice);
    return choice;

}
//function main begins program execution

int main()
{
    anItem; // = (sp_item)malloc(sizeof(sp_item));
    handy_list db = handy_create_list();
    sp_set integers = create_sp_set();
    sp_partition  oddInt = create_sp_partition(integers, odd);
    sp_partition  evenInt = create_sp_partition(integers, even);
    handy_list  oddNumbers = oddInt->getChildrenSet( oddInt);
    handy_list  evenNumbers = evenInt->getChildrenSet(evenInt);



    while(1)
    {
        switch(menu())
        {
            case 1:
                printf(" Enter an int: ");
                scanf("%d",&obj);
                anItem = create_sp_item(obj);
                db->add_back(db,anItem);
                integers->setElemenntId(integers, anItem->getId(anItem));
                break;

            case 2:

                for(int i = 0; i < db->length(db); i++)
                {
                    sp_item object = db->get_at(db,i);
                    printf("%d, " ,object->getId(object));
                }



                printf("even Number partition: ");
                for( int i = 0; i < oddNumbers->length(oddNumbers); i++ )
                {
                    printf(" %d", oddNumbers->get_at(oddNumbers, i) );
                }


                puts(" ");
                puts(" ");
                printf("odd number  Partition:");
                for( int i = 0; i < evenNumbers->length(evenNumbers); i++ )
                {
                    printf("\nid: %d", evenNumbers->get_at(evenNumbers, i) );
                }
                break;
            case 3:
                exit(0);


        }
    }
}