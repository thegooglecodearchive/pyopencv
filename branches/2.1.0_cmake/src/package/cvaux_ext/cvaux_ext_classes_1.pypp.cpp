// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "__convenience.pypp.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "cvaux_wrapper.hpp"
#include "boost/python/object.hpp"
#include "boost/python/str.hpp"
#include "cvaux_ext_classes_1.pypp.hpp"

namespace bp = boost::python;

struct CvBlobSeq_wrapper : CvBlobSeq, bp::wrapper< CvBlobSeq > {

    CvBlobSeq_wrapper(CvBlobSeq const & arg )
    : CvBlobSeq( arg )
      , bp::wrapper< CvBlobSeq >(){
        // copy constructor
        
    }

    CvBlobSeq_wrapper(int BlobSize=20u )
    : CvBlobSeq( BlobSize )
      , bp::wrapper< CvBlobSeq >(){
        // constructor
    
    }

    virtual void AddBlob( ::CvBlob * pB ) {
        if( bp::override func_AddBlob = this->get_override( "AddBlob" ) )
            func_AddBlob( boost::python::ptr(pB) );
        else{
            this->CvBlobSeq::AddBlob( boost::python::ptr(pB) );
        }
    }
    
    void default_AddBlob( ::CvBlob * pB ) {
        CvBlobSeq::AddBlob( boost::python::ptr(pB) );
    }

    virtual void Clear(  ) {
        if( bp::override func_Clear = this->get_override( "Clear" ) )
            func_Clear(  );
        else{
            this->CvBlobSeq::Clear(  );
        }
    }
    
    void default_Clear(  ) {
        CvBlobSeq::Clear( );
    }

    virtual void DelBlob( int BlobIndex ) {
        if( bp::override func_DelBlob = this->get_override( "DelBlob" ) )
            func_DelBlob( BlobIndex );
        else{
            this->CvBlobSeq::DelBlob( BlobIndex );
        }
    }
    
    void default_DelBlob( int BlobIndex ) {
        CvBlobSeq::DelBlob( BlobIndex );
    }

    virtual void DelBlobByID( int BlobID ) {
        if( bp::override func_DelBlobByID = this->get_override( "DelBlobByID" ) )
            func_DelBlobByID( BlobID );
        else{
            this->CvBlobSeq::DelBlobByID( BlobID );
        }
    }
    
    void default_DelBlobByID( int BlobID ) {
        CvBlobSeq::DelBlobByID( BlobID );
    }

    virtual ::CvBlob * GetBlob( int BlobIndex ) {
        if( bp::override func_GetBlob = this->get_override( "GetBlob" ) )
            return func_GetBlob( BlobIndex );
        else{
            return this->CvBlobSeq::GetBlob( BlobIndex );
        }
    }
    
    ::CvBlob * default_GetBlob( int BlobIndex ) {
        return CvBlobSeq::GetBlob( BlobIndex );
    }

    virtual ::CvBlob * GetBlobByID( int BlobID ) {
        if( bp::override func_GetBlobByID = this->get_override( "GetBlobByID" ) )
            return func_GetBlobByID( BlobID );
        else{
            return this->CvBlobSeq::GetBlobByID( BlobID );
        }
    }
    
    ::CvBlob * default_GetBlobByID( int BlobID ) {
        return CvBlobSeq::GetBlobByID( BlobID );
    }

    virtual int GetBlobNum(  ) {
        if( bp::override func_GetBlobNum = this->get_override( "GetBlobNum" ) )
            return func_GetBlobNum(  );
        else{
            return this->CvBlobSeq::GetBlobNum(  );
        }
    }
    
    int default_GetBlobNum(  ) {
        return CvBlobSeq::GetBlobNum( );
    }

    virtual void Load( ::CvFileStorage * fs, ::CvFileNode * node ) {
        namespace bpl = boost::python;
        if( bpl::override func_Load = this->get_override( "Load" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_Load.ptr(), fs, node );
        }
        else{
            CvBlobSeq::Load( boost::python::ptr(fs), boost::python::ptr(node) );
        }
    }
    
