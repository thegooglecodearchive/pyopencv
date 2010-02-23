// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "__convenience.pypp.hpp"
#include "opencv_converters.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "opencv_converters.hpp"
#include "HOGDescriptor.pypp.hpp"

namespace bp = boost::python;

struct HOGDescriptor_wrapper : cv::HOGDescriptor, bp::wrapper< cv::HOGDescriptor > {

    HOGDescriptor_wrapper(cv::HOGDescriptor const & arg )
    : cv::HOGDescriptor( arg )
      , bp::wrapper< cv::HOGDescriptor >(){
        // copy constructor
        
    }

    HOGDescriptor_wrapper( )
    : cv::HOGDescriptor( )
      , bp::wrapper< cv::HOGDescriptor >(){
        // null constructor
    
    }

    HOGDescriptor_wrapper(::cv::Size _winSize, ::cv::Size _blockSize, ::cv::Size _blockStride, ::cv::Size _cellSize, int _nbins, int _derivAperture=1, double _winSigma=-0x000000001, int _histogramNormType=int(::cv::HOGDescriptor::L2Hys), double _L2HysThreshold=2.00000000000000011102230246251565404236316680908e-1, bool _gammaCorrection=false )
    : cv::HOGDescriptor( _winSize, _blockSize, _blockStride, _cellSize, _nbins, _derivAperture, _winSigma, _histogramNormType, _L2HysThreshold, _gammaCorrection )
      , bp::wrapper< cv::HOGDescriptor >(){
        // constructor
    
    }

    HOGDescriptor_wrapper(::cv::String const & filename )
    : cv::HOGDescriptor( filename )
      , bp::wrapper< cv::HOGDescriptor >(){
        // constructor
    
    }

    virtual void compute( ::cv::Mat const & img, ::std::vector< float > & descriptors, ::cv::Size winStride=cv::Size_<int>(), ::cv::Size padding=cv::Size_<int>(), ::std::vector< cv::Point_<int> > const & locations=std::vector<cv::Point>() ) const  {
        namespace bpl = boost::python;
        if( bpl::override func_compute = this->get_override( "compute" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_compute.ptr(), img, descriptors, winStride, padding, locations );
        }
        else{
            cv::HOGDescriptor::compute( boost::ref(img), boost::ref(descriptors), winStride, padding, boost::ref(locations) );
        }
    }
    
    static boost::python::object default_compute( ::cv::HOGDescriptor const & inst, ::cv::Mat const & img, ::cv::Size winStride=cv::Size_<int>(), ::cv::Size padding=cv::Size_<int>(), cv::Mat const & locations=convert_from_vector_of_T_to_Mat(std::vector<cv::Point>()) ){
        std::vector<float, std::allocator<float> > descriptors2;
        cv::Mat descriptors3;
        std::vector<cv::Point_<int>, std::allocator<cv::Point_<int> > > locations2;
        convert_from_Mat_to_vector_of_T(locations, locations2);
        if( dynamic_cast< HOGDescriptor_wrapper const* >( boost::addressof( inst ) ) ){
            inst.::cv::HOGDescriptor::compute(img, descriptors2, winStride, padding, locations2);
        }
        else{
            inst.compute(img, descriptors2, winStride, padding, locations2);
        }
        convert_from_vector_of_T_to_Mat(descriptors2, descriptors3);
        return bp::object( descriptors3 );
    }

    virtual void computeGradient( ::cv::Mat const & img, ::cv::Mat & grad, ::cv::Mat & angleOfs, ::cv::Size paddingTL=cv::Size_<int>(), ::cv::Size paddingBR=cv::Size_<int>() ) const  {
        if( bp::override func_computeGradient = this->get_override( "computeGradient" ) )
            func_computeGradient( boost::ref(img), boost::ref(grad), boost::ref(angleOfs), paddingTL, paddingBR );
        else{
            this->cv::HOGDescriptor::computeGradient( boost::ref(img), boost::ref(grad), boost::ref(angleOfs), paddingTL, paddingBR );
        }
    }
    
    void default_computeGradient( ::cv::Mat const & img, ::cv::Mat & grad, ::cv::Mat & angleOfs, ::cv::Size paddingTL=cv::Size_<int>(), ::cv::Size paddingBR=cv::Size_<int>() ) const  {
        cv::HOGDescriptor::computeGradient( boost::ref(img), boost::ref(grad), boost::ref(angleOfs), paddingTL, paddingBR );
    }

