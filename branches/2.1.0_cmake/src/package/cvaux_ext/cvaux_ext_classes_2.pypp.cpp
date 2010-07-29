// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "__convenience.pypp.hpp"
#include "opencv_converters.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "cvaux_wrapper.hpp"
#include "cvaux_ext_classes_2.pypp.hpp"

namespace bp = boost::python;

static void Detect_d8fa7b620f024b1a2f20fc4afa978e15( ::CvObjectDetector & inst, ::cv::Mat & arg0, ::CvBlobSeq * arg1=0 ){
    inst.Detect(get_CvMat_ptr(arg0), arg1);
}

struct CvVSModule_wrapper : CvVSModule, bp::wrapper< CvVSModule > {

    CvVSModule_wrapper( )
    : CvVSModule( )
      , bp::wrapper< CvVSModule >(){
        // null constructor
    
    }

    virtual void LoadState( ::CvFileStorage * arg0, ::CvFileNode * arg1 ) {
        namespace bpl = boost::python;
        if( bpl::override func_LoadState = this->get_override( "LoadState" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_LoadState.ptr(), arg0, arg1 );
        }
        else{
            CvVSModule::LoadState( boost::python::ptr(arg0), boost::python::ptr(arg1) );
        }
    }
    
    static void default_LoadState( ::CvVSModule & inst, ::cv::FileStorage & arg0, ::cv::FileNode & arg1 ){
        if( dynamic_cast< CvVSModule_wrapper * >( boost::addressof( inst ) ) ){
            inst.::CvVSModule::LoadState(arg0.fs, *(arg1));
        }
        else{
            inst.LoadState(arg0.fs, *(arg1));
        }
    }

    virtual void ParamUpdate(  ) {
        if( bp::override func_ParamUpdate = this->get_override( "ParamUpdate" ) )
            func_ParamUpdate(  );
        else{
            this->CvVSModule::ParamUpdate(  );
        }
    }
    
    void default_ParamUpdate(  ) {
        CvVSModule::ParamUpdate( );
    }

    virtual void Release(  ){
        bp::override func_Release = this->get_override( "Release" );
        func_Release(  );
    }

    virtual void SaveState( ::CvFileStorage * arg0 ) {
        namespace bpl = boost::python;
        if( bpl::override func_SaveState = this->get_override( "SaveState" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_SaveState.ptr(), arg0 );
        }
        else{
            CvVSModule::SaveState( boost::python::ptr(arg0) );
        }
    }
    
    static void default_SaveState( ::CvVSModule & inst, ::cv::FileStorage & arg0 ){
        if( dynamic_cast< CvVSModule_wrapper * >( boost::addressof( inst ) ) ){
            inst.::CvVSModule::SaveState(arg0.fs);
        }
        else{
            inst.SaveState(arg0.fs);
        }
    }

};

inline bp::str CvVSModule_GetModuleName(CvVSModule &inst) {  return bp::str(inst.GetModuleName()); }