    static void default_Load( ::CvBlobSeq & inst, ::cv::FileStorage & fs, ::cv::FileNode & node ){
        if( dynamic_cast< CvBlobSeq_wrapper * >( boost::addressof( inst ) ) ){
            inst.::CvBlobSeq::Load(fs.fs, *(node));
        }
        else{
            inst.Load(fs.fs, *(node));
        }
    }

    virtual void Write( ::CvFileStorage * fs, char const * name ) {
        namespace bpl = boost::python;
        if( bpl::override func_Write = this->get_override( "Write" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_Write.ptr(), fs, name );
        }
        else{
            CvBlobSeq::Write( boost::python::ptr(fs), name );
        }
    }
    
    static void default_Write( ::CvBlobSeq & inst, ::cv::FileStorage & fs, char const * name ){
        if( dynamic_cast< CvBlobSeq_wrapper * >( boost::addressof( inst ) ) ){
            inst.::CvBlobSeq::Write(fs.fs, name);
        }
        else{
            inst.Write(fs.fs, name);
        }
    }

};

static CvBlobSeq * get_CvBlobTrack_pBlobSeq( CvBlobTrack const & inst ) { return inst.pBlobSeq; }

struct CvBlobTrackSeq_wrapper : CvBlobTrackSeq, bp::wrapper< CvBlobTrackSeq > {

    CvBlobTrackSeq_wrapper(CvBlobTrackSeq const & arg )
    : CvBlobTrackSeq( arg )
      , bp::wrapper< CvBlobTrackSeq >(){
        // copy constructor
        
    }

    CvBlobTrackSeq_wrapper(int TrackSize=12u )
    : CvBlobTrackSeq( TrackSize )
      , bp::wrapper< CvBlobTrackSeq >(){
        // constructor
    
    }

    virtual void AddBlobTrack( int TrackID, int StartFrame=0 ) {
        if( bp::override func_AddBlobTrack = this->get_override( "AddBlobTrack" ) )
            func_AddBlobTrack( TrackID, StartFrame );
        else{
            this->CvBlobTrackSeq::AddBlobTrack( TrackID, StartFrame );
        }
    }
    
    void default_AddBlobTrack( int TrackID, int StartFrame=0 ) {
        CvBlobTrackSeq::AddBlobTrack( TrackID, StartFrame );
    }

    virtual void Clear(  ) {
        if( bp::override func_Clear = this->get_override( "Clear" ) )
            func_Clear(  );
        else{
            this->CvBlobTrackSeq::Clear(  );
        }
    }
    
    void default_Clear(  ) {
        CvBlobTrackSeq::Clear( );
    }

    virtual void DelBlobTrack( int TrackIndex ) {
        if( bp::override func_DelBlobTrack = this->get_override( "DelBlobTrack" ) )
            func_DelBlobTrack( TrackIndex );
        else{
            this->CvBlobTrackSeq::DelBlobTrack( TrackIndex );
        }
    }
    
    void default_DelBlobTrack( int TrackIndex ) {
        CvBlobTrackSeq::DelBlobTrack( TrackIndex );
    }

    virtual void DelBlobTrackByID( int TrackID ) {
        if( bp::override func_DelBlobTrackByID = this->get_override( "DelBlobTrackByID" ) )
            func_DelBlobTrackByID( TrackID );
        else{
            this->CvBlobTrackSeq::DelBlobTrackByID( TrackID );
        }
    }
    
    void default_DelBlobTrackByID( int TrackID ) {
        CvBlobTrackSeq::DelBlobTrackByID( TrackID );
    }

    virtual ::CvBlobTrack * GetBlobTrack( int TrackIndex ) {
        if( bp::override func_GetBlobTrack = this->get_override( "GetBlobTrack" ) )
            return func_GetBlobTrack( TrackIndex );
        else{
            return this->CvBlobTrackSeq::GetBlobTrack( TrackIndex );
        }
    }
    
