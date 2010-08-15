// This file has been generated by Py++.

#include "boost/python.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "opencv_headers.hpp"
#include "vector_float64.pypp.hpp"

namespace bp = boost::python;

static inline void resize(::std::vector< double > &inst, size_t num) { inst.resize(num); }

void register_vector_float64_class(){

    { //::std::vector< double >
        typedef bp::class_< std::vector< double > > vector_float64_exposer_t;
        vector_float64_exposer_t vector_float64_exposer = vector_float64_exposer_t( "vector_float64" );
        bp::scope vector_float64_scope( vector_float64_exposer );
        vector_float64_exposer.def( bp::vector_indexing_suite< ::std::vector< double >, true >() );
        vector_float64_exposer.def("resize", &::resize, ( bp::arg("num") ));
    }

}