
#include "handy_list.h"

#ifndef SETPARTITION_SP_SET_H
#define SETPARTITION_SP_SET_H

typedef struct _sp_set * sp_set;

struct _sp_set
{
    int _sId; //set id
    void (*setsId)   ( sp_set self, int sId );
    int (*getsId)    ( sp_set self );

    char * _sDescription; //set description
    void (*setsDescription)  ( sp_set self, char * sDescription );
    void * (*getsDescription)  ( sp_set self );

    void * _sAttribute;  //set attribute may be of any data type
    void (*setsAttribute)   ( sp_set self, void * sAttribute );
    void * (*getsAttribute)   ( sp_set self);

    handy_list _elements;   //list of ids of elements(item) belongiing to the set
    void (*setElemenntId)( sp_set self, int id );
    handy_list (*getElementId)( sp_set self );

    handy_list _partition; //list of ids of partitions of the set
    void (*setPartitionId) ( sp_set self, int id);
    handy_list (*getPartitionId) ( sp_set self);

    handy_list _CommonAttributes; //list of attributes common to elements of the sets
    void (*setCommonAttributes) ( sp_set self, char * attribute);
    handy_list (*getCommonAttributes) ( sp_set self);



};

sp_set create_sp_set();

#endif //SETPARTITION_SP_SET_H
