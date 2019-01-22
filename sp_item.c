//
// Created by jorel on 1/11/19.
//

#include "sp_item.h"

//function definitions for setters and getters of the struct sp_item
void _setId( sp_item self, int id )
{
    self->_id = id;
}
int _getId( sp_item self )
{
    return self->_id;
}

void _setDescription( sp_item self, char * description )
{
    self->_description = description;
}
char * _getDescription( sp_item self )
{
    return self->_description;
}

void _setAttribute( sp_item self, void * attribute )
{
    self->_attribute = attribute;
}
void * _getAttribute( sp_item self )
{
    return self->_attribute;
}

void _setBelongSetId( sp_item self, int id )
{
    self->_belongs->add_back( self->_belongs, id );
}
handy_list _getBelongSetId( sp_item self )
{
    return self->_belongs;
}
//end of function definitions

sp_item create_sp_item( int id )
{
    //allocating memory for returnitem (sp_item intitialization
    sp_item returnItem = malloc( sizeof(*returnItem) );

    returnItem->_id = id;

    //initializing each field of the returnItem
    returnItem->_belongs = handy_create_list();

    returnItem->_attribute = NULL;
    returnItem->_description = NULL;

    returnItem->setId = _setId;
    returnItem->getId = _getId;

    returnItem->setDescription = _setDescription;
    returnItem->getDescription = _getDescription;

    returnItem->setAttribute = _setAttribute;
    returnItem->getAttribute = _getAttribute;

    returnItem->setBelongSetId = _setBelongSetId;
    returnItem->getBelongSetId = _getBelongSetId;

    return  returnItem;
}