    ::CvBlobTrack * default_GetBlobTrack( int TrackIndex ) {
        return CvBlobTrackSeq::GetBlobTrack( TrackIndex );
    }

    virtual ::CvBlobTrack * GetBlobTrackByID( int TrackID ) {
        if( bp::override func_GetBlobTrackByID = this->get_override( "GetBlobTrackByID" ) )
            return func_GetBlobTrackByID( TrackID );
        else{
            return this->CvBlobTrackSeq::GetBlobTrackByID( TrackID );
        }
    }
    
    ::CvBlobTrack * default_GetBlobTrackByID( int TrackID ) {
        return CvBlobTrackSeq::GetBlobTrackByID( TrackID );
    }

    virtual int GetBlobTrackNum(  ) {
        if( bp::override func_GetBlobTrackNum = this->get_override( "GetBlobTrackNum" ) )
            return func_GetBlobTrackNum(  );
        else{
            return this->CvBlobTrackSeq::GetBlobTrackNum(  );
        }
    }
    
    int default_GetBlobTrackNum(  ) {
        return CvBlobTrackSeq::GetBlobTrackNum( );
    }

};

static CvDefParam * get_CvDefParam_next( CvDefParam const & inst ) { return inst.next; }

static bp::object get_CvDefParam_pName( CvDefParam const & inst ){        
    return inst.pName? bp::str(inst.pName): bp::object();
}

static bp::object get_CvDefParam_pComment( CvDefParam const & inst ){        
    return inst.pComment? bp::str(inst.pComment): bp::object();
}

static bp::object get_CvDefParam_Str( CvDefParam const & inst ){        
    return inst.Str? bp::str(inst.Str): bp::object();
}

