//
// Created by jorel on 1/11/19.
//

#include "sp_set.h"

void _setsId( sp_set self, int sId )
{
    self->_sId = sId;
}
int _getsId( sp_set self )
{
    return self->_sId;
}

void _setsDescription( sp_set  self, char * sDescription )
{
    self->_sDescription = sDescription;
}
void * _getsDescription( sp_set self )
{
    return self->_sDescription;
}

void _setsAttribute( sp_set self, void * sAttribute )
{
    self->_sAttribute = sAttribute;
}
void * _getsAttribute( sp_set self )
{
    return self->_sAttribute;
}

void _setElemenntId ( sp_set self, int id )
{
    self->_elements->add_back(self->_elements, id);

}
handy_list _getElementId(sp_set self )
{
    return self->_elements;
}

void _setPartitionId(sp_set self, int id)
{
    self->_elements->add_back(self->_elements, id);
}

handy_list _getPartitionId(sp_set self)
{
    return self->_elements;
}

void _setCommonAttributes(sp_set self, char * attribute)
{
    self->_elements->add_back(self->_elements, attribute);
}
handy_list _getCommonAttributes(sp_set self)
{
    return self->_elements;
}


sp_set create_sp_set()
{
    sp_set returnSet = malloc( sizeof(*returnSet) );

    returnSet->_elements = handy_create_list();

    returnSet->_CommonAttributes = handy_create_list();

    returnSet->_partition = handy_create_list();

    returnSet->_sAttribute = NULL;

    returnSet->_sId = 0;
    returnSet->_sDescription = NULL;

    returnSet->setsId = _setsId;
    returnSet->getsId = _getsId;

    returnSet->setsDescription = _setsDescription;
    returnSet->getsDescription = _getsDescription;

    returnSet->setsAttribute = _setsAttribute;
    returnSet->getsAttribute = _getsAttribute;

    returnSet->setPartitionId = _setPartitionId;
    returnSet->getPartitionId = _getPartitionId;

    returnSet->setCommonAttributes = _setCommonAttributes;
    returnSet-> getCommonAttributes =  _getCommonAttributes;

    returnSet->setElemenntId =_setElemenntId;
    returnSet->getElementId = _getElementId;

    return  returnSet;
}
