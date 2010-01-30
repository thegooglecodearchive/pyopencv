// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "__convenience.pypp.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "CvDTree.pypp.hpp"

namespace bp = boost::python;

struct CvDTree_wrapper : CvDTree, bp::wrapper< CvDTree > {

    CvDTree_wrapper(CvDTree const & arg )
    : CvDTree( arg )
      , bp::wrapper< CvDTree >(){
        // copy constructor
        
    }

    CvDTree_wrapper( )
    : CvDTree( )
      , bp::wrapper< CvDTree >(){
        // null constructor
    
    }

    virtual void clear(  ) {
        if( bp::override func_clear = this->get_override( "clear" ) )
            func_clear(  );
        else{
            this->CvDTree::clear(  );
        }
    }
    
    void default_clear(  ) {
        CvDTree::clear( );
    }

    virtual ::CvDTreeNode * predict( ::cv::Mat const & _sample, ::cv::Mat const & _missing_data_mask=cv::Mat(), bool preprocessed_input=false ) const  {
        if( bp::override func_predict = this->get_override( "predict" ) )
            return func_predict( boost::ref(_sample), boost::ref(_missing_data_mask), preprocessed_input );
        else{
            return this->CvDTree::predict( boost::ref(_sample), boost::ref(_missing_data_mask), preprocessed_input );
        }
    }
    
    ::CvDTreeNode * default_predict( ::cv::Mat const & _sample, ::cv::Mat const & _missing_data_mask=cv::Mat(), bool preprocessed_input=false ) const  {
        return CvDTree::predict( boost::ref(_sample), boost::ref(_missing_data_mask), preprocessed_input );
    }

    virtual void read( ::CvFileStorage * fs, ::CvFileNode * node ) {
        namespace bpl = boost::python;
        if( bpl::override func_read = this->get_override( "read" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_read.ptr(), fs, node );
        }
        else{
            CvDTree::read( boost::python::ptr(fs), boost::python::ptr(node) );
        }
    }
    
    static void default_read_cddeea9f785886a2157e6dbd38d882a3( ::CvDTree & inst, ::cv::FileStorage & fs, ::cv::FileNode & node ){
        if( dynamic_cast< CvDTree_wrapper * >( boost::addressof( inst ) ) ){
            inst.::CvDTree::read(fs.fs, *(node));
        }
        else{
            inst.read(fs.fs, *(node));
        }
    }

    virtual void read( ::CvFileStorage * fs, ::CvFileNode * node, ::CvDTreeTrainData * data ) {
        namespace bpl = boost::python;
        if( bpl::override func_read = this->get_override( "read" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_read.ptr(), fs, node, data );
        }
        else{
            CvDTree::read( boost::python::ptr(fs), boost::python::ptr(node), boost::python::ptr(data) );
        }
    }
    
    static void default_read_ea82e003cd38c548aefac78eb636ff45( ::CvDTree & inst, ::cv::FileStorage & fs, ::cv::FileNode & node, ::CvDTreeTrainData * data ){
        if( dynamic_cast< CvDTree_wrapper * >( boost::addressof( inst ) ) ){
            inst.::CvDTree::read(fs.fs, *(node), data);
        }
        else{
            inst.read(fs.fs, *(node), data);
        }
    }

    virtual bool train( ::cv::Mat const & _train_data, int _tflag, ::cv::Mat const & _responses, ::cv::Mat const & _var_idx=cv::Mat(), ::cv::Mat const & _sample_idx=cv::Mat(), ::cv::Mat const & _var_type=cv::Mat(), ::cv::Mat const & _missing_mask=cv::Mat(), ::CvDTreeParams params=::CvDTreeParams( ) ) {
        if( bp::override func_train = this->get_override( "train" ) )
            return func_train( boost::ref(_train_data), _tflag, boost::ref(_responses), boost::ref(_var_idx), boost::ref(_sample_idx), boost::ref(_var_type), boost::ref(_missing_mask), params );
        else{
            return this->CvDTree::train( boost::ref(_train_data), _tflag, boost::ref(_responses), boost::ref(_var_idx), boost::ref(_sample_idx), boost::ref(_var_type), boost::ref(_missing_mask), params );
        }
    }
    
