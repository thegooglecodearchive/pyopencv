// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "PCA.pypp.hpp"

namespace bp = boost::python;

void register_PCA_class(){

    bp::class_< cv::PCA >( "PCA", "\nClass for Principal Component Analysis."
    "\n"
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#pca", bp::init< >("\nPCA constructors."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-pca-pca") )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::PCA >(), "\nClass for Principal Component Analysis."
    "\n"
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#pca" )    
        .def( bp::init< cv::Mat const &, cv::Mat const &, int, bp::optional< int > >(( bp::arg("data"), bp::arg("mean"), bp::arg("flags"), bp::arg("maxComponents")=(int)(0) ), "\nPCA constructors."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-pca-pca") )    
        .def( 
            "backProject"
            , (::cv::Mat ( ::cv::PCA::* )( ::cv::Mat const & ) const)( &::cv::PCA::backProject )
            , ( bp::arg("vec") )
            , "\nReconstruct vectors from their PC projections."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-pca-backproject" )    
        .def( 
            "backProject"
            , (void ( ::cv::PCA::* )( ::cv::Mat const &,::cv::Mat & ) const)( &::cv::PCA::backProject )
            , ( bp::arg("vec"), bp::arg("result") )
            , "\nReconstruct vectors from their PC projections."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-pca-backproject" )    
        .def( 
            "__call__"
            , (::cv::PCA & ( ::cv::PCA::* )( ::cv::Mat const &,::cv::Mat const &,int,int ) )( &::cv::PCA::operator() )
            , ( bp::arg("data"), bp::arg("mean"), bp::arg("flags"), bp::arg("maxComponents")=(int)(0) )
            , bp::return_self< >()
            , "\nPerforms Principal Component Analysis of the supplied dataset."
    "\nWrapped function:"
    "\n    operator()"
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-pca-operator" )    
        .def( 
            "project"
            , (::cv::Mat ( ::cv::PCA::* )( ::cv::Mat const & ) const)( &::cv::PCA::project )
            , ( bp::arg("vec") )
            , "\nProject vector(s) to the principal component subspace."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-pca-project" )    
        .def( 
            "project"
            , (void ( ::cv::PCA::* )( ::cv::Mat const &,::cv::Mat & ) const)( &::cv::PCA::project )
            , ( bp::arg("vec"), bp::arg("result") )
            , "\nProject vector(s) to the principal component subspace."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-pca-project" )    
        .def_readwrite( "eigenvalues", &cv::PCA::eigenvalues )    
        .def_readwrite( "eigenvectors", &cv::PCA::eigenvectors )    
        .def_readwrite( "mean", &cv::PCA::mean );

}