void register_classes_2(){

    bp::class_< CvDetectedBlob, bp::bases< CvBlob > >( "CvDetectedBlob" )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvDetectedBlob >() )    
        .def_readwrite( "response", &CvDetectedBlob::response );

    bp::class_< CvFuzzyController >( "CvFuzzyController" )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvFuzzyController >() );

    bp::class_< CvFuzzyCurve >( "CvFuzzyCurve", bp::init< >() )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvFuzzyCurve >() )    
        .def( 
            "addPoint"
            , (void ( CvFuzzyCurve::* )( double,double ) )( &::CvFuzzyCurve::addPoint )
            , ( bp::arg("x"), bp::arg("y") ) )    
        .def( 
            "calcValue"
            , (double ( CvFuzzyCurve::* )( double ) )( &::CvFuzzyCurve::calcValue )
            , ( bp::arg("param") ) )    
        .def( 
            "clear"
            , (void ( CvFuzzyCurve::* )(  ) )( &::CvFuzzyCurve::clear ) )    
        .def( 
            "getCentre"
            , (double ( CvFuzzyCurve::* )(  ) )( &::CvFuzzyCurve::getCentre ) )    
        .def( 
            "getValue"
            , (double ( CvFuzzyCurve::* )(  ) )( &::CvFuzzyCurve::getValue ) )    
        .def( 
            "setCentre"
            , (void ( CvFuzzyCurve::* )( double ) )( &::CvFuzzyCurve::setCentre )
            , ( bp::arg("_centre") ) )    
        .def( 
            "setValue"
            , (void ( CvFuzzyCurve::* )( double ) )( &::CvFuzzyCurve::setValue )
            , ( bp::arg("_value") ) );

    bp::class_< CvFuzzyFunction >( "CvFuzzyFunction" )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvFuzzyFunction >() );

    bp::class_< CvFuzzyMeanShiftTracker >( "CvFuzzyMeanShiftTracker" )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvFuzzyMeanShiftTracker >() );

    bp::class_< CvFuzzyPoint >( "CvFuzzyPoint", bp::init< double, double >(( bp::arg("_x"), bp::arg("_y") )) )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvFuzzyPoint >() )    
        .def_readwrite( "value", &CvFuzzyPoint::value )    
        .def_readwrite( "x", &CvFuzzyPoint::x )    
        .def_readwrite( "y", &CvFuzzyPoint::y );

    bp::class_< CvFuzzyRule >( "CvFuzzyRule" )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvFuzzyRule >() );

    { //::CvObjectDetector
        typedef bp::class_< CvObjectDetector > CvObjectDetector_exposer_t;
        CvObjectDetector_exposer_t CvObjectDetector_exposer = CvObjectDetector_exposer_t( "CvObjectDetector", bp::init< bp::optional< char const * > >(( bp::arg("arg0")=bp::object() )) );
        bp::scope CvObjectDetector_scope( CvObjectDetector_exposer );
        CvObjectDetector_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< CvObjectDetector >() );
        bp::implicitly_convertible< char const *, CvObjectDetector >();
        { //::CvObjectDetector::Detect
        
            typedef void ( *Detect_function_type )( CvObjectDetector &,::cv::Mat &,CvBlobSeq * );
            
            CvObjectDetector_exposer.def( 
                "Detect"
                , Detect_function_type( &Detect_d8fa7b620f024b1a2f20fc4afa978e15 )
                , ( bp::arg("inst"), bp::arg("arg0"), bp::arg("arg1")=bp::object() )
                , "\nArgument 'arg0':"\
    "\n    C++ type: ::CvArr const *."\
    "\n    Python type: Mat." );
        
        }
        { //::CvObjectDetector::GetMaxBorderSize
        
            typedef int ( ::CvObjectDetector::*GetMaxBorderSize_function_type )(  ) const;
            
            CvObjectDetector_exposer.def( 
                "GetMaxBorderSize"
                , GetMaxBorderSize_function_type( &::CvObjectDetector::GetMaxBorderSize ) );
        
        }
        { //::CvObjectDetector::GetMinWindowSize
        
            typedef ::CvSize ( ::CvObjectDetector::*GetMinWindowSize_function_type )(  ) const;
            
            CvObjectDetector_exposer.def( 
                "GetMinWindowSize"
                , GetMinWindowSize_function_type( &::CvObjectDetector::GetMinWindowSize ) );
        
        }
        { //::CvObjectDetector::Load
        
            typedef bool ( ::CvObjectDetector::*Load_function_type )( char const * ) ;
            
            CvObjectDetector_exposer.def( 
                "Load"
                , Load_function_type( &::CvObjectDetector::Load )
                , ( bp::arg("arg0")=bp::object() ) );
        
        }
    }

    bp::class_< CvVSModule_wrapper, boost::noncopyable >( "CvVSModule", bp::init< >() )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvVSModule >() )    
        .def( 
            "GetNickName"
            , (char const * ( CvVSModule::* )(  ) )( &::CvVSModule::GetNickName ) )    
        .def( 
            "GetParam"
            , (double ( CvVSModule::* )( char const * ) )( &::CvVSModule::GetParam )
            , ( bp::arg("name") ) )    
        .def( 
            "GetParamComment"
            , (char const * ( CvVSModule::* )( char const * ) )( &::CvVSModule::GetParamComment )
            , ( bp::arg("name") ) )    
        .def( 
            "GetParamName"
            , (char const * ( CvVSModule::* )( int ) )( &::CvVSModule::GetParamName )
            , ( bp::arg("index") ) )    
        .def( 
            "GetParamStr"
            , (char const * ( CvVSModule::* )( char const * ) )( &::CvVSModule::GetParamStr )
            , ( bp::arg("name") ) )    
        .def( 
            "GetTypeName"
            , (char const * ( CvVSModule::* )(  ) )( &::CvVSModule::GetTypeName ) )    
        .def( 
            "IsModuleName"
            , (int ( CvVSModule::* )( char const * ) )( &::CvVSModule::IsModuleName )
            , ( bp::arg("name") ) )    
        .def( 
            "IsModuleTypeName"
            , (int ( CvVSModule::* )( char const * ) )( &::CvVSModule::IsModuleTypeName )
            , ( bp::arg("name") ) )    
        .def( 
            "LoadState"
            , (void (*)( CvVSModule &,::cv::FileStorage &,::cv::FileNode & ))( &CvVSModule_wrapper::default_LoadState )
            , ( bp::arg("inst"), bp::arg("arg0"), bp::arg("arg1") )
            , "\nArgument 'arg0':"\
    "\n    C++ type: ::CvFileStorage *."\
    "\n    Python type: FileStorage."\
    "\nArgument 'arg1':"\
    "\n    C++ type: ::CvFileNode *."\
    "\n    Python type: FileNode." )    
        .def( 
            "ParamUpdate"
            , (void ( CvVSModule::* )(  ) )(&::CvVSModule::ParamUpdate)
            , (void ( CvVSModule_wrapper::* )(  ) )(&CvVSModule_wrapper::default_ParamUpdate) )    
        .def( 
            "Release"
            , bp::pure_virtual( (void ( CvVSModule::* )(  ) )(&::CvVSModule::Release) ) )    
        .def( 
            "SaveState"
            , (void (*)( CvVSModule &,::cv::FileStorage & ))( &CvVSModule_wrapper::default_SaveState )
            , ( bp::arg("inst"), bp::arg("arg0") )
            , "\nArgument 'arg0':"\
    "\n    C++ type: ::CvFileStorage *."\
    "\n    Python type: FileStorage." )    
        .def( 
            "SetNickName"
            , (void ( CvVSModule::* )( char const * ) )( &::CvVSModule::SetNickName )
            , ( bp::arg("pStr") ) )    
        .def( 
            "SetParam"
            , (void ( CvVSModule::* )( char const *,double ) )( &::CvVSModule::SetParam )
            , ( bp::arg("name"), bp::arg("val") ) )    
        .def( 
            "SetParamStr"
            , (void ( CvVSModule::* )( char const *,char const * ) )( &::CvVSModule::SetParamStr )
            , ( bp::arg("name"), bp::arg("str") ) )    
        .def( 
            "TransferParamsFromChild"
            , (void ( CvVSModule::* )( ::CvVSModule *,char const * ) )( &::CvVSModule::TransferParamsFromChild )
            , ( bp::arg("pM"), bp::arg("prefix")=bp::object() ) )    
        .def( 
            "TransferParamsToChild"
            , (void ( CvVSModule::* )( ::CvVSModule *,char * ) )( &::CvVSModule::TransferParamsToChild )
            , ( bp::arg("pM"), bp::arg("prefix")=bp::object() ) )    
        .def("GetModuleName", &::CvVSModule_GetModuleName);

}