    bool default_train( ::cv::Mat const & _train_data, int _tflag, ::cv::Mat const & _responses, ::cv::Mat const & _var_idx=cv::Mat(), ::cv::Mat const & _sample_idx=cv::Mat(), ::cv::Mat const & _var_type=cv::Mat(), ::cv::Mat const & _missing_mask=cv::Mat(), ::CvDTreeParams params=::CvDTreeParams( ) ) {
        return CvDTree::train( boost::ref(_train_data), _tflag, boost::ref(_responses), boost::ref(_var_idx), boost::ref(_sample_idx), boost::ref(_var_type), boost::ref(_missing_mask), params );
    }

    virtual void write( ::CvFileStorage * fs, char const * name ) const  {
        namespace bpl = boost::python;
        if( bpl::override func_write = this->get_override( "write" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_write.ptr(), fs, name );
        }
        else{
            CvDTree::write( boost::python::ptr(fs), name );
        }
    }
    
    static void default_write_d5b05f94ebb65d268cbd4756fe0d6221( ::CvDTree const & inst, ::cv::FileStorage & fs, char const * name ){
        if( dynamic_cast< CvDTree_wrapper const* >( boost::addressof( inst ) ) ){
            inst.::CvDTree::write(fs.fs, name);
        }
        else{
            inst.write(fs.fs, name);
        }
    }

    virtual void write( ::CvFileStorage * fs ) const  {
        namespace bpl = boost::python;
        if( bpl::override func_write = this->get_override( "write" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_write.ptr(), fs );
        }
        else{
            CvDTree::write( boost::python::ptr(fs) );
        }
    }
    
    static void default_write_d1e064f966d50e01902f80ef0f045741( ::CvDTree const & inst, ::cv::FileStorage & fs ){
        if( dynamic_cast< CvDTree_wrapper const* >( boost::addressof( inst ) ) ){
            inst.::CvDTree::write(fs.fs);
        }
        else{
            inst.write(fs.fs);
        }
    }

    virtual void load( char const * filename, char const * name=0 ) {
        if( bp::override func_load = this->get_override( "load" ) )
            func_load( filename, name );
        else{
            this->CvStatModel::load( filename, name );
        }
    }
    
    void default_load( char const * filename, char const * name=0 ) {
        CvStatModel::load( filename, name );
    }

    virtual void save( char const * filename, char const * name=0 ) const  {
        if( bp::override func_save = this->get_override( "save" ) )
            func_save( filename, name );
        else{
            this->CvStatModel::save( filename, name );
        }
    }
    
    void default_save( char const * filename, char const * name=0 ) const  {
        CvStatModel::save( filename, name );
    }

};

