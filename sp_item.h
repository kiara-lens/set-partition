
#include "handy_list.h"

#ifndef SETPARTITION_SP_ITEM_H
#define SETPARTITION_SP_ITEM_H

typedef struct _sp_item * sp_item;

struct _sp_item
{
    int _id;  //item id
    void (*setId)   ( sp_item self, int id ); //function prototype to  make modification for Id possible
    int (*getId)    ( sp_item self ); //function prototype for get id

    char * _description;  // item description
    void (*setDescription)  ( sp_item self, char * description );
    void * (*getDescription) (sp_item self);

    void * _attribute; // item attribute may be of any data type
    void (*setAttribute)( sp_item self, void * attribute );
    void * (*getAttribute)( sp_item self );


    handy_list _belongs; //list of ids of set to which item belongs.
    void (*setBelongSetId)( sp_item self, int id );
    handy_list (*getBelongSetId)( sp_item self );


    // void (*deleteItem) ( item self );
};

//function creatItem uses id as parameter
//thus an will be manipulated through it id
sp_item create_sp_item( int id );
#endif //SETPARTITION_SP_ITEM_H
