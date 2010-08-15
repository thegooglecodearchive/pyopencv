// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "CvEMParams.pypp.hpp"

namespace bp = boost::python;

struct CvEMParams_wrapper : CvEMParams, bp::wrapper< CvEMParams > {

    CvEMParams_wrapper(CvEMParams const & arg )
    : CvEMParams( arg )
      , bp::wrapper< CvEMParams >(){
        // copy constructor
        
    }

    CvEMParams_wrapper( )
    : CvEMParams( )
      , bp::wrapper< CvEMParams >(){
        // null constructor
    
    }

    CvEMParams_wrapper(int _nclusters, int _cov_mat_type, int _start_step)
        : CvEMParams(_nclusters, _cov_mat_type, _start_step), bp::wrapper< CvEMParams >() { }

};

static cv::Mat get_probs(::CvEMParams const &inst) { return inst.probs? cv::Mat(inst.probs): cv::Mat(); }

static cv::Mat get_weights(::CvEMParams const &inst) { return inst.weights? cv::Mat(inst.weights): cv::Mat(); }

static cv::Mat get_means(::CvEMParams const &inst) { return inst.means? cv::Mat(inst.means): cv::Mat(); }

static cv::TermCriteria *get_term_crit(CvEMParams const &inst) { return (cv::TermCriteria *)(&inst.term_crit); }

void register_CvEMParams_class(){

    bp::class_< CvEMParams_wrapper >( "CvEMParams", bp::init< >() )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvEMParams >() )    
        .def_readwrite( "cov_mat_type", &CvEMParams::cov_mat_type )    
        .def_readwrite( "nclusters", &CvEMParams::nclusters )    
        .def_readwrite( "start_step", &CvEMParams::start_step )    
        .def( bp::init< int, int, int >(( bp::arg("_nclusters"), bp::arg("_cov_mat_type")=1, bp::arg("_start_step")=0 )) )    
        .add_property( "probs", &::get_probs )    
        .add_property( "weights", &::get_weights )    
        .add_property( "means", &::get_means )    
        .add_property( "term_crit", bp::make_function(&::get_term_crit, bp::return_internal_reference<>()) );

}