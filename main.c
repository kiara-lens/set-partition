#include <stdio.h>
#include "handy_list.h"
#include "sp_item.h"
#include "sp_partition.h"
#include "sp_set.h""

//function main begins program execution
int main()
{
    //create a handy list database
    //to store courses
    handy_list db = handy_create_list();
    sp_set cscCourses = create_sp_set(); //create a set


    sp_item csc205 = create_sp_item( 205 );                                   //item csc205 has id  205
    db->add_back( db, csc205 );                                       //add item to database
    csc205->setDescription( csc205, "Introduction to computing" );    //set item description to introduction to computing
    csc205->setBelongSetId( csc205, cscCourses->getsId(cscCourses) ); //add item to set (csc courses)

    sp_item csc207 = create_sp_item( 207 );                                   //item csc205 has id 201
    db->add_back( db, csc207 );                                       // add item to existing database
    csc207->setDescription( csc207, "Introduction to Algorithms" );   //set item description to Introduction to algorithms
    csc207->setBelongSetId( csc207, cscCourses->getsId(cscCourses) ); //add item to set (csccourses)

    sp_item csc208 = create_sp_item( 208 );                                   //item csc205 has id id 208
    db->add_back( db, csc208 );                                       // add item to existing database
    csc208->setDescription( csc208, "Programming in Python and C" );  //set item description to Programming in python and c
    csc208->setBelongSetId( csc208, cscCourses->getsId(cscCourses) ); //add item to set (csccourses)

    // get ids of element belonging to the set cscCourses
    cscCourses->setElemenntId( cscCourses, csc205->getId(csc205) );
    cscCourses->setElemenntId( cscCourses, csc205->getId(csc207) );
    cscCourses->setElemenntId( cscCourses, csc208->getId(csc208) );

    //create a partition
    sp_partition secCemester = create_sp_partition();


    sp_item iter;
    for( int i = 0; i < db->length(db); i++ )
    {
        iter =db->get_at( db, i );

        printf("\nid: %d", iter->getId(iter) );
        printf(" Dec: %s", (char *)iter->getDescription(iter) );

    }

    return 0;
}