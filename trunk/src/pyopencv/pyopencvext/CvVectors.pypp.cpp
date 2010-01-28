// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "boost/python/object.hpp"
#include "CvVectors.pypp.hpp"

namespace bp = boost::python;

struct CvVectors_wrapper : CvVectors, bp::wrapper< CvVectors > {

    CvVectors_wrapper(CvVectors const & arg )
    : CvVectors( arg )
      , bp::wrapper< CvVectors >(){
        // copy constructor
        
    }

    CvVectors_wrapper()
    : CvVectors()
      , bp::wrapper< CvVectors >(){
        // null constructor
        
    }

    static bp::object get_next( ::CvVectors const & inst ){        
        return inst.next? bp::object(inst.next): bp::object();
    }

};

void register_CvVectors_class(){

    bp::class_< CvVectors_wrapper >( "CvVectors" )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvVectors >() )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvVectors >() )    
        .def_readwrite( "count", &CvVectors::count )    
        .def_readwrite( "dims", &CvVectors::dims )    
        .def_readwrite( "type", &CvVectors::type )    
        .add_property( "next", bp::make_function(&::CvVectors_wrapper::get_next) );

}