void register_CvDTree_class(){

    bp::class_< CvDTree_wrapper, bp::bases< CvStatModel > >( "CvDTree", bp::init< >() )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvDTree >() )    
        .def( 
            "clear"
            , (void ( ::CvDTree::* )(  ) )(&::CvDTree::clear)
            , (void ( CvDTree_wrapper::* )(  ) )(&CvDTree_wrapper::default_clear) )    
        .def( 
            "get_data"
            , (::CvDTreeTrainData * ( ::CvDTree::* )(  ) )( &::CvDTree::get_data )
            , bp::return_internal_reference< >() )    
        .def( 
            "get_pruned_tree_idx"
            , (int ( ::CvDTree::* )(  ) const)( &::CvDTree::get_pruned_tree_idx ) )    
        .def( 
            "get_root"
            , (::CvDTreeNode const * ( ::CvDTree::* )(  ) const)( &::CvDTree::get_root )
            , bp::return_internal_reference< >() )    
        .def( 
            "predict"
            , (::CvDTreeNode * ( ::CvDTree::* )( ::cv::Mat const &,::cv::Mat const &,bool ) const)(&::CvDTree::predict)
            , (::CvDTreeNode * ( CvDTree_wrapper::* )( ::cv::Mat const &,::cv::Mat const &,bool ) const)(&CvDTree_wrapper::default_predict)
            , ( bp::arg("_sample"), bp::arg("_missing_data_mask")=cv::Mat(), bp::arg("preprocessed_input")=(bool)(false) )
            , bp::return_internal_reference< >() )    
        .def( 
            "read_cddeea9f785886a2157e6dbd38d882a3"
            , (void (*)( ::CvDTree &,::cv::FileStorage &,::cv::FileNode & ))( &CvDTree_wrapper::default_read_cddeea9f785886a2157e6dbd38d882a3 )
            , ( bp::arg("inst"), bp::arg("fs"), bp::arg("node") ) )    
        .def( 
            "read_ea82e003cd38c548aefac78eb636ff45"
            , (void (*)( ::CvDTree &,::cv::FileStorage &,::cv::FileNode &,::CvDTreeTrainData * ))( &CvDTree_wrapper::default_read_ea82e003cd38c548aefac78eb636ff45 )
            , ( bp::arg("inst"), bp::arg("fs"), bp::arg("node"), bp::arg("data") ) )    
        .def( 
            "train"
            , (bool ( ::CvDTree::* )( ::cv::Mat const &,int,::cv::Mat const &,::cv::Mat const &,::cv::Mat const &,::cv::Mat const &,::cv::Mat const &,::CvDTreeParams ) )(&::CvDTree::train)
            , (bool ( CvDTree_wrapper::* )( ::cv::Mat const &,int,::cv::Mat const &,::cv::Mat const &,::cv::Mat const &,::cv::Mat const &,::cv::Mat const &,::CvDTreeParams ) )(&CvDTree_wrapper::default_train)
            , ( bp::arg("_train_data"), bp::arg("_tflag"), bp::arg("_responses"), bp::arg("_var_idx")=cv::Mat(), bp::arg("_sample_idx")=cv::Mat(), bp::arg("_var_type")=cv::Mat(), bp::arg("_missing_mask")=cv::Mat(), bp::arg("params")=::CvDTreeParams( ) ) )    
        .def( 
            "write_d5b05f94ebb65d268cbd4756fe0d6221"
            , (void (*)( ::CvDTree const &,::cv::FileStorage &,char const * ))( &CvDTree_wrapper::default_write_d5b05f94ebb65d268cbd4756fe0d6221 )
            , ( bp::arg("inst"), bp::arg("fs"), bp::arg("name") ) )    
        .def( 
            "write_d1e064f966d50e01902f80ef0f045741"
            , (void (*)( ::CvDTree const &,::cv::FileStorage & ))( &CvDTree_wrapper::default_write_d1e064f966d50e01902f80ef0f045741 )
            , ( bp::arg("inst"), bp::arg("fs") ) )    
        .def_readwrite( "pruned_tree_idx", &CvDTree::pruned_tree_idx )    
        .def( 
            "load"
            , (void ( ::CvStatModel::* )( char const *,char const * ) )(&::CvStatModel::load)
            , (void ( CvDTree_wrapper::* )( char const *,char const * ) )(&CvDTree_wrapper::default_load)
            , ( bp::arg("filename"), bp::arg("name")=bp::object() ) )    
        .def( 
            "save"
            , (void ( ::CvStatModel::* )( char const *,char const * ) const)(&::CvStatModel::save)
            , (void ( CvDTree_wrapper::* )( char const *,char const * ) const)(&CvDTree_wrapper::default_save)
            , ( bp::arg("filename"), bp::arg("name")=bp::object() ) );

}
