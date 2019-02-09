#include <stdio.h>
#include "handy_list.h"
#include "sp_item.h"
#include "sp_partition.h"
#include "sp_set.h"

//relations under which a given set may be partioned

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

void * yrOne(int id)
{
    if( (id >= 200) &&  (id < 300)) //if id is any three digit  number that starts with 2 then
        return true;                //return true i.e based on the value of the id the course is a year one course else
    return false;                   //return false i.e it is not a year one course
}

void * yrTwo(int id)
{
    if ( (id>=300) && (id < 400))   //if id is any three digit  number that starts with 3 then
        return true;                //return true i.e based on the value of the id the course is a year two course else
    return false;                   //return false i.e it is not a year two course
}

void * yrThree(int id)
{
    if ((id>=400) && (id < 500))     //if id is any three digit  number that starts with 4 then
        return true;                 //return true i.e based on the value of the id the course is a year three course else
    return false;                    //return false i.e it is not a year three course
}

//function main begins program execution
int main()
{
    //create a handy list database
    //to store courses
    handy_list db = handy_create_list();
    sp_set cscCourses = create_sp_set(); //create a set

   //creating csc courses
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

    sp_item  csc404 = create_sp_item( 404 );
    db->add_back( db, csc404);
    csc404->setDescription( csc404, "Software Engineering");
    csc404->setBelongSetId( csc404, cscCourses->getsId(cscCourses) );

    sp_item csc402 = create_sp_item ( 402);
    db->add_front( db, csc402);
    csc402->setDescription( csc402, "Languages and Compilers");
    csc402->setBelongSetId( csc404, cscCourses->getsId(cscCourses) );

    sp_item csc406 = create_sp_item( 406 );
    db->add_front( db, csc406);
    csc406->setDescription( csc406, "Computer and Networking");
    csc406->setBelongSetId( csc406, cscCourses->getsId(cscCourses) );

    sp_item  csc308 = create_sp_item( 308 );
    db->add_back( db, csc308);
    csc308->setDescription( csc308, "Java Programming");
    csc308->setBelongSetId( csc308, cscCourses->getsId(cscCourses) );

    sp_item csc310 = create_sp_item( 310);
    db->add_back( db, csc310);
    csc310->setDescription( csc310, "Database Design");
    csc310->setBelongSetId( csc310, cscCourses->getsId(cscCourses) );

    sp_item  csc306 = create_sp_item( 306 );
    db->add_back( db, csc306);
    csc306->setDescription( csc306, "Human-Computer Interaction and User Interface Design");
    csc306->setBelongSetId( csc306, cscCourses->getsId(cscCourses) );

    sp_item  csc314 = create_sp_item( 314 );
    db->add_back( db, csc314);
    csc314->setDescription( csc314, "Operating Systems");
    csc314->setBelongSetId( csc314, cscCourses->getsId(cscCourses) );

    sp_item  csc316 = create_sp_item( 316 );
    db->add_back( db, csc316);
    csc316->setDescription( csc316, "Functional Programming");
    csc316->setBelongSetId( csc316, cscCourses->getsId(cscCourses) );

    sp_item  csc313 = create_sp_item( 313 );
    db->add_back( db, csc313);
    csc313->setDescription( csc313, "Differential,Difference and Integral Calculus");
    csc313->setBelongSetId( csc313, cscCourses->getsId(cscCourses) );

    sp_item  csc305 = create_sp_item( 305 );
    db->add_back( db, csc305);
    csc305->setDescription( csc305, "Object Oriented Programming C++");
    csc305->setBelongSetId( csc305, cscCourses->getsId(cscCourses) );

    sp_item  csc311 = create_sp_item( 311 );
    db->add_back( db, csc311);
    csc311->setDescription( csc311, "Introduction to computer Networks");
    csc311->setBelongSetId( csc311, cscCourses->getsId(cscCourses) );

    sp_item  csc303 = create_sp_item( 303 );
    db->add_back( db, csc303);
    csc303->setDescription( csc303, "Computer Organization and Architecture");
    csc303->setBelongSetId( csc303, cscCourses->getsId(cscCourses) );

    sp_item  csc301 = create_sp_item( 301 );
    db->add_back( db, csc301);
    csc301->setDescription( csc301, "Data structures and algorithms");
    csc301->setBelongSetId( csc301, cscCourses->getsId(cscCourses) );



    // get ids of element belonging to the set cscCourses
    cscCourses->setElemenntId( cscCourses, csc205->getId(csc205) );
    cscCourses->setElemenntId( cscCourses, csc207->getId(csc207) );
    cscCourses->setElemenntId( cscCourses, csc208->getId(csc208) );
    cscCourses->setElemenntId( cscCourses, csc301->getId(csc301) );
    cscCourses->setElemenntId( cscCourses, csc303->getId(csc303) );
    cscCourses->setElemenntId( cscCourses, csc305->getId(csc305) );
    cscCourses->setElemenntId( cscCourses, csc311->getId(csc311) );
    cscCourses->setElemenntId( cscCourses, csc306->getId(csc306) );
    cscCourses->setElemenntId( cscCourses, csc308->getId(csc308) );
    cscCourses->setElemenntId( cscCourses, csc310->getId(csc310) );
    cscCourses->setElemenntId( cscCourses, csc313->getId(csc313) );
    cscCourses->setElemenntId( cscCourses, csc314->getId(csc314) );
    cscCourses->setElemenntId( cscCourses, csc316->getId(csc316) );
    cscCourses->setElemenntId( cscCourses, csc402->getId(csc402) );
    cscCourses->setElemenntId( cscCourses, csc404->getId(csc404) );
    cscCourses->setElemenntId( cscCourses, csc406->getId(csc406) );



    //create a partition
    sp_partition secSemesterPartition = create_sp_partition( cscCourses, even ); //pass the set and predicate(function) as parameters
    sp_partition firSemesterPartition = create_sp_partition( cscCourses, odd );
    sp_partition yrOnePartition = create_sp_partition( cscCourses, yrOne);
    sp_partition yrTwoPartition = create_sp_partition( cscCourses, yrTwo);
    sp_partition yrThreePartition = create_sp_partition( cscCourses, yrThree);

    //
    handy_list  ids_in_firsPart = firSemesterPartition->getChildrenSet( firSemesterPartition );
    handy_list  ids_in_secPart  = secSemesterPartition->getChildrenSet( secSemesterPartition);
    handy_list  ids_in_yrOnePart = yrOnePartition->getChildrenSet( yrOnePartition);
    handy_list  ids_in_yrTwoPart = yrOnePartition->getChildrenSet( yrTwoPartition);
    handy_list  ids_in_yrThreePart = yrOnePartition->getChildrenSet( yrThreePartition);


    printf("Second Semester partition: ");
    for( int i = 0; i < ids_in_secPart->length(ids_in_secPart); i++ )
    {
        printf("\nid: %d", ids_in_secPart->get_at(ids_in_secPart, i) );
    }

    puts(" ");
    puts(" ");
    printf("First Semester Parition");
    for( int i = 0; i < ids_in_firsPart->length(ids_in_firsPart); i++ )
    {
        printf("\nid: %d", ids_in_firsPart->get_at(ids_in_firsPart, i) );
    }

    puts(" ");
    puts(" ");
    printf("level 200 Courses (partition)");

    /*loops through the handy_list of ids in year one partition (ids_in_yrOnePart) number of times
     * and prints out the ids*/
    for( int i = 0; i < ids_in_yrOnePart->length(ids_in_yrOnePart); i++ )
    {
        printf("\nid: %d", ids_in_yrOnePart->get_at(ids_in_yrOnePart, i) );

    }

    puts(" ");
    puts(" ");
    printf("level 300 Courses(partition)");
    /*loops through the handy_list of ids in year two partition (ids_in_yrTwoPart->lenght) number of times
    * and prints out the ids*/
    for( int i = 0; i < ids_in_yrTwoPart->length(ids_in_yrTwoPart); i++ )
    {
        printf("\nid: %d", ids_in_yrTwoPart->get_at(ids_in_yrTwoPart, i) );
    }

    puts(" ");
    puts(" ");
    printf("level 400 Courses (partition)");
    /*loops through the handy_list of ids in year three partition (ids_in_yrThreePart->length) number of times
    * and prints out the ids*/
    for( int i = 0; i < ids_in_yrThreePart->length(ids_in_yrThreePart); i++ )
    {
        printf("\nid: %d", ids_in_yrThreePart->get_at(ids_in_yrThreePart, i) );
    }


    printf("\n");
    puts(" ");
    puts(" ");

    printf("items in database");

    sp_item iter;

    for( int i = 0; i < db->length(db); i++ ) //loops through database db->lenght number of times
    {                                         //and prints out all elements in the database
        iter =db->get_at( db, i );

        printf("\nid: %d", iter->getId(iter) );
        printf(" Dec: %s", (char *)iter->getDescription(iter) );

    }

    return 0;
}