void register_classes_1(){

    { //::std::vector< cv::Octree::Node >
        typedef bp::class_< std::vector< cv::Octree::Node > > vector_Octree_Node_exposer_t;
        vector_Octree_Node_exposer_t vector_Octree_Node_exposer = vector_Octree_Node_exposer_t( "vector_Octree_Node" );
        bp::scope vector_Octree_Node_scope( vector_Octree_Node_exposer );
        //WARNING: the next line of code will not compile, because "cv::Octree::Node" does not have operator== !
        vector_Octree_Node_exposer.def( bp::vector_indexing_suite< ::std::vector< cv::Octree::Node > >() );
    }

    bp::class_< CvAdaptiveSkinDetector >( "CvAdaptiveSkinDetector", bp::no_init )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvAdaptiveSkinDetector >() );

    bp::class_< CvBlob >( "CvBlob" )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvBlob >() )    
        .def_readwrite( "ID", &CvBlob::ID )    
        .def_readwrite( "h", &CvBlob::h )    
        .def_readwrite( "w", &CvBlob::w )    
        .def_readwrite( "x", &CvBlob::x )    
        .def_readwrite( "y", &CvBlob::y );

    { //::CvBlobSeq
        typedef bp::class_< CvBlobSeq_wrapper > CvBlobSeq_exposer_t;
        CvBlobSeq_exposer_t CvBlobSeq_exposer = CvBlobSeq_exposer_t( "CvBlobSeq", bp::init< bp::optional< int > >(( bp::arg("BlobSize")=(int)(20u) )) );
        bp::scope CvBlobSeq_scope( CvBlobSeq_exposer );
        CvBlobSeq_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< CvBlobSeq >() );
        bp::implicitly_convertible< int, CvBlobSeq >();
        { //::CvBlobSeq::AddBlob
        
            typedef void ( ::CvBlobSeq::*AddBlob_function_type )( ::CvBlob * ) ;
            typedef void ( CvBlobSeq_wrapper::*default_AddBlob_function_type )( ::CvBlob * ) ;
            
            CvBlobSeq_exposer.def( 
                "AddBlob"
                , AddBlob_function_type(&::CvBlobSeq::AddBlob)
                , default_AddBlob_function_type(&CvBlobSeq_wrapper::default_AddBlob)
                , ( bp::arg("pB") ) );
        
        }
        { //::CvBlobSeq::AddFormat
        
            typedef void ( ::CvBlobSeq::*AddFormat_function_type )( char const * ) ;
            
            CvBlobSeq_exposer.def( 
                "AddFormat"
                , AddFormat_function_type( &::CvBlobSeq::AddFormat )
                , ( bp::arg("str") ) );
        
        }
        { //::CvBlobSeq::Clear
        
            typedef void ( ::CvBlobSeq::*Clear_function_type )(  ) ;
            typedef void ( CvBlobSeq_wrapper::*default_Clear_function_type )(  ) ;
            
            CvBlobSeq_exposer.def( 
                "Clear"
                , Clear_function_type(&::CvBlobSeq::Clear)
                , default_Clear_function_type(&CvBlobSeq_wrapper::default_Clear) );
        
        }
        { //::CvBlobSeq::DelBlob
        
            typedef void ( ::CvBlobSeq::*DelBlob_function_type )( int ) ;
            typedef void ( CvBlobSeq_wrapper::*default_DelBlob_function_type )( int ) ;
            
            CvBlobSeq_exposer.def( 
                "DelBlob"
                , DelBlob_function_type(&::CvBlobSeq::DelBlob)
                , default_DelBlob_function_type(&CvBlobSeq_wrapper::default_DelBlob)
                , ( bp::arg("BlobIndex") ) );
        
        }
        { //::CvBlobSeq::DelBlobByID
        
            typedef void ( ::CvBlobSeq::*DelBlobByID_function_type )( int ) ;
            typedef void ( CvBlobSeq_wrapper::*default_DelBlobByID_function_type )( int ) ;
            
            CvBlobSeq_exposer.def( 
                "DelBlobByID"
                , DelBlobByID_function_type(&::CvBlobSeq::DelBlobByID)
                , default_DelBlobByID_function_type(&CvBlobSeq_wrapper::default_DelBlobByID)
                , ( bp::arg("BlobID") ) );
        
        }
        { //::CvBlobSeq::GetBlob
        
            typedef ::CvBlob * ( ::CvBlobSeq::*GetBlob_function_type )( int ) ;
            typedef ::CvBlob * ( CvBlobSeq_wrapper::*default_GetBlob_function_type )( int ) ;
            
            CvBlobSeq_exposer.def( 
                "GetBlob"
                , GetBlob_function_type(&::CvBlobSeq::GetBlob)
                , default_GetBlob_function_type(&CvBlobSeq_wrapper::default_GetBlob)
                , ( bp::arg("BlobIndex") )
                , bp::return_internal_reference< >() );
        
        }
        { //::CvBlobSeq::GetBlobByID
        
            typedef ::CvBlob * ( ::CvBlobSeq::*GetBlobByID_function_type )( int ) ;
            typedef ::CvBlob * ( CvBlobSeq_wrapper::*default_GetBlobByID_function_type )( int ) ;
            
            CvBlobSeq_exposer.def( 
                "GetBlobByID"
                , GetBlobByID_function_type(&::CvBlobSeq::GetBlobByID)
                , default_GetBlobByID_function_type(&CvBlobSeq_wrapper::default_GetBlobByID)
                , ( bp::arg("BlobID") )
                , bp::return_internal_reference< >() );
        
        }
        { //::CvBlobSeq::GetBlobNum
        
            typedef int ( ::CvBlobSeq::*GetBlobNum_function_type )(  ) ;
            typedef int ( CvBlobSeq_wrapper::*default_GetBlobNum_function_type )(  ) ;
            
            CvBlobSeq_exposer.def( 
                "GetBlobNum"
                , GetBlobNum_function_type(&::CvBlobSeq::GetBlobNum)
                , default_GetBlobNum_function_type(&CvBlobSeq_wrapper::default_GetBlobNum) );
        
        }
        { //::CvBlobSeq::Load
        
            typedef void ( *default_Load_function_type )( CvBlobSeq &,::cv::FileStorage &,::cv::FileNode & );
            
            CvBlobSeq_exposer.def( 
                "Load"
                , default_Load_function_type( &CvBlobSeq_wrapper::default_Load )
                , ( bp::arg("inst"), bp::arg("fs"), bp::arg("node") )
                , "\nArgument 'fs':"\
    "\n    C++ type: ::CvFileStorage *."\
    "\n    Python type: FileStorage."\
    "\nArgument 'node':"\
    "\n    C++ type: ::CvFileNode *."\
    "\n    Python type: FileNode." );
        
        }
        { //::CvBlobSeq::Write
        
            typedef void ( *default_Write_function_type )( CvBlobSeq &,::cv::FileStorage &,char const * );
            
            CvBlobSeq_exposer.def( 
                "Write"
                , default_Write_function_type( &CvBlobSeq_wrapper::default_Write )
                , ( bp::arg("inst"), bp::arg("fs"), bp::arg("name") )
                , "\nArgument 'fs':"\
    "\n    C++ type: ::CvFileStorage *."\
    "\n    Python type: FileStorage." );
        
        }
    }

    bp::class_< CvBlobTrack >( "CvBlobTrack" )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvBlobTrack >() )    
        .def_readwrite( "StartFrame", &CvBlobTrack::StartFrame )    
        .def_readwrite( "TrackID", &CvBlobTrack::TrackID )    
        .add_property( "pBlobSeq", bp::make_function(&::get_CvBlobTrack_pBlobSeq, bp::return_internal_reference<>()) );

    { //::CvBlobTrackSeq
        typedef bp::class_< CvBlobTrackSeq_wrapper > CvBlobTrackSeq_exposer_t;
        CvBlobTrackSeq_exposer_t CvBlobTrackSeq_exposer = CvBlobTrackSeq_exposer_t( "CvBlobTrackSeq", bp::init< bp::optional< int > >(( bp::arg("TrackSize")=(int)(12u) )) );
        bp::scope CvBlobTrackSeq_scope( CvBlobTrackSeq_exposer );
        CvBlobTrackSeq_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< CvBlobTrackSeq >() );
        bp::implicitly_convertible< int, CvBlobTrackSeq >();
        { //::CvBlobTrackSeq::AddBlobTrack
        
            typedef void ( ::CvBlobTrackSeq::*AddBlobTrack_function_type )( int,int ) ;
            typedef void ( CvBlobTrackSeq_wrapper::*default_AddBlobTrack_function_type )( int,int ) ;
            
            CvBlobTrackSeq_exposer.def( 
                "AddBlobTrack"
                , AddBlobTrack_function_type(&::CvBlobTrackSeq::AddBlobTrack)
                , default_AddBlobTrack_function_type(&CvBlobTrackSeq_wrapper::default_AddBlobTrack)
                , ( bp::arg("TrackID"), bp::arg("StartFrame")=(int)(0) ) );
        
        }
        { //::CvBlobTrackSeq::Clear
        
            typedef void ( ::CvBlobTrackSeq::*Clear_function_type )(  ) ;
            typedef void ( CvBlobTrackSeq_wrapper::*default_Clear_function_type )(  ) ;
            
            CvBlobTrackSeq_exposer.def( 
                "Clear"
                , Clear_function_type(&::CvBlobTrackSeq::Clear)
                , default_Clear_function_type(&CvBlobTrackSeq_wrapper::default_Clear) );
        
        }
        { //::CvBlobTrackSeq::DelBlobTrack
        
            typedef void ( ::CvBlobTrackSeq::*DelBlobTrack_function_type )( int ) ;
            typedef void ( CvBlobTrackSeq_wrapper::*default_DelBlobTrack_function_type )( int ) ;
            
            CvBlobTrackSeq_exposer.def( 
                "DelBlobTrack"
                , DelBlobTrack_function_type(&::CvBlobTrackSeq::DelBlobTrack)
                , default_DelBlobTrack_function_type(&CvBlobTrackSeq_wrapper::default_DelBlobTrack)
                , ( bp::arg("TrackIndex") ) );
        
        }
        { //::CvBlobTrackSeq::DelBlobTrackByID
        
            typedef void ( ::CvBlobTrackSeq::*DelBlobTrackByID_function_type )( int ) ;
            typedef void ( CvBlobTrackSeq_wrapper::*default_DelBlobTrackByID_function_type )( int ) ;
            
            CvBlobTrackSeq_exposer.def( 
                "DelBlobTrackByID"
                , DelBlobTrackByID_function_type(&::CvBlobTrackSeq::DelBlobTrackByID)
                , default_DelBlobTrackByID_function_type(&CvBlobTrackSeq_wrapper::default_DelBlobTrackByID)
                , ( bp::arg("TrackID") ) );
        
        }
        { //::CvBlobTrackSeq::GetBlobTrack
        
            typedef ::CvBlobTrack * ( ::CvBlobTrackSeq::*GetBlobTrack_function_type )( int ) ;
            typedef ::CvBlobTrack * ( CvBlobTrackSeq_wrapper::*default_GetBlobTrack_function_type )( int ) ;
            
            CvBlobTrackSeq_exposer.def( 
                "GetBlobTrack"
                , GetBlobTrack_function_type(&::CvBlobTrackSeq::GetBlobTrack)
                , default_GetBlobTrack_function_type(&CvBlobTrackSeq_wrapper::default_GetBlobTrack)
                , ( bp::arg("TrackIndex") )
                , bp::return_internal_reference< >() );
        
        }
        { //::CvBlobTrackSeq::GetBlobTrackByID
        
            typedef ::CvBlobTrack * ( ::CvBlobTrackSeq::*GetBlobTrackByID_function_type )( int ) ;
            typedef ::CvBlobTrack * ( CvBlobTrackSeq_wrapper::*default_GetBlobTrackByID_function_type )( int ) ;
            
            CvBlobTrackSeq_exposer.def( 
                "GetBlobTrackByID"
                , GetBlobTrackByID_function_type(&::CvBlobTrackSeq::GetBlobTrackByID)
                , default_GetBlobTrackByID_function_type(&CvBlobTrackSeq_wrapper::default_GetBlobTrackByID)
                , ( bp::arg("TrackID") )
                , bp::return_internal_reference< >() );
        
        }
        { //::CvBlobTrackSeq::GetBlobTrackNum
        
            typedef int ( ::CvBlobTrackSeq::*GetBlobTrackNum_function_type )(  ) ;
            typedef int ( CvBlobTrackSeq_wrapper::*default_GetBlobTrackNum_function_type )(  ) ;
            
            CvBlobTrackSeq_exposer.def( 
                "GetBlobTrackNum"
                , GetBlobTrackNum_function_type(&::CvBlobTrackSeq::GetBlobTrackNum)
                , default_GetBlobTrackNum_function_type(&CvBlobTrackSeq_wrapper::default_GetBlobTrackNum) );
        
        }
    }

    bp::class_< CvCamShiftTracker >( "CvCamShiftTracker" )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvCamShiftTracker >() );

    bp::class_< CvConDensation >( "CvConDensation" )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvConDensation >() )    
        .def_readwrite( "DP", &CvConDensation::DP )    
        .def_readwrite( "MP", &CvConDensation::MP )    
        .def_readwrite( "SamplesNum", &CvConDensation::SamplesNum );

    bp::class_< CvDefParam >( "CvDefParam" )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvDefParam >() )    
        .def_readwrite( "Double", &CvDefParam::Double )    
        .def_readwrite( "Float", &CvDefParam::Float )    
        .def_readwrite( "Int", &CvDefParam::Int )    
        .add_property( "next", bp::make_function(&::get_CvDefParam_next, bp::return_internal_reference<>()) )    
        .add_property( "pName", &::get_CvDefParam_pName )    
        .add_property( "pComment", &::get_CvDefParam_pComment )    
        .add_property( "Str", &::get_CvDefParam_Str );

}