    virtual void detect( ::cv::Mat const & img, ::std::vector< cv::Point_<int> > & foundLocations, double hitThreshold=0, ::cv::Size winStride=cv::Size_<int>(), ::cv::Size padding=cv::Size_<int>(), ::std::vector< cv::Point_<int> > const & searchLocations=std::vector<cv::Point>() ) const  {
        namespace bpl = boost::python;
        if( bpl::override func_detect = this->get_override( "detect" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_detect.ptr(), img, foundLocations, hitThreshold, winStride, padding, searchLocations );
        }
        else{
            cv::HOGDescriptor::detect( boost::ref(img), boost::ref(foundLocations), hitThreshold, winStride, padding, boost::ref(searchLocations) );
        }
    }
    
    static boost::python::object default_detect( ::cv::HOGDescriptor const & inst, ::cv::Mat const & img, double hitThreshold=0, ::cv::Size winStride=cv::Size_<int>(), ::cv::Size padding=cv::Size_<int>(), cv::Mat const & searchLocations=convert_from_vector_of_T_to_Mat(std::vector<cv::Point>()) ){
        std::vector<cv::Point_<int>, std::allocator<cv::Point_<int> > > foundLocations2;
        cv::Mat foundLocations3;
        std::vector<cv::Point_<int>, std::allocator<cv::Point_<int> > > searchLocations2;
        convert_from_Mat_to_vector_of_T(searchLocations, searchLocations2);
        if( dynamic_cast< HOGDescriptor_wrapper const* >( boost::addressof( inst ) ) ){
            inst.::cv::HOGDescriptor::detect(img, foundLocations2, hitThreshold, winStride, padding, searchLocations2);
        }
        else{
            inst.detect(img, foundLocations2, hitThreshold, winStride, padding, searchLocations2);
        }
        convert_from_vector_of_T_to_Mat(foundLocations2, foundLocations3);
        return bp::object( foundLocations3 );
    }

    virtual void detectMultiScale( ::cv::Mat const & img, ::std::vector< cv::Rect_<int> > & foundLocations, double hitThreshold=0, ::cv::Size winStride=cv::Size_<int>(), ::cv::Size padding=cv::Size_<int>(), double scale=1.05000000000000004440892098500626161694526672363e+0, int groupThreshold=2 ) const  {
        namespace bpl = boost::python;
        if( bpl::override func_detectMultiScale = this->get_override( "detectMultiScale" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_detectMultiScale.ptr(), img, foundLocations, hitThreshold, winStride, padding, scale, groupThreshold );
        }
        else{
            cv::HOGDescriptor::detectMultiScale( boost::ref(img), boost::ref(foundLocations), hitThreshold, winStride, padding, scale, groupThreshold );
        }
    }
    
    static boost::python::object default_detectMultiScale( ::cv::HOGDescriptor const & inst, ::cv::Mat const & img, double hitThreshold=0, ::cv::Size winStride=cv::Size_<int>(), ::cv::Size padding=cv::Size_<int>(), double scale=1.05000000000000004440892098500626161694526672363e+0, int groupThreshold=2 ){
        std::vector<cv::Rect_<int>, std::allocator<cv::Rect_<int> > > foundLocations2;
        cv::Mat foundLocations3;
        if( dynamic_cast< HOGDescriptor_wrapper const* >( boost::addressof( inst ) ) ){
            inst.::cv::HOGDescriptor::detectMultiScale(img, foundLocations2, hitThreshold, winStride, padding, scale, groupThreshold);
        }
        else{
            inst.detectMultiScale(img, foundLocations2, hitThreshold, winStride, padding, scale, groupThreshold);
        }
        convert_from_vector_of_T_to_Mat(foundLocations2, foundLocations3);
        return bp::object( foundLocations3 );
    }

    virtual bool load( ::cv::String const & filename, ::cv::String const & objname=std::string() ) {
        if( bp::override func_load = this->get_override( "load" ) )
            return func_load( filename, objname );
        else{
            return this->cv::HOGDescriptor::load( filename, objname );
        }
    }
    
    bool default_load( ::cv::String const & filename, ::cv::String const & objname=std::string() ) {
        return cv::HOGDescriptor::load( filename, objname );
    }

    virtual void save( ::cv::String const & filename, ::cv::String const & objname=std::string() ) const  {
        if( bp::override func_save = this->get_override( "save" ) )
            func_save( filename, objname );
        else{
            this->cv::HOGDescriptor::save( filename, objname );
        }
    }
    
    void default_save( ::cv::String const & filename, ::cv::String const & objname=std::string() ) const  {
        cv::HOGDescriptor::save( filename, objname );
    }

    virtual void setSVMDetector( ::std::vector< float > const & _svmdetector ) {
        namespace bpl = boost::python;
        if( bpl::override func_setSVMDetector = this->get_override( "setSVMDetector" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_setSVMDetector.ptr(), _svmdetector );
        }
        else{
            cv::HOGDescriptor::setSVMDetector( boost::ref(_svmdetector) );
        }
    }
    
