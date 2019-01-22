
#include "handy_list.h"
#include "sp_item.h"

#ifndef SETPARTITION_SP_PARTITION_H
#define SETPARTITION_SP_PARTITION_H


typedef struct _sp_partition * sp_partition;

struct _sp_partition
{
    int _pId; //partition id
    void (*setpId)   ( sp_partition self, int pId );
    int (*getpId)    ( sp_partition self );

    char * _pDescription; //spartition description description
    void (*setpDescription)  (sp_partition self, char * pDescription );
    void * (*getpDescription)  ( sp_partition self );

    void * _pAttribute;  //spartition attribute may be of any data type
    void (*setpAttribute)   ( sp_partition self, void * pAttribute );
    void * (*getpAttribute)   (sp_partition self);


    handy_list _partitionSetId; //lists of ids of sets that this relation spartitions
    void (*setPartitionSetId) ( sp_partition selfset, int id );
    handy_list (*getPartitionSetId)( sp_partition selfset );

    handy_list _partitionDesc; //list of attributes that describes the partitions
    void (*setPartitionDesc) (sp_partition prt1, char * desc);
    handy_list (*getPartitionDesc) (sp_partition prt1);

    handy_list _childrenSet; //list of ids of sets that are subsets of the partition
    void (*setChildrenSet) (sp_partition subset, int id);
    handy_list (*getChildrenSet) (sp_partition subset);


    void (*init)( sp_partition self );
    void (*predicate)(sp_partition self, sp_item item );

};

sp_partition create_sp_partition();


#endif //SETPARTITION_SP_PARTITION_H
