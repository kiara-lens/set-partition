//
// Created by jorel on 1/13/19.
//

#include "sp_partition.h"

void _setpId( sp_partition self, int pId )
{
    self->_pId = pId;
}
int _getpId( sp_partition self )
{
    return self->_pId;
}

void _setpDescription( sp_partition self, char * pDescription )
{
    self->_pDescription = pDescription;
}
void * _getpDescription( sp_partition self )
{
    return self->_pDescription;
}

void _setpAttribute(sp_partition  self, void * pAttribute )
{
    self->_pAttribute = pAttribute;
}
void * _getpAttribute(sp_partition  self )
{
    return self->_pAttribute;
}

void _setChildrenSet(sp_partition self, int id)
{
    self->_childrenSet->add_back(self->_childrenSet, id);
}
handy_list _getChildrenSet( sp_partition self )
{
    return self->_childrenSet;
}

void _setPartitionSetId( sp_partition self, int id )
{
    self->_partitionSetId->add_back(self->_partitionSetId, id);
}

handy_list _getPartitionSetId( sp_partition self )
{
    return self->_partitionSetId;
}

void _setPartitionDesc(sp_partition self, char * desc)
{
    self->_partitionDesc->add_back(self->_partitionDesc, desc);
}

handy_list _getPartitionDesc(sp_partition self)
{
    return self->_partitionDesc;
}

sp_partition create_sp_partition( )
{
    sp_partition returnPartition = malloc( sizeof(*returnPartition) );

    returnPartition->predicate = NULL;


    returnPartition->_partitionSetId = handy_create_list();

    returnPartition->_partitionDesc = handy_create_list();

    returnPartition->_childrenSet = handy_create_list();

    returnPartition->_pAttribute = NULL;

    returnPartition->_pId = 0;
    returnPartition->_pDescription = NULL;

    returnPartition->setpId = _setpId;
    returnPartition->getpId = _getpId;

    returnPartition->setpDescription = _setpDescription;
    returnPartition->getpDescription = _getpDescription;

    returnPartition->setpAttribute = _setpAttribute;
    returnPartition->getpAttribute = _getpAttribute;

    returnPartition->setChildrenSet = _setChildrenSet;
    returnPartition->getChildrenSet = _getChildrenSet;

    returnPartition->setPartitionDesc = _setPartitionDesc;
    returnPartition->getPartitionDesc = _getPartitionDesc;

    returnPartition->setPartitionSetId = _setPartitionSetId;
    returnPartition->getPartitionSetId = _getPartitionSetId;

    return returnPartition;
}