    static void default_setSVMDetector( ::cv::HOGDescriptor & inst, cv::Mat const & _svmdetector ){
        std::vector<float, std::allocator<float> > _svmdetector2;
        convert_from_Mat_to_vector_of_T(_svmdetector, _svmdetector2);
        if( dynamic_cast< HOGDescriptor_wrapper * >( boost::addressof( inst ) ) ){
            inst.::cv::HOGDescriptor::setSVMDetector(_svmdetector2);
        }
        else{
            inst.setSVMDetector(_svmdetector2);
        }
    }

};

static cv::Mat getDefaultPeopleDetector() {
    return convert_from_vector_of_T_to_Mat(cv::HOGDescriptor::getDefaultPeopleDetector());
}

static cv::Mat get_svmDetector(cv::HOGDescriptor const &inst) { return convert_from_vector_of_T_to_Mat(inst.svmDetector); }

void register_HOGDescriptor_class(){

    { //::cv::HOGDescriptor
        typedef bp::class_< HOGDescriptor_wrapper > HOGDescriptor_exposer_t;
        HOGDescriptor_exposer_t HOGDescriptor_exposer = HOGDescriptor_exposer_t( "HOGDescriptor", bp::init< >() );
        bp::scope HOGDescriptor_scope( HOGDescriptor_exposer );
        HOGDescriptor_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::HOGDescriptor >() );
        bp::scope().attr("L2Hys") = (int)cv::HOGDescriptor::L2Hys;
        HOGDescriptor_exposer.def( bp::init< cv::Size, cv::Size, cv::Size, cv::Size, int, bp::optional< int, double, int, double, bool > >(( bp::arg("_winSize"), bp::arg("_blockSize"), bp::arg("_blockStride"), bp::arg("_cellSize"), bp::arg("_nbins"), bp::arg("_derivAperture")=(int)(1), bp::arg("_winSigma")=-0x000000001, bp::arg("_histogramNormType")=int(::cv::HOGDescriptor::L2Hys), bp::arg("_L2HysThreshold")=2.00000000000000011102230246251565404236316680908e-1, bp::arg("_gammaCorrection")=(bool)(false) )) );
        HOGDescriptor_exposer.def( bp::init< cv::String const & >(( bp::arg("filename") )) );
        bp::implicitly_convertible< cv::String const &, cv::HOGDescriptor >();
        { //::cv::HOGDescriptor::checkDetectorSize
        
            typedef bool ( ::cv::HOGDescriptor::*checkDetectorSize_function_type )(  ) const;
            
            HOGDescriptor_exposer.def( 
                "checkDetectorSize"
                , checkDetectorSize_function_type( &::cv::HOGDescriptor::checkDetectorSize ) );
        
        }
        { //::cv::HOGDescriptor::compute
        
            typedef boost::python::object ( *default_compute_function_type )( ::cv::HOGDescriptor const &,::cv::Mat const &,::cv::Size,::cv::Size,cv::Mat const & );
            
            HOGDescriptor_exposer.def( 
                "compute"
                , default_compute_function_type( &HOGDescriptor_wrapper::default_compute )
                , ( bp::arg("inst"), bp::arg("img"), bp::arg("winStride")=cv::Size_<int>(), bp::arg("padding")=cv::Size_<int>(), bp::arg("locations")=convert_from_vector_of_T_to_Mat(std::vector<cv::Point>()) ) );
        
        }
        { //::cv::HOGDescriptor::computeGradient
        
            typedef void ( ::cv::HOGDescriptor::*computeGradient_function_type )( ::cv::Mat const &,::cv::Mat &,::cv::Mat &,::cv::Size,::cv::Size ) const;
            typedef void ( HOGDescriptor_wrapper::*default_computeGradient_function_type )( ::cv::Mat const &,::cv::Mat &,::cv::Mat &,::cv::Size,::cv::Size ) const;
            
            HOGDescriptor_exposer.def( 
                "computeGradient"
                , computeGradient_function_type(&::cv::HOGDescriptor::computeGradient)
                , default_computeGradient_function_type(&HOGDescriptor_wrapper::default_computeGradient)
                , ( bp::arg("img"), bp::arg("grad"), bp::arg("angleOfs"), bp::arg("paddingTL")=cv::Size_<int>(), bp::arg("paddingBR")=cv::Size_<int>() ) );
        
        }
        { //::cv::HOGDescriptor::detect
        
            typedef boost::python::object ( *default_detect_function_type )( ::cv::HOGDescriptor const &,::cv::Mat const &,double,::cv::Size,::cv::Size,cv::Mat const & );
            
            HOGDescriptor_exposer.def( 
                "detect"
                , default_detect_function_type( &HOGDescriptor_wrapper::default_detect )
                , ( bp::arg("inst"), bp::arg("img"), bp::arg("hitThreshold")=0, bp::arg("winStride")=cv::Size_<int>(), bp::arg("padding")=cv::Size_<int>(), bp::arg("searchLocations")=convert_from_vector_of_T_to_Mat(std::vector<cv::Point>()) ) );
        
        }
        { //::cv::HOGDescriptor::detectMultiScale
        
            typedef boost::python::object ( *default_detectMultiScale_function_type )( ::cv::HOGDescriptor const &,::cv::Mat const &,double,::cv::Size,::cv::Size,double,int );
            
            HOGDescriptor_exposer.def( 
                "detectMultiScale"
                , default_detectMultiScale_function_type( &HOGDescriptor_wrapper::default_detectMultiScale )
                , ( bp::arg("inst"), bp::arg("img"), bp::arg("hitThreshold")=0, bp::arg("winStride")=cv::Size_<int>(), bp::arg("padding")=cv::Size_<int>(), bp::arg("scale")=1.05000000000000004440892098500626161694526672363e+0, bp::arg("groupThreshold")=(int)(2) ) );
        
        }
        { //::cv::HOGDescriptor::getDescriptorSize
        
            typedef ::size_t ( ::cv::HOGDescriptor::*getDescriptorSize_function_type )(  ) const;
            
            HOGDescriptor_exposer.def( 
                "getDescriptorSize"
                , getDescriptorSize_function_type( &::cv::HOGDescriptor::getDescriptorSize ) );
        
        }
        { //::cv::HOGDescriptor::getWinSigma
        
            typedef double ( ::cv::HOGDescriptor::*getWinSigma_function_type )(  ) const;
            
            HOGDescriptor_exposer.def( 
                "getWinSigma"
                , getWinSigma_function_type( &::cv::HOGDescriptor::getWinSigma ) );
        
        }
        { //::cv::HOGDescriptor::load
        
            typedef bool ( ::cv::HOGDescriptor::*load_function_type )( ::cv::String const &,::cv::String const & ) ;
            typedef bool ( HOGDescriptor_wrapper::*default_load_function_type )( ::cv::String const &,::cv::String const & ) ;
            
            HOGDescriptor_exposer.def( 
                "load"
                , load_function_type(&::cv::HOGDescriptor::load)
                , default_load_function_type(&HOGDescriptor_wrapper::default_load)
                , ( bp::arg("filename"), bp::arg("objname")=std::string() ) );
        
        }
        { //::cv::HOGDescriptor::save
        
            typedef void ( ::cv::HOGDescriptor::*save_function_type )( ::cv::String const &,::cv::String const & ) const;
            typedef void ( HOGDescriptor_wrapper::*default_save_function_type )( ::cv::String const &,::cv::String const & ) const;
            
            HOGDescriptor_exposer.def( 
                "save"
                , save_function_type(&::cv::HOGDescriptor::save)
                , default_save_function_type(&HOGDescriptor_wrapper::default_save)
                , ( bp::arg("filename"), bp::arg("objname")=std::string() ) );
        
        }
        { //::cv::HOGDescriptor::setSVMDetector
        
            typedef void ( *default_setSVMDetector_function_type )( ::cv::HOGDescriptor &,cv::Mat const & );
            
            HOGDescriptor_exposer.def( 
                "setSVMDetector"
                , default_setSVMDetector_function_type( &HOGDescriptor_wrapper::default_setSVMDetector )
                , ( bp::arg("inst"), bp::arg("_svmdetector") ) );
        
        }
        HOGDescriptor_exposer.def_readwrite( "L2HysThreshold", &cv::HOGDescriptor::L2HysThreshold );
        HOGDescriptor_exposer.def_readwrite( "blockSize", &cv::HOGDescriptor::blockSize );
        HOGDescriptor_exposer.def_readwrite( "blockStride", &cv::HOGDescriptor::blockStride );
        HOGDescriptor_exposer.def_readwrite( "cellSize", &cv::HOGDescriptor::cellSize );
        HOGDescriptor_exposer.def_readwrite( "derivAperture", &cv::HOGDescriptor::derivAperture );
        HOGDescriptor_exposer.def_readwrite( "gammaCorrection", &cv::HOGDescriptor::gammaCorrection );
        HOGDescriptor_exposer.def_readwrite( "histogramNormType", &cv::HOGDescriptor::histogramNormType );
        HOGDescriptor_exposer.def_readwrite( "nbins", &cv::HOGDescriptor::nbins );
        HOGDescriptor_exposer.def_readwrite( "winSigma", &cv::HOGDescriptor::winSigma );
        HOGDescriptor_exposer.def_readwrite( "winSize", &cv::HOGDescriptor::winSize );
        HOGDescriptor_exposer.def("getDefaultPeopleDetector", &::getDefaultPeopleDetector);
        HOGDescriptor_exposer.staticmethod("getDefaultPeopleDetector");
        HOGDescriptor_exposer.add_property("svmDetector", &::get_svmDetector);
    }